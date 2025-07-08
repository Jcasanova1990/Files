#include <fstream>
using namespace std;

int main() {
    // Output mode (overwrite)
    ofstream outFile("data.txt", ios::out);
    outFile << "This is overwritten.\n";
    outFile.close();

    // Append mode (preserve old content)
    ofstream appendFile("data.txt", ios::app);
    appendFile << "This is appended.\n";
    appendFile.close();

    return 0;
}
