# include <iostream>
# include <string>
# include <utility>
# include <vector>

using namespace std;

int main() {
    vector<pair<string, int>> v;
    string str;
    int i;
    while(cin >> str >> i) {
        // pair<string, int> p{str, i};
        // auto p = make_pair(str, i);
        // pair<string, int> p(str, i);
        pair<string, int> p;
        p.first = str;
        p.second = i;
        v.push_back(p);
    }
    for(auto e : v) cout << e.first << ", " << e.second << endl;
    return 0;
}