# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

using namespace std;

int main() {
    vector<int> vec; list<int> lst; int i;
    while(cin >> i) {
        lst.push_back(i);
    }
    copy(lst.cbegin(), lst.cend(), vec.begin());
    return 0;
}