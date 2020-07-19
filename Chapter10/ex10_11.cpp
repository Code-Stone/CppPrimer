# include <iostream>
# include <vector>
# include <algorithm>
# include <string>

using namespace std;

void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    auto end_uniques = unique(words.begin(), words.end());
    words.erase(end_uniques, words.end());
}

bool isLonger(const string& str1, const string& str2) {
    return str1.size() > str2.size();
}

void longerSortedString(vector<string> &words) {
    elimDups(words);
    stable_sort(words.begin(), words.end(), isLonger);
}

int main() {
    vector<string> svec;
    string str;
    while (cin >> str) svec.push_back(str);
    longerSortedString(svec);
    for(vector<string>::const_iterator itr = svec.cbegin(); itr != svec.cend(); itr++) {
        cout << *itr << endl;
    }

    int i = 1;
    const int e = i;
    return 0;
}