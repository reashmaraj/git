#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char str[10];
int i=0;
int flag;
printf("Enter the string:");
scanf("%s",str);
for(i=0;i<strlen(str);i++)
{
if(isalpha(str[i])!=0)
{
flag=1;
}
}
if(flag==1)
{
printf("the string is not numeric");
}
else
{
printf("the string is numeric");
}
}

