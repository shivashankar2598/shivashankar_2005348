#include <stdio.h>
#include <math.h>
int main()
{
  int num1=87,num2=99,hcf=1;
  //printf("Enter number\n");
  //scanf("%d %d",&num1,num2);
  int least=num1<num2?num1:num2;
 for(int i=2;i<=least;i++)
 {
     if((num1%i)==0 &&(num2%i)==0)
        {hcf=i;
        break;}

 }
 printf("The Hcf of %d and %d is %d",num1,num2,hcf);
}
