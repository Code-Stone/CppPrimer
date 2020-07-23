# include <iostream>
# include <vector>
# include <algorithm>
# include <string>

using namespace std;

class Sales_data {
    private:
    string ISBN;

    public:
    Sales_data() = default;
    Sales_data(const string str) : ISBN(str) {}
    string isbn() {return ISBN;}
};

void compareIsbn(vector<Sales_data> &vec) {
    sort(vec.begin(), vec.end(), [](Sales_data s1, Sales_data s2) {return s1.isbn() < s2.isbn();});
}

int main() {
    vector<Sales_data> vec;
    string isbn;
    while(cin >> isbn) {
        vec.push_back(Sales_data(isbn));
    }
    compareIsbn(vec);
    for(vector<Sales_data>::iterator itr = vec.begin(); itr != vec.end(); itr++) cout << (*itr).isbn() << endl;
    return 0;
}