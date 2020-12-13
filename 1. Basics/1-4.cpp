#include <iostream>

//For the number of people N, find the biggest age difference among those peple.
//Using file i/o
int main(){
    //Using freopen to read input.txt file, rt=readtext -> this function is for debugging
    //freopen("input.txt", "rt", stdin); //stdin -> put input and read from cin
    //Initialize the max,min of the integer type
    int n, a, max = -2147000000, min = 2147000000;
    std::cin>>n;

    for(int i=1; i<=n; ++i){
        std::cin>>a;
        if(a > max) max = a;
        if(a < min) min = a; 
    } 

    std::cout<< max - min;
    return 0;
}