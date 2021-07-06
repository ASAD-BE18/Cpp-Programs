#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[]) {
    cout << "Enter character: " << endl;
    char c;
    cin >> c;
    cout << "character = '" << c << "'" << endl;
    int i = c; // same as  int i = (int)c;  
    cout << "int value of character = " << i << endl;
    if(isdigit(c)){
      cout << "character is the digit " << c - '0' << endl;
      //the built-in function atoi(&c) will give you same result here 
    } else
    {
        cout << "character is not digit" << endl;
    }
    return 0;
}
