# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    fill_n(v.begin(), v.size(), 0);
    for(auto e : v) {
        cout << e << ", ";
    }
    cout << endl;
    return 0;
}