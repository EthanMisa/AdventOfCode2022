#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    map<char, int> points_map;
    points_map['Y'] = 2; // paper
    points_map['X'] = 1; // rock
    points_map['Z'] = 3; // scissors
    
    int points = 0;
    char them, you;
    while (!cin.eof()) {
        cin >> them >> you;
        if (cin.eof()) break;
        
        if (them == 'A') { // rock
            if (you == 'Y') points += 6;
            else if (you == 'X') points +=  3;
            else if (you == 'Z') points += 0;
            points += points_map[you];
        } else if (them == 'B') { // paper
            if (you == 'Y') points += 3;
            else if (you == 'X') points += 0;
            else if (you == 'Z') points += 6;
            points += points_map[you];
        } else { // scissor
            if (you == 'Y') points += 0;
            else if (you == 'X') points += 6;
            else if (you == 'Z') points += 3;
            points += points_map[you];
        }
       
        
    }

    cout << "Total score is: " << points << endl;
}