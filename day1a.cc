#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    int maxCalTotal = 0;
    int curCalTotal = 0;
    int curCal = 0;
    string s;

    while (! cin.eof()) {
        getline(cin, s);

        if (s.empty()) { // blank line, so new elf
            if (curCalTotal > maxCalTotal) maxCalTotal = curCalTotal;
            curCalTotal = 0;
        } else {
            stringstream ss(s);
            ss >> curCal;
            curCalTotal += curCal;
        }
    }

    cout << "Elf is carrying " << maxCalTotal << " calories." << endl;
}