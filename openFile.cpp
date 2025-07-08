#include <fstream>
#include <iostream>
using namespace std;

int main () {

    ifstream file("example.txt");
    if (file.is_open()) {
        cout << "file opened successfully.\n";
        file.close();
    } else {
        cout << "failed to open.\n";
    }
    return 0;
}