# include <iostream>
# include <algorithm>
# include <string>
# include <vector>

using namespace std;

int main() {
    vector<string> svec;
    string str;
    while(cin >> str) {
        svec.push_back(str);
    }
    auto g = find(svec.begin(), svec.end(), "dream");
    cout << g - svec.begin() << endl;
    cout << count(svec.begin(), svec.end(), "a") << endl;
    return 0;   
}