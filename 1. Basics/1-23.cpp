#include <stdio.h>


int main(){
    //freopen("input.txt", "rt", stdin);
    int n, prev, now, counter, max = -2147000000;
    scanf("%d", &n);
    scanf("%d", &prev); //Already read 0th element
    counter = 1; //If the read first input, counter begins with 1, it counts the first input
    //So for loop starts from 1st element
    for(int i=1; i<n; ++i){
        scanf("%d", &now);
        if(now >= prev){
            counter++;
            if(counter > max) max = counter;
        }
        else{
            counter = 1;
        }
        prev = now;
    }
    printf("%d", max);
    return 0;
}