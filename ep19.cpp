#include <stdio.h>

int main()
{
  int score;
  printf("input your socre:");
  scanf("%d",&score);
  if(score>=80&&score<=100)
  {
    printf("A");
  }
  else if(score>=70)
  {
    printf("B");
  }
  else if(score>=60)
  {
    printf("C");
  }
  else if(score>=50)
  {
    printf("D");
  }
  else
  {
    printf("F");
  }

	return 0;
}
