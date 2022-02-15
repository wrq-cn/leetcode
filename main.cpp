#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:

};

void coinN(const int & n)
{
    int f[100];
    f[0] = 0;
    int cost = 100000;
    for (int i = 1; i <= n; i++) {
        int cost = 100000;
        int sel = 0;
        if (i - 1 >= 0) {
            cost = min(cost, f[i-1] + 1);
            if (f[i-1] + 1 < cost) sel = 1;
        }
        if (i - 5 >= 0) cost = min(cost, f[i-5] + 1);
        if (i - 11 >= 0) cost = min(cost, f[i-11] + 1);

        f[i] = cost;
        cout<<"i:"<<f[i]<<endl;
    }
}

int main() {
    coinN(15);
    return 0;
}