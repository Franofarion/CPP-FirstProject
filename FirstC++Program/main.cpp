//
//  main.cpp
//  FirstC++Program
//
//  Created by Baptiste Domange on 15/08/2022.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "What is your name?" << endl;
    
    string name {};
    cin >> name;
    cout << "You said your name is: " << name << endl;
    return 0;
}
