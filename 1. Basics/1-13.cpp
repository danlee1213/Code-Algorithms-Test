#include <stdio.h>

int count[10]; //Initialize as zero, count how many numbers from input string has been used between 0 ~ 9

int main(){
    //freopen("input.txt", "rt", stdin);
    int n, digit = 0, result = 0, max = -2147000000;
    //Read input as a string
    char input[101];
    scanf("%s", &input);
    for(int i=0; input[i]!='\0'; ++i){
        digit = input[i]-48; //Change string number to integer
        count[digit]++;
    }
    //For short code
    for(int i=0; i<=9; ++i){
        if(count[i] >= max){
            max = count[i];
            result = i;
        }
    }
    /* My code, pass 100%
    for(int i=0; i<=9; ++i){
        if(count[i] > max){
            max = count[i];
            result = i;
        }
        else if(count[i] == max){
            if(i > result){
                result = i;
            }
        }
    }*/
    printf("%d", result);
    return 0;
}