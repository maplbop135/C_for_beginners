/*
Created by: Go keeper
file name: "#03.intAdder.c"
Blog link:
    https://blog.naver.com/maplbop135/222009227886
    https://github.com/maplbop135/C_for_beginners/blob/master/%2303.intAdder.c

input :
    a, b
output:
    a + b
*/

#include <stdio.h>

int intAdder(int a, int b){
  return a + b;
}

int main()
{
  int num1, num2, result;

  printf("Insert two numbers(ex> 10 20): ");
  scanf("%d %d", &num1, &num2);
  result = intAdder(num1, num2);
  printf("%d + %d = %d\n", num1, num2, result);

  return 0;
}
