#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    ifstream file("example.txt");

    if (file.is_open()) {
        // get() example
        char ch;
        file.get(ch);
        cout << "First character: " << ch << endl;

        // Reset file for getline
        file.clear();
        file.seekg(0); // Go back to beginning

        // getline() example
        string line;
        getline(file, line);
        cout << "First line: " << line << endl;

        // Reset file for rdbuf
        file.clear();
        file.seekg(0);

        // rdbuf() example
        stringstream buffer;
        buffer << file.rdbuf();  // Read all contents
        cout << "Full file:\n" << buffer.str() << endl;

        file.close();
    }
    return 0;
}
