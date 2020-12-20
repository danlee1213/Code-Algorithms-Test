#include <stdio.h>

int main(){
    //freopen("input.txt", "rt", stdin);
    int n, counter = 0, flag = 0;
    scanf("%d", &n);
    //1 is not a prime number so except 1 at the beginning, so the loop starts from 2
    for(int i=2; i<=n; ++i){
        //Flag starts with true(1);
        flag = 1;
        //Fast way to calculate prime numbers = Only check square roots of the given n
        for(int j=2; j*j<=i; ++j){
            if(i % j == 0){
                flag = 0;
                break; 
            }
        }
        if(flag == 1) counter++;
    }
    printf("%d", counter);
    return 0;
}

/*This code works, but get time limit over 200000
 int n, counter = 0, flag = 0;
    scanf("%d", &n);
    //1 is not a prime number so except 1 at the beginning, so the loop starts from 2
    for(int i=2; i<=n; ++i){
        //Flag starts with true(1);
        flag = 1;
        //Now determine whether i is a prime number or not
        for(int j=2; j<i; ++j){
            if(i % j == 0){
                flag = 0;
                break; 
            }
        }
        if(flag == 1) counter++;
    }
    printf("%d", counter);
    */