
#include<stdio.h>
#include<conio.h>
void main()
{
    char x;
    printf("enter the charecter:");
    scanf("%c" , &x);
    if(x=='A'||x=='I'||x=='O'||x=='U'||x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
    printf("It is vowel");
    }
    else
   {
       printf("It is consonent");
    }
}
