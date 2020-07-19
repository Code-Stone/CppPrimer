# include <iostream>
# include <fstream>
# include <vector>
# include <string>

using namespace std;

void readfile(string& fn, vector<string>& svec) {
    string str;
    ifstream is(fn);
    while(getline(is, str)) {
        svec.push_back(str);
    }
}

int main() {
    string file{"test.txt"};
    vector<string> svec;
    readfile(file, svec);
    for(auto e : svec) {
        cout  << e << endl;
    }
    return 0;
}