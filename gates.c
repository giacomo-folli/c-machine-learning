#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

// OR gate
float train_data[][3] = {
    {0, 0, 0},
    {0, 1, 0},
    {1, 0, 0},
    {1, 1, 1},
};

#define train_size (sizeof(train_data) / sizeof(train_data[0]))
static const float E = 2.718281828459045;

float rand_float();
float cost(float w1, float w2, float b);
float sigmoidf(float x);

int main(void)
{
  srand(time(0));

  float w1 = rand_float();
  float w2 = rand_float();
  float b = rand_float();
  float eps = 1e-1;
  float rate = 1e-1;

  for (int i = 0; i < 1000 * 1000; ++i)
  {
    float c = cost(w1, w2, b);
    float d1 = (cost(w1 + eps, w2, b) - c) / eps;
    float d2 = (cost(w1, w2 + eps, b) - c) / eps;
    float db = (cost(w1, w2, b + eps) - c) / eps;
    // printf("w1 = %f, w2 = %f, c = %f\n", w1, w2, c);

    w1 -= rate * d1;
    w2 -= rate * d2;
    b -= rate * db;
  }

  printf("-----------------------------------------------------------\n");
  printf("w1 = %f, w2 = %f, c = %f, b = %f\n", w1, w2, cost(w1, w2, b), b);
  printf("-----------------------------------------------------------\n");

  for (size_t i = 0; i < 2; i++)
  {
    for (size_t j = 0; j < 2; j++)
    {
      printf("%zu | %zu = %f\n", i, j, sigmoidf(i * w1 + j * w2 + b));
    }
  }

  return 0;
}

// ----------------------------------------------------------- //

float cost(float w1, float w2, float b)
{
  float result = 0.f;

  for (size_t i = 0; i < train_size; i++)
  {
    // take the two inputs
    float x1 = train_data[i][0];
    float x2 = train_data[i][1];

    // weight them and add
    float y = sigmoidf(x1 * w1 + x2 * w2 + b);

    // find the distance between actual and expected outcome
    float d = y - train_data[i][2];

    // update the total cost value
    result += d * d;
  }

  // divide by number of cycles to get the mean
  result /= train_size;

  return result;
}

float rand_float()
{
  return (float)rand() / (float)RAND_MAX;
}

float sigmoidf(float x)
{
  // logistic function
  return (1.f / (1.f + expf(-x)));
}