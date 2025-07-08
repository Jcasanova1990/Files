#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    ifstream file("example.txt");
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string token;

        while (getline(ss, token, ',')) { // Tokenize by comma
            cout << "Token: " << token << endl;
        }
    }

    file.close();
    return 0;
}
