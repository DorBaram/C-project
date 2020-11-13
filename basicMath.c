#include<stdio.h>
#include "myMath.h"
//adds two numbers x and y.
float add(float x, float y) {   
    float summery = x + y;      //normal addition
    return summery;
}
//remove y from x.
float sub(float x, float y){    
    float subtcract = x - y;    //normal subtraction
    return subtcract;
}
//multiply two numbers x and y.
double mul(double x, int y){    
    double multipication = y * x;   //normal multipication
    return multipication;
}
//divide y from x. Note- Dont devide by 0!
double div(double x, int y){    
    if(y==0)         //if divided be zero after i warrned you
        return 0.0;  //is that what you wanted?!? thanks for reading my commants BTW :D
    else
    {
       double division = x / y; //normal division
    return division; 
    }
}

