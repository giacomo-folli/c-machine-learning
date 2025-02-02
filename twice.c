#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// OR gate
float train_data[][3] = {
    {0, 0, 0},
    {0, 1, 1},
    {1, 0, 1},
    {1, 1, 1},
};

#define train_size (sizeof(train_data) / sizeof(train_data[0]))

float rand_float();
float cost(float w1, float w2);

int main(void)
{
  srand(69);
  float w1 = rand_float();
  float w2 = rand_float();

  printf("w1 = %f, w2 = %f\n", w1, w2);
  float c = cost(w1, w2);
  printf("%f\n", c);
  return 0;
}

float cost(float w1, float w2)
{
  float result = 0.f;

  for (size_t i = 0; i < train_size; i++)
  {
    float x1 = train_data[i][0];
    float x2 = train_data[i][1];
    float y = x1 * w1 + x2 * w2;
    float d = y - train_data[i][2];
    result += d * d;
  }

  result /= train_size;

  return result;
}

float rand_float()
{
  return (float)rand() / (float)RAND_MAX;
}