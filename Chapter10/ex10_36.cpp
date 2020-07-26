# include <iostream>
# include <list>
# include <algorithm>
# include <iterator>

using namespace std;

int main() {
    list<int> lst{1, 2, 0, 3, 4, 5, 6, 7, 0, 9};
    auto itr = find(lst.crbegin(), lst.crend(), 0);
    int pos = 0;
    while(itr != lst.crend()) {
        pos ++;
        itr ++;
    }
    cout << pos << endl;
}