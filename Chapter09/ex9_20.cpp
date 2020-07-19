#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main() {
    deque<int> odd, even;
    list<int> lst{1,2,3,4,5,6,7,8,9};
    for(list<int>::const_iterator itr = lst.cbegin(); itr != lst.cend();) {
        odd.push_back(*itr++);
        if(itr == lst.cend()) break;
        even.push_back(*itr++);
    }
    for(deque<int>::const_iterator i = odd.cbegin(); i != odd.cend(); i++) {
        cout << *i;
    }
    cout << endl;
    for(deque<int>::const_iterator i = even.cbegin(); i != even.cend(); i++) {
        cout << *i;
    }
    cout << endl;
    return 0;
}