# include <iostream>
# include <deque>
# include <string>

using namespace std;

int main() {
    deque<string> deq;
    string str;
    while(cin >> str) {
        deq.push_back(str);
    }

    for(deque<string>::const_iterator citr = deq.cbegin(); citr != deq.cend(); citr++) {
        cout << *citr << endl;
    }
}