#include<iostream>
#include<vector>

using namespace std;

bool searchValue(vector<int> v, const int i) {
    for(vector<int>::const_iterator itr = v.cbegin(); itr != v.cend(); itr++) {
        if(i == *itr) return true;
    }
    return false;
}

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6};
    cout<<searchValue(v, 5);
    return 0;
}