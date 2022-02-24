#include <stdio.h>
int input()
{
  int a;
  printf("Enter the number of terms: ");
  scanf("%d", &a);
  return a;
}
int find_fibo(int n)
{
  int nextterm;
  int x = 0, y = 1;
  for (int i = 1; i < n;i++)
  {
    nextterm=y;
    y=y+x;
    x=nextterm;  
  }
  return x;
}
void output(int n, int fibo)
{
  printf("the %d th term of fibo deries is %d ",n,fibo);
}
int main()
{
  int a,z;
  a=input();
  z=find_fibo(a);
  output(a,z);
  return 0;
}
