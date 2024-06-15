#include<stdio.h>

int main()
{
    int phy;
    int chem;
    int math;
    int sum =0;
    float average =0;

    printf("Enter Phy : ");
    scanf("%d",&phy);
    printf("Enter Chem : ");
    scanf("%d",&chem);
    printf("Enter Math ");
    scanf("%d",&math);

    sum = phy + chem + math;
    average = sum / 3;

    printf("\nTotal Marks : %d",sum);
    printf("\nAverage is : %f",average);



    return 0;
}