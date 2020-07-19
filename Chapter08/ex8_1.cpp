# include <iostream>
# include <string>
# include <vector>

using namespace std;

istream& read(istream& is) {
    string str;
    vector<string> vs;
    while(is >> str) {
        vs.push_back(str);
    }
    for(auto e : vs) {
        cout << e << endl;
    }
    cout << endl;
    is.clear();
    return is;
}

int main() {
    read(cin);
    return 0;
}