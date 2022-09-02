#include<stdio.h>
void singledigit(int);
void twodigit(int);
void threedigit(int);
void fourdigit(int);
void fivedigit(int);
void sixdigit(int);
void sevendigit( long int);
void eightdigit(long int);
void tenthline(int);
int x=20;
int main()
{
     long int n;
    printf("enter the number:");
    scanf("%ld", &n);
    if(n/10000000)
        eightdigit(n);
    else if(n/1000000)
        sevendigit(n);
    else if (n / 100000)
        sixdigit(n);
    else if (n / 10000 )
        fivedigit(n);
    else if (n / 1000 )
        fourdigit(n);
    else if (n / 100 )
        threedigit(n);
    else if (n / 10 )
        twodigit(n);
        else singledigit(n);
    return 0;
}
void eightdigit(long int n)
{
    singledigit(n/10000000);
    printf(" crore");
    if(n!=0)
    sevendigit(n%1000000);
}
void sevendigit(long int n){
    if(n!=0)
    {
        twodigit(n / 100000);
        printf(" lakh");
        fivedigit(n % 100000);
    }
}
void sixdigit(int n)
{
    switch(n/100000)
    {
        case 1:printf("one lakh");break;
        case 2:printf("two lakh");break;
        case 3:printf("three lakh");break;
        case 4:printf("four lakh");break;
        case 5:printf("five lakh");break;
        case 6:printf("six lakh");break;
        case 7:printf("seven lakh");break;
        case 8:printf("eight lakh");break;
        case 9:printf("nine lakh");break;
        case 10:printf("ten lakh");break;
    }
    if(n!=0)
    fivedigit(n%100000);
}
void fivedigit(int n)
{
    twodigit(n/1000);
    printf(" thousand");
    if(n!=0)
    threedigit(n%1000);
}
void fourdigit(int n)
{
    singledigit(n/1000);
    printf(" thousand");
    if(n!=0)
    threedigit(n%1000);
}
void threedigit(int n)
{
    singledigit(n/100);
    printf(" hundread");
    if(n%100!=0)
    twodigit(n%100);
}
void twodigit(int n)
{
    switch(n/10)
    {   
        case 1:tenthline(n%10);break;
        case 2:printf(" twenty");break;
        case 3:printf(" thirty");break;
        case 4:printf(" forty");break;
        case 5:printf(" fifty");break;
        case 6:printf(" sixty");break;
        case 7:printf(" seventy");break;
        case 8:printf(" eighty");break;
        case 9:printf(" ninty");break;
    }
    if(n/10!=1)
    singledigit(n%10);
}
void singledigit(int n)
{
    switch(n)
    {   
        case 0:printf(" zero");break;
        case 1:printf(" one");break;
        case 2:printf(" two");break;
        case 3:printf(" three");break;
        case 4:printf(" four");break;
        case 5:printf(" five");break;
        case 6:printf(" six");break;
        case 7:printf(" seven");break;
        case 8:printf(" eight");break;
        case 9:printf(" nine");break;
    }
}
void tenthline(int n)
{
    switch(n)
    {
        case 0:printf(" ten");break;
        case 1:printf(" eleven");break;
        case 2:printf(" tweleve");break;
        case 3:printf(" thirteen");break;
        case 4:printf(" fourteen");break;
        case 5:printf(" fifteen");break;
        case 6:printf(" sixteen");break;
        case 7:printf(" seventeen");break;
        case 8:printf(" eighty");break;
        case 9:printf(" nineteen");break;
    }
}

