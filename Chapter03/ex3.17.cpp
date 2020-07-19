# include <iostream>
# include <string>
# include <vector>
# include <cctype>

using namespace std;

int main() {
    vector<string> svec;
    string str;
    while (cin >> str) {
        for(auto &c : str) {
            c = toupper(c);
        }
        svec.push_back(str);
    }
    for(auto e : svec) {
        cout << endl << e << endl;
    }
    return 0;
}