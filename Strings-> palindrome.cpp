#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string rev = "";

    for(int i=s.length()-1;i>=0;i--)
        rev += s[i];

    if(s == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
