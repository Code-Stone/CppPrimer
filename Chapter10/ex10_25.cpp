# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string& str, int sz) {
    return str.size() > sz;
}

void biggies(vector<string> svec, int sz) {
    sort(svec.begin(), svec.end());
    stable_sort(svec.begin(), svec.end(), [](const string& s1, const string& s2){return s1.size() < s2.size();});
    auto part = stable_partition(svec.begin(), svec.end(), bind(check_size, _1, sz));
    auto uni = unique(svec.begin(), part);
    svec.erase(uni, svec.end());
    for_each(svec.begin(), svec.end(), [](const string& s){cout << s << endl;});    
}

int main() {
    vector<string> svec;
    string str;
    while(cin >> str) svec.push_back(str);
    biggies(svec, 2);
    return 0;
}