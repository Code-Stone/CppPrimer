# include <iostream>
# include <string>

using namespace std;

class Person {
    // Constructors
    Person() = default;

    friend istream &read(istream&, Person &);
    friend ostream &print(ostream&, Person &);

    string address;
    string name;

    public: 
    string getAddress() const {return address;}
    string getName() const {return name;}
};

istream &read(istream &is, Person &per) {
    is >> per.name >> per.address;
    return is;
}

ostream &print(ostream &os, const Person &per) {
    os << "name: " << per.getName() << ", address: " << per.getAddress();
    return os;
}

int main() {

    return 0;
}

