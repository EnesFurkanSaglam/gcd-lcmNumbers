#include <stdio.h>
#include <stdlib.h>


int func(a,b) // this function calculate the gcd
{
    int gcd;
    if(a>b)
    {
        for(int i=1; i<=b; i++)
        {
            if(a%i==0 && b%i==0)
                gcd=i;


        }
        return gcd;


    }
    else if(b>a)
    {
        for(int i=1; i<=a; i++)
        {
            if(a%i==0 && b%i==0)
                gcd=i;


        }
        return gcd;

    }
    else // they are equal
    {
        return a;
    }

}
int main()
{
    int a; // this is for first number
    int b; // this is for second number
    int c; // this for gcd
    printf("input 2 numbers:\n");
    scanf("%d%d",&a,&b);
    c=func(a,b);
    printf("gcd: %d\n",c);
    int lcm=a*b/c; //lcm = number1 * number2 / gcd
    printf("lcm: %d\n",lcm);





    return 0;
}
