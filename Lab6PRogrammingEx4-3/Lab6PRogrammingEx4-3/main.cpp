//
//  main.cpp
//  Lab6PRogrammingEx4-3
//
//  Created by Gilbert W. Sanborn Jr on 2/16/23.
//

#include <iostream>

using namespace std;
int main() {
    int userNumber;
    int counter = 55;
    
    cout << "Enter a number between 0 and 35: ";
    cin >> userNumber;
    
    if(userNumber <= 9) {
        cout << userNumber << endl;
    }
    else {
        
        cout << static_cast<char>(counter + userNumber) << endl;
    }
    counter++;
    return 0;
}
