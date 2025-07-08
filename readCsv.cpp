#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream file("data.csv");
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string cell;

        while (getline(ss, cell, ',')) {
            cout << "Value: " << cell << endl;
        }
    }

    file.close();
    return 0;
}
