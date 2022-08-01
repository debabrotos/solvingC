#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>  

int main()
{
    char N[] = "1234 1232      34 2 1234 12324324 23213";
    int counter = 1;
    int flag = 0;
    for (int i = 0; i<strlen(N);i++){
        if(N[i] == ' ' && flag==0){
            counter++;
        }
        if(N[i] == ' ')
            flag = 1;
        else flag = 0;
    }
    printf("%d", counter);
}
