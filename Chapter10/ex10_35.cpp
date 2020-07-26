# include <iostream>
# include <vector>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto itr = --v.cend(); itr != v.cbegin(); --itr) {
        cout << *itr << endl;
    }
    cout << *v.cbegin() << endl;
    return 0;
}