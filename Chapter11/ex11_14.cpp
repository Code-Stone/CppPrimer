# include <iostream>
# include <string>
# include <vector>
# include <map>
# include <algorithm>
# include <utility>

using namespace std;

int main() {
    map<string, vector<pair<string, string>>> family;
    string family_name;
    string given_name;
    string birth;
    while(cin >> family_name >> given_name >> birth) {
        pair<string, string> p{given_name, birth};
        family[family_name].push_back(p);
    }
    for(auto e : family) {
        cout << e.first << ": " << endl;
        for(auto i : e.second) {
            cout << e.first << ", " << i.first << ": " << i.second << endl;
        }
        cout << endl;
    }
    return 0;
}