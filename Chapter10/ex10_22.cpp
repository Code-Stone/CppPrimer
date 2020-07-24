# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <functional>

using namespace std;
using namespace std::placeholders;

bool lessThanSix(const string& str) {return str.size() <= 6;}

void countWords(vector<string>& svec) {
    int c = count_if(svec.cbegin(), svec.cend(), bind(lessThanSix, _1));
    cout << c << endl;
}

int main() {
    vector<string> svec;
    string str;
    while(cin >> str) svec.push_back(str);
    countWords(svec);
    return 0;
}