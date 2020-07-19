#include<iostream>
#include<vector>

using namespace std;

vector<int>::iterator searchElement(vector<int> vec, int value) {
    for(vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++) {
        if(value == *itr) return itr;
    }
    return vec.end();
}

int main() {
    vector<int> vec{1, 2, 3, 4, 5, 6};
    cout << *(searchElement(vec, 5)) << endl;
    return 0;
}