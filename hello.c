# include<stdio.h>
int main(){

char a;

printf("enter character");
scanf("%c", &a);


if (a>='0' && a<='9')
{
printf("it is a digit");
}
else 
{
    printf("it is not a digit");

}


    return 0;
}
