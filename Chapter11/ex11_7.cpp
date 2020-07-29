# include <iostream>
# include <string>
# include <vector>
# include <map>
# include <algorithm>

using namespace std;

int main() {
    map<string, vector<string>> family;
    string name;
    while(cin >> name) {
        string family_name;
        string given_name;
        auto pos = find_if(name.begin(), name.end(), [](char c){return ispunct(c);});
        family_name = string(name.begin(), pos);
        given_name = string(pos+1, name.end());
        family[family_name].push_back(given_name);
        cout << family[family_name].size() << endl;
    }
    for(auto e : family) {
        cout << e.first << ": " << endl;
        for(auto i : e.second) {
            cout << e.first << ", " << i << endl;
        }
        cout << endl;
    }
    return 0;
}