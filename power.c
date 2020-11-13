#include <stdio.h>
#include "basicMath.c"
//#include "myMath.h"

//#define EXP 2.718281828459; // thats actualy an infinite number called e, named after euler.

double Exponent(int x){
    double ans = 0.0;
    while(x>0){
        if(ans==0){ ans = ans + EXP;}   //for starting the loop
        else{ ans = ans * EXP;}         //every step it multiply with e
        x--;
    }
    return ans;
}

double Power(double x , int y){        //will multiply x by itself y times
    double ans = 0.0;
    while(y>0){
        if(ans==0){ ans = ans + x;}   //for starting the loop
        else{ ans = ans * x;}         //every step it multiply with x
        y--;
    }
    return ans;
}

