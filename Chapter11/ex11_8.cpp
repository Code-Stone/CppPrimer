# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    vector<int> vec;
    int i;
    while(cin >> i) {
        auto itr = find(vec.cbegin(), vec.cend(), i);
        if(itr == vec.cend()) vec.push_back(i);
        else cout << "The element has exist!" << endl;
    }
    for_each(vec.cbegin(), vec.cend(), [](const int i){cout << i << ", ";});
    cout << endl;
    return 0;
}