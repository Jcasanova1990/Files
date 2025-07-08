#include <fstream>
using namespace std;

int main() {
    ofstream file("lines.txt");
    file << "Line 1" << endl;
    file << "Line 2\n";
    file << "Line 3" << endl;
    file.close();
    return 0;
}
