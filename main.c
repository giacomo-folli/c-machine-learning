#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float train_data[][2] = {
    {0, 0},
    {1, 2},
    {2, 4},
    {3, 6},
    {4, 8},
};

#define train_size (sizeof(train_data) / sizeof(train_data[0]))

float cost(float w, float b); // evaluation cost function
float rand_float();           // get a random float value

int main()
{
  srand(69);

  float w = rand_float() * 10.f;
  float b = rand_float() * 5.f;

  float eps = 1e-3;
  float rate = 1e-3;

  for (size_t i = 0; i < 1000; i++)
  {
    float c = cost(w, b);
    float dw = (cost(w + eps, b) - c) / eps;
    float db = (cost(w + eps, b) - c) / eps;
    w -= dw * rate;
    b -= db * rate;
    printf("cost = %f, w = %f, b = %f\n", c, w, b);
  }

  printf("-------------------\n");
  printf("w = %f, b = %f\n", w, b);

  return 0;
}

// -------------------------------------------------- //

float rand_float()
{
  return (float)rand() / (float)RAND_MAX;
}

float cost(float w, float b)
{
  float result = 0.f;

  for (size_t i = 0; i < train_size; i++)
  {
    float x = train_data[i][0];
    float y = x * w + b;
    float d = train_data[i][1] - y;
    result += d * d;
  }

  result /= train_size;

  return result;
}
