#include <iostream>int main(){    int sum = 0;    for(int i = 1; i < 10; ++i){        for(int j = 1; j < 10; ++j){            sum += i * j;        }    }    int n;    std::cin >>n;    int vari = sum - n;    for(int i = 1; i < 10; ++i){        if(0 == vari % i && vari / i < 10){            std::cout << i << " x " << vari / i << std::endl;        }    }    return 0;}