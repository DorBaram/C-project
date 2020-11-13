#include "power.c"
#include <stdio.h>

void calci (double x){               //i. f(x) = e^x + x^3 − 2
    int expo = (int)x;              //casts x into int
    double first = Exponent(x);     //computes e^x 
    double second = Power(x,3);     //computes x^3 
    int third = 2;                  
    double ans = sub(add(first,second),third);  //computes first+second-third

    printf("i.     The value of f(x) = e^x + x^3 - 2 at the point %0.4lf is: %0.4lf \n" ,x , ans);
}

void calcii(double x){                  //ii. f(x) = 3x + 2X^2
    double first = mul(x,3);            //computes 3x
    double second = mul(Power(x,2),2);  //computes 2X^2
    double ans = add(first,second);     //computes first + second

    printf("ii.    The value of f(x) = 3x + 2x^2     at the point %0.4lf is: %0.4lf \n" ,x , ans);
}


    void calciii(double x){                      //iii. f(x) = (4x^3)/5 -2x 
    double first = div(mul(Power(x,3),4),5);    //computes (4x^3)/5
    double ans = sub(first,mul(x,2));           //computes first-2x

    printf("iii.   The value of f(x) = (4x^3)/5 - 2x at the point %0.4lf is: %0.4lf \n" ,x , ans);
}

int main()
{
    printf("Please inset a real number: ");
    double x = 0.0;

    int test = 0;
    while (test !=1){
        if(scanf("%lf",&x)==1)
            test = 1;
    }
    calci(x);
    calcii(x);
    calciii(x);
    return 0;
}


