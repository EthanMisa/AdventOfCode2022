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
    string s1;
    string s2;
    string s3;
    int total = 0;
    while (!cin.eof()){
        getline(cin, s1);
        getline(cin, s2);
        getline(cin, s3);
        
        for (int i = 0; i < s1.size(); ++i) {
            if (s2.find(s1[i]) != string::npos && s3.find(s1[i]) != string::npos) {
                total += priority(s1[i]);   
                break;
            }
            
        }
    }
    cout << "The total is: " << total << endl;

}