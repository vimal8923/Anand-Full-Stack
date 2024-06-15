#include<stdio.h>
#include<string.h>

int main()
{
    char name[10];
    int count =0;
    printf("Please Enter Any Name ");
    scanf("%s",&name);

    for(int i=strlen(name); i>=0; i--)
    {
        printf("%c",name[i]);
    }

    return 0;
}