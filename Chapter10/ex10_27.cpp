# include <iostream>
# include <functional>
# include <vector>
# include <iterator>
# include <algorithm>

using namespace std;

void uniCopy(vector<int> &v1, vector<int> &v2) {
    unique_copy(v1.cbegin(), v1.cend(), back_inserter(v2));
}

int main() {
    vector<int> v1, v2;
    int i;
    while(cin >> i) v1.push_back(i);
    for_each(v1.cbegin(), v1.cend(), [](int i){cout << i << ", ";});
    cout << endl;
    uniCopy(v1, v2);
    for_each(v2.cbegin(), v2.cend(), [](int i){cout << i << ", ";});
    cout << endl;
    return 0;
}