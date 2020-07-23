# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

using namespace std;

void biggies(vector<string> &svec, string::size_type sz) {
    sort(svec.begin(), svec.end(), [](const string& s1, const string& s2){return s1 < s2;});
    auto uniq_last = unique(svec.begin(), svec.end());
    svec.erase(uniq_last, svec.end());
    stable_sort(svec.begin(), svec.end(), [](const string& s1, const string& s2){return s1.size() < s2.size();});
    auto goal = find_if(svec.begin(), svec.end(), [sz](const string& s){return s.size() >= sz;});
    for_each(goal, svec.end(), [](const string& s){cout << s << " ";});
    cout << endl;
}

int main() {
    vector<string> svec;
    string str;
    while(cin >> str) svec.push_back(str);
    biggies(svec, 3);

    return 0;
}