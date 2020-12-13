#include <iostream>

//Find the sum of all proper divisor of a natural number 
int main(){
    int n, sum = 0;
    std::cin>>n;
    //All integers include '1' as the proper divisor so print '1' first and then '+' others
    std::cout<<"1";

    for(int i=2; i<n; ++i){
        if(n % i == 0){
            std::cout<< "+" << i;
            sum += i;
        }
    }
    //Need to add 1 since for loop starts from 2
    std::cout<< "=" << sum+1;
    
    return 0;
}