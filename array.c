#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter no.of elements:");
    scanf("%d",&n);
    int scores[n];
    int sum=0;
    for (int i=0; i < n; i++)         //scores[0]=30,  scores[1]=35,  scores[2]=7,   i=3
    {                                  //sum=0
      printf("Enter scores[%d]:",i);
      scanf("%d", &scores[i]);
      sum=sum+scores[i];
    }
    printf("Average: %f\n", (float)sum / n);
}