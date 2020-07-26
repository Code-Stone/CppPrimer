# include <iostream>
# include <iterator>
# include <vector>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto ritr = v.crbegin(); ritr != v.crend(); ritr++) cout << *ritr << endl;
    return 0;
}