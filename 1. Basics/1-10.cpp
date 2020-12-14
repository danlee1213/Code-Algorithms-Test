#include <stdio.h>

int digit_sum(int x){
    int last_digit, sum = 0;
    while(x > 0){
        last_digit = x % 10;
        sum += last_digit;
        x = x / 10;
    }
    return sum;
}

int main(){
    //freopen("input.txt", "rt", stdin);
    int n, num, sum, result, max = -2147000000;
    scanf("%d", &n);

    for(int i=0; i<n; ++i){
        scanf("%d", &num);
        sum = digit_sum(num);
        if(sum > max){
            max = sum;
            result = num;
        }
        else if(sum == max){
            if(num > result){
                result = num;
            }
        }
    }
    printf("%d", result);

    return 0;
}