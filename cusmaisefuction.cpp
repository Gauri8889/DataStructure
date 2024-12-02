#include <iostream>
#include <vector>
#include <algorithm>
#include<forward_list>
using namespace std;
int cmp(int a,int b){return a>b;}
int main() {
    // vector<int> v{2, 4, 2, 1, 5};
    forward_list<int>v{2,5,7,4,99};
    // sort(v.begin(), v.end(), greater<int>()); // Sort in descending order
    // sort(v.begin(), v.end(), cmp);
    v.remove_if([](int a){return a>5;});

    for(auto p : v) {
        cout << p << " ";
    }

    return 0;
}
