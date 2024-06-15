#include<stdio.h>

int main()
{
    int number[10];
    int temp =0;
    printf("Please Enter Any Number ");

    for(int i=0; i<10; i++)
    {
        scanf("%d",&number[i]);
    }
    for(int j=0;j<10;j++)
    {
        for(int k=1+j;k<10;k++)
        {
            if(number[j]>number[k])
            {
                temp=number[j];
                number[j]=number[k];
                number[k]=temp;
            }
        }
    }

    printf("\n*******Ascending order********\n\n");

    for(int x=0; x<10; x++)
    {
        printf("%d ",number[x]);
    }

    return 0;
}