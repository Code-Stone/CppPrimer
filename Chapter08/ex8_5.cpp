# include <iostream>
# include <fstream>
# include <string>
# include <vector>

using namespace std;

void readfilebyword(const string& filename, vector<string>& svec) {
    ifstream is(filename);
    if(is) {
        string str;
        // >> can escape the space
        while(is >> str) {
            svec.push_back(str);
        }
    }
    else cout << "Fail to open the file!\n" << endl;
}

int main() {
    string filename{"test.txt"};
    vector<string> svec;
    readfilebyword(filename, svec);
    for(auto e : svec) {
        cout << e << endl;
    }

    return 0;
}