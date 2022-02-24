#include<stdio.h>
int input_number()
{
int a;
printf("Enter a number:\n");
scanf("%d",&a);
return a;
}
int is_prime(int n)
{
int a;
int flag=0;
if(a<=2){
  printf("Enter the number greater than 2");
}
else{
  for(int i=2;i<a;i++){
    if(a%i==0){
      return 0;
      break;
    }
  }
}
return(1) ;
}
void output(int n, int is_prime)
{
if(is_prime==0)
{
  printf("it is a prime number");
}
else
{
  printf("it is composite");
}
}
int main()
{
  int p,q,n;
  p=input_number();
  q=is_prime(n);
  output(n,q);
  return 0;
}
