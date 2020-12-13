#include <iostream>

//Find the sum of the integers from A to B;
int main(){
    int a, b, sum = 0;
    std::cin>>a>>b;

    for(int i=a; i < b; ++i){
        std::cout << i << "+";
        sum += i;
    }

    std::cout << b << "=";
    std::cout << sum + b;

    return 0;
}