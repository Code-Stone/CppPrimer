# include <iostream>
# include <vector>
# include <list>
# include <iterator>

using namespace std;

int main() {
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto itr1 = v.crend() - 4;
    auto itr2 = v.crend() - 8;
    list<int> lst;
    auto in = inserter(lst, lst.begin());
    for(auto itr = itr2; itr != itr1; itr++) in = *itr;
    for(int e : lst) cout << e << endl;
    return 0;
}