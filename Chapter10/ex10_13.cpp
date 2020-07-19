# include <iostream>
# include <algorithm>
# include <string>
# include <vector>

using namespace std;

bool longerThanFive(const string str) {
    return str.size() >= 5;
}

void partwords(vector<string>& words) {
    auto itr2 = partition(words.begin(), words.end(), longerThanFive);
    for(auto itr1 = words.begin(); itr1 != itr2; itr1++ ) {
        cout << *itr1 << endl;
    }
}

int main() {
    vector<string> svec;
    string str;
    while(cin >> str) svec.push_back(str);
    partwords(svec);
    return 0;
}