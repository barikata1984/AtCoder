#include <iostream>#include <algorithm>#include <vector>int main(){    int n;    std::cin >> n;    std::vector<int> x(n);    for(int i = 0; i < n; ++i){        std::cin >> x.at(i);    }    std::vector<int> y(x);    std::sort(y.begin(), y.end());    for(int i = 0; i < n; ++i){        if(x.at(i) <= y.at(n / 2 - 1)){            std::cout << y.at(n / 2) << std::endl;        }else{            std::cout << y.at(n / 2 - 1) << std::endl;        }    }    return 0;}