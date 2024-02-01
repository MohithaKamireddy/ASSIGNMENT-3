#include <stdio.h>
int main()
{
int num,x,y,z;
printf("Enter the number");
scanf("%d", &num);
x=num*num;
y= x/100;
z=x%100;
if(num ==(y+z))
{
    printf("The entered number is a Kaprekar number");
}
else
{
    printf("The entered number is not a Kaprekar number");
}

return 0;
}