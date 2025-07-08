#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("output.txt"); // Opens (or creates) the file
    file << "Hello, file!" << endl;
    file.close();
    return 0;
}
