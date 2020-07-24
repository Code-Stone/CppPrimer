# include <iostream>
# include <string>
# include <vector>
# include <functional>
# include <algorithm>

using namespace std;
using namespace std::placeholders;

bool largers(const int i, const string& str) {return i > str.size();}

int biggers(vector<int>& vec, const string& str) {
    auto pos = find_if(vec.cbegin(), vec.cend(), bind(largers, _1, str));
    return pos - vec.begin();
}

int main() {
    vector<int> vec;
    int i;
    while(cin >> i) vec.push_back(i);
    string str = string("aa");
    int pos =  biggers(vec, str);
    cout << pos << endl;
    return 0;
}