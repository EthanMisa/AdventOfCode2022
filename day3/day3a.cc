#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int priority(char c) {
    if ('a' <= c && c <= 'z') return c - 'a' + 1;
    else return c - 'A' + 27;
}

int main() {
    string s;
    int total = 0;
    while (!cin.eof()){
        getline(cin, s);
        int len = s.size();
        int half = len / 2;
        string first = s.substr(0, half);
        string second = s.substr(half, half);
        
        
        for (int i = 0; i < first.size(); ++i) {
            if (second.find(first[i]) != string::npos) {
                total += priority(first[i]);
                
                break;
            }
            
        }
    }
    cout << "The total is: " << total << endl;

}