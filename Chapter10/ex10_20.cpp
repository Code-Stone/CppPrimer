# include <iostream>
# include <vector>
# include <string>
# include <algorithm>

using namespace std;

int moreThanSix(const vector<string>& svec) {
    int count = count_if(svec.cbegin(), svec.cend(), [](const string& s) {return s.size() > 6;});
    return count;
}

int main() {
    vector<string> svec;
    string str;
    while(cin >> str) svec.push_back(str);
    cout << moreThanSix(svec) << endl;
    return 0;
}