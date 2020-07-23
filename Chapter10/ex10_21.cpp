# include <iostream>

using namespace std; 

int main() {
    int i = 3;
    auto lambda = [&] () -> bool {if(i == 0) return false; i--; return true;};
    while(lambda());
    cout << lambda() << endl;
    return 0;
}