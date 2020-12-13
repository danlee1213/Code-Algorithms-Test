#include <stdio.h>

//Extract all integers from string. Ignore first 0.
/*************************************
ASCII TABLE
Integer: 0 ~ 9 -> ASCII: 48 ~ 57
Upper letter: A ~ Z-> ASCII: 65 ~ 90
Lower letter: a ~ z -> ASCII: 97 ~ 122
**************************************/
int main(){
    //Input debugging
    //freopen("input.txt", "rt", stdin);
    char input[50];
    int result = 0, count = 0;
    scanf("%s", &input);

    //Indicate the end of the cstring NULL = '\0'
    for(int i=0; input[i] != '\0'; ++i){
        //According to ASCII, 48~57 is integer range, extract integer only
        if(input[i] >= 48 && input[i] <= 57){
            //Using this algorithm, it could ignore first 0 of the input
            result = result*10 + (input[i]-48); 
        }
    }
    printf("%d\n", result);
    //Count the number of proper dividors of the result
    for (int i=1; i<=result; ++i){
        if(result % i == 0){
            count += 1; //count++;
        }
    }
    printf("%d", count);
    return 0;
}