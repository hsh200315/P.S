#include <vector>
#include <iostream>
#include <cstdlib>
using namespace std;

long long sum(vector<int>& a) {
    long long ans = 0;
    int len = a.size();
    for (int i = 0; i < len; i++)
    {
        ans += a[i];
    }
    return ans;
}

