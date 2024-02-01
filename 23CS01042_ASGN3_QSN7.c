#include<stdio.h>
int main()
{
 float M,N,K,T,W; 
 printf("Enter the marks obtained, number of classes attended and number of classses conducted");
 scanf("%f %f %f ",&M,&N,&K);
 W= N/K;
 T= M*W;
 if(T>=90)
 {
    printf("Your score = %f ",T);
    printf("\n Grade: EX");
 }
else if (T>=80 && T<89)
{
    printf("Your score = %f  ",T);
    printf("\n Grade: A");
    }
    else if (T>=70 && T<79)
    {
        printf("Your score = %f ",T);
        printf("\n Grade: B");
    }
    else if(T>=60 && T<69)
    {
        printf("Your score = %f ",T);
        printf("\n Grade:C");
    }
    else if (T>=50 && T<59)
    {
        printf("Your score = %f ",T);
        printf("\n Grade:D");
    }
    else if(T>=40 && T<49 )
    {
        printf("Your score = %f",T);
        printf("\n Grade: E");
    }
    else 
    {
        printf("Your score = % f",T);
        printf("\n Grade: F");
    }
    return 0;

}