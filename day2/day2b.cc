#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    map<char, int> points_map;
    points_map['P'] = 2; // paper
    points_map['R'] = 1; // rock
    points_map['S'] = 3; // scissors
    points_map['Y'] = 3;
    points_map['X'] = 0;
    points_map['Z'] = 6;
    
    int points = 0;
    char them, you;
    while (!cin.eof()) {
        cin >> them >> you;
        if (cin.eof()) break;
        
        if (them == 'A') { // rock
            if (you == 'Y') points += points_map['R'];
            else if (you == 'X') points +=  points_map['S'];
            else if (you == 'Z') points += points_map['P'];
            points += points_map[you];
        } else if (them == 'B') { // paper
            if (you == 'Y') points += points_map['P'];
            else if (you == 'X') points += points_map['R'];
            else if (you == 'Z') points += points_map['S'];
            points += points_map[you];
        } else { // scissor
            if (you == 'Y') points += points_map['S'];
            else if (you == 'X') points += points_map['P'];
            else if (you == 'Z') points += points_map['R'];
            points += points_map[you];
        }
       
        
    }

    cout << "Total score is: " << points << endl;
}