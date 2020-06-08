#include <stdio.h>
#include <math.h>
int main()
{
  int num1=10,num2=20,hcf=1;

  int least=num1<num2?num1:num2;
 for(int i=1;i<=least;i++)
 {
     if((num1%i)==0 &&(num2%i)==0)
        hcf=i;

 }
 printf("The Hcf of %d and %d is %d",num1,num2,hcf);
}

