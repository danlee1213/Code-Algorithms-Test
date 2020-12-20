#include <stdio.h>

int main(){
    //freopen("input.txt", "rt", stdin);
    int n , temp, count = 0;
    scanf("%d", &n);

    for(int i=1; i<=n; ++i){
        //cannot directly use i from for loop
        temp = i;
        //Short code, automatically catch n>=10
        while(temp > 0){
            temp = temp / 10;
            count ++;
        }
    }
        /*My answer = works
        if(temp >= 10){
            //Count the number separately if number >= 10
            while(temp > 0){
                temp = temp / 10;
                count ++;
            }
        }
        else{
            count ++;
        }
    }*/
    printf("%d", count);

    return 0;
}