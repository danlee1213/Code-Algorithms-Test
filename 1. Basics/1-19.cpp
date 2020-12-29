#include <stdio.h>

int a[101];

int main(){
    //freopen("input.txt", "rt", stdin);
    int n, m, max = 0, counter = 0;
    scanf("%d", &n);
    for(int i=0; i<n; ++i){ 
        scanf("%d", &m);
        a[i] = m; //Store input values in the integer array
    }
    max = a[n-1];
    //Reverse scan, for loop
    for(int i=n-1; i>=0; --i){
        if(a[i] > max){
            max = a[i];
            counter++;
        }
    }
 
    printf("%d", counter);
    return 0;
}