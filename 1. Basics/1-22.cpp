#include <stdio.h>
#include <vector>

//int temperature[100000]; //Array of this huge size -> waste of memory, need dynamic memory allocation (vector)

int main(){
    //freopen("input.txt", "rt", stdin);
    int n, k, sum = 0, max = 0;
    scanf("%d %d", &n, &k);
    std::vector<int> temp(n); //Create int type vector with the size of 'n', initialize it as 0
    for(int i=0; i<n; ++i){
        //Storing input values in the integer array
        scanf("%d", &temp[i]);
    }  
    //Increment the sum of first mth numbers in a vector
    for(int i=0; i<k; ++i){
        sum += temp[i]; 
    }
    max = sum; 
    //Then from mth number use special formula to calculate the sum of adjacent numbers
    for(int i=k; i<n; ++i){
        sum = sum + (temp[i] - temp[i-k]);
        if(sum > max) max = sum;
    }
    printf("%d", max);

    return 0;
}