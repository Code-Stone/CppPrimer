# include <iostream>
# include <string>
# include <map>
# include <set>
# include <algorithm>

using namespace std;

int main() {
    map<string, size_t> word_count;
    set<string> exclude {"The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a"};
    string word;
    while(cin >> word) { 
        string words;
        auto pos = find_if(word.begin(), word.end(), [](char c){return ispunct(c);});
        if(pos != word.end())
            words = string(word.begin(), pos);
        else words = word;
        for_each(words.begin(), words.end(), [](char &c){c = tolower(c);});
        if(exclude.find(words) == exclude.end()) {
            ++word_count[words];
        }
    }
    for(const auto& w : word_count)
        cout << w.first << " occurs " << w.second << ((w.second > 1)? " times" : " time") << endl;
    return 0;
}