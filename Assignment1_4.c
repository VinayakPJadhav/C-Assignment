#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo1)
{
    if((iNo1 %5 )==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1=0;
    BOOL bRet=FALSE;
    printf("Enter Number : ");
    scanf("%d",&iValue1);
    
    bRet=Check(iValue1);

    if(bRet==TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("NOT Divisible by 5");
    }
    
    return 0;
}