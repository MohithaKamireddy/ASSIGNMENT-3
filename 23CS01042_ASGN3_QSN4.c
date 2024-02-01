#include <stdio.h>  
int main()  
{  
    int x1, y1, x2, y2, x3, y3, m, n;  
    printf("Enter points (x1, y1)");  
    scanf("%d%d", &x1, &y1);  
    printf("\n Enter points (x2, y2)");  
    scanf("%d%d", &x2, &y2);  
    printf("\n Enter points (x3, y3)");  
    scanf("%d%d", &x3, &y3);  
    m = (y2 - y1) / (x2 - x1);  
    n = (y3 - y2) / (x3 - x2);  
    if( m == n)  
    {  
        printf("\n All 3 points lie on the same line");  
    }  
    else  
    {  
        printf("\n All 3 points do not lie on the same line");  
    }  
    return 0;  
}