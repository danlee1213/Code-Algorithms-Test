#include <iostream>

// For given N, find the sum of the multiple of M.
int main(){
    int n, m, sum = 0;
    std::cin>>n>>m;

    for(int i=1; i <= n; ++i){
        //If i is multiple of m, i % m == 0
        if(i % m == 0){
            sum += i;
        }
    }

    std::cout << sum;

    return 0;
}