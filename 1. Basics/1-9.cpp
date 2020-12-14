#include <stdio.h>

//In the case of global variable, it automatically initializes its variable as 0, ex)int count[50000]
//But in the local variable, we have to initialize variable as 0, ex)int count[50000] = {0,}
//Local variable -> goes to stack of the memory -> not enough storage for big array
//Global variable -> goes to data of the memory -> big enough to store big array
int count[50001];

int main(){
    //freopen("input.txt", "rt", stdin);
    int n = 0;
    scanf("%d", &n);

    for(int i=1; i<=n; ++i){
        //this j loop calculates the no. of proper dividors of given i
        //j increments as the multiple of i, finding the multiple of i 
        for(int j=i; j<=n; j=j+i){
            //count increments as the multiple of i
            count[j]++;
        }
    }

    for(int i=1; i<=n; ++i){
        printf("%d",count[i]);
    }

    return 0;
}


    /* Time limit if n >= 30000, nested loop
    for(int i=1; i<=n; ++i){
        count = 0;
        //ex) If i=7, this loop finds dividors until 7%1 ~ 7%7
        for(int j=1; j<=i; ++j){
            if(i % j == 0){
                count ++;
            }
        }
         printf("%d", count);
    }
*/