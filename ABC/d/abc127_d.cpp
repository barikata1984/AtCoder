#include <iostream>#include <numeric>#include <vector>int main(){    int n, m;    std::cin >> n >> m;    std::vector<int> a;    for(int i = 0; i < n; ++i){        int  val;        std::cin >> val;        a.push_back(val);    }    std::sort(a.begin(), a.end());        std::vector<int> vec;    for(int i = 0; i < m; ++i){        int b, c;        std::cin >> b >> c;        for(int j = 0; j < b; ++j){            vec.push_back(c);        }    }    std::sort(vec.begin(), vec.end(), std::greater<int>());    int sz = vec.size();    long long add = 0;    int i = 0;    for(; i < sz; ++i){        if(a.at(i) <= vec.at(i)){            add += vec.at(i);        }else{            break;        }    }    std::cout << std::accumulate(a.begin() + i, a.end(), 0ll) + add << std::endl;    return 0;}