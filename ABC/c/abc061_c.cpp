#include <iostream>#include <vector>#include <cmath>const int NUM = std::pow(10, 5);int main(){    int n;    long long k;    std::cin >> n >> k;    std::vector<long long> counts(NUM, 0);    for(int i = 0; i < n; ++i){        int a, b;        std::cin >> a >> b;        counts.at(a - 1) += b;    }    int i = 0;    long long sum = 0;    while(sum < k){        sum += counts.at(i++);    }    std::cout << i << std::endl;    return 0;}