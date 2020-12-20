#include <stdio.h>

int reverse(int x){
    int lastDigit = 0;
    int temp = 0;
    while(x > 0){
        lastDigit = x % 10;
        temp = temp*10 + lastDigit;
        x = x / 10;
    }
    return temp;
}

bool isPrime(int x){
    bool flag = true;
    if(x == 1) return false; //1 is not a prime number
    for(int i=2; i<x; ++i){
        //If it has dividors, a number can't be a prime number
        if(x % i == 0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    //freopen("input.txt", "rt", stdin);
    int n, m, rev=0;
    int result = 0;
    scanf("%d", &n);
    
    for(int i=0; i<n; ++i){
        scanf("%d", &m);
        rev = reverse(m);
        if(isPrime(rev)){
            printf("%d ", rev);
        }
    }
   
    return 0;
}