#include <stdio.h>
#include<math.h>
int main()
{
    int h = 0 , k = 0 , r = 5 ;
    float x,y;
    scanf("%f %f",&x,&y);

    float calc = pow(x-h,2)+pow(y-k,2);

    if(calc<r*r){
        printf("inside circle");
    } else if(calc==r*r){
        printf("on circumference");
    } else{
        printf("outside circle");
    }

}