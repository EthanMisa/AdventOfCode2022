#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    int curCalTotal = 0;
    int curCal = 0;
    string s;
    int maxCals[3] = {0, 0, 0};

    while (! cin.eof()) {
        getline(cin, s);

        if (s.empty()) { // blank line, so new elf
            for (int i = 0; i < 3; ++i) {
                if (curCalTotal > maxCals[i]) {
                    maxCals[i] = curCalTotal; 
                    break;
                }
            }
            curCalTotal = 0;
        } else {
            stringstream ss(s);
            ss >> curCal;
            curCalTotal += curCal;
        }
    }

    cout << "The top three elves are carrying " << maxCals[0] + maxCals[1] + maxCals[2] << " calories total." << endl;
}