#include <stdio.h>

int main(){
    //freopen("input.txt", "rt", stdin);
    //Number of each digit numbers
    //1 digit numbers (1~9) = 9
    //2 digit numbers (10~99) = 90
    //3 digit numbers (100~999) = 900
    //4 digit numbers (1000~9999) = 9000
    /*
    ex) 1 ~ 256 
    check 1 digit first: 9 < 256 -> 1 * 9 = 9
    check 2 digit: 9+90 < 256 -> 2 * 99 = 189
    check 3 digit: 99 + 900 > 256 -> 256 - 99 = 157 -> 3 * 157 = 471
    Total = 189 + 471 = 660
    */
    int n, sum=0, count=1, digit=9, result=0; //count -> n digit number, digit = total numbers in n digit number
    //We counts the 1 digit number first so initialize count=1, digit=9
    scanf("%d", &n);
    while(sum + digit < n){
        result = result + (count * digit); //Caculate 1 digit numbers
        sum = sum + digit; //Increment digit sum
        count++; //Now goes to 1 -> 2digit number
        digit = digit * 10; //Now go to the number of 2 digit numbers
    }
    //ex)256-99 = 157 -> 157 * 3 = 471 -> 189 + 471 = 660
    result = result + ((n-sum)*count);
    printf("%d", result);

    return 0;
}
   
