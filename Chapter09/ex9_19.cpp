# include <iostream>
# include <list>
# include <string>

using namespace std;

int main() {
    list<string> lst;
    string str;
    while(cin >> str) {
        lst.push_back(str);
    }

    for(list<string>::const_iterator citr = lst.cbegin(); citr != lst.cend(); citr++) {
        cout << *citr << endl;
    }
}