# include <iostream>
# include <algorithm>
# include <vector>
# include <string>

using namespace std;

void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main() {
    vector<string> svec;
    string str;
    while(cin >> str) {
        svec.push_back(str);
    }
    elimDups(svec);
    for(vector<string>::const_iterator itr = svec.cbegin(); itr != svec.cend(); itr++) 
        cout << *itr << endl;
    return 0;
}