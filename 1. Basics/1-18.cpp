#include <stdio.h>

int main(){
    //freopen("input.txt", "rt", stdin);
    int n, m, value, counter = 0, max = -2147000000;
    scanf("%d %d",&n, &m);
    for(int i=0; i<n; ++i){
        scanf("%d", &value);
        if(value > m){
            counter++; 
        }
        else{
            counter = 0;
        }
        if(counter > max) max = counter;
    }
    if(max == 0) printf("-1");
    else printf("%d", max);
    return 0;

}