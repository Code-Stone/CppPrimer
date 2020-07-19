# include <iostream>
# include <vector>
# include <numeric>

using namespace std;

int main() {
    vector<double> dvec{1.0, 2.0, 3.0};
    cout << accumulate(dvec.cbegin(), dvec.cend(), 0) << endl;
}