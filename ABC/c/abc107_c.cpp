#include <iostream>#include <vector>#include <cmath>#define INF 1000000007int main(){    int n, k;    std::cin >> n >> k;    std::vector<int> x(n);    for(int i = 0; i < n; ++i){        std::cin >> x.at(i);    }    auto left = x.begin();    int ans = INF, limit = n - k + 1;    for(int j = 0; j < limit; ++j){        auto right = left + k - 1;        ans = std::min(ans, *right - *left + std::min(std::abs(*left), std::abs(*right)));        ++left;    }    std::cout << ans << std::endl;    return 0;}