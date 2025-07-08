#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream file("data.csv");
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string cell;

        while (getline(ss, cell, ',')) {
            cout << setw(15) << left << cell;  // format with padding
        }
        cout << endl;
    }

    file.close();
    return 0;
}
