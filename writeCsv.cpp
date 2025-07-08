#include <fstream>
using namespace std;

int main() {
    ofstream file("output.csv");

    file << "Name,Age,City\n";
    file << "Alice,30,New York\n";
    file << "Bob,200025,Los Angeles\n";

    file.close();
    return 0;
}
