#include <iostream>int main(){    int n, r;    std::cin >> n >> r;    if(n <= 10){        r += 100 * (10 - n);    }        std::cout << r << std::endl;    return 0;}