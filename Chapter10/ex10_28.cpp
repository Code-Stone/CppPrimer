# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <deque>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> v1, v2, v3;
    auto i1 = inserter(v1, v1.begin());
    auto i2 = back_inserter(v2);
    auto i3 = front_inserter(v3);
    for(vector<int>::const_iterator itr = v.cbegin(); itr != v.cend(); itr++)
    {
        *i1 = *itr;
        *i2 = *itr;
        *i3 = *itr;
    }
    for_each(v1.cbegin(), v1.cend(), [](int i){cout << i << ", ";});
    cout << endl;
    for_each(v2.cbegin(), v2.cend(), [](int i){cout << i << ", ";});
    cout << endl;
    for_each(v3.cbegin(), v3.cend(), [](int i){cout << i << ", ";});
    cout << endl;
    return 0;
}