#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream file("example.txt");

    if (file.is_open()) {
        file.ignore(5);  // Skip the first 5 characters
        char ch;
        file.get(ch);
        cout << "Character after ignoring: " << ch << endl;
        file.close();
    }

    return 0;
}
