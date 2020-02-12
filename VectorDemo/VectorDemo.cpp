// VectorDemo.cpp 
// LAnce Zotigh(lzotigh1@cnm.edu)
// Date: 2/12/2020
// Purpose: To demo vectors and random

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    // Variables
    vector<string> names;
    string name;

    // Start a do another loop
    do {
        //Get name from user
        cout << "Please enter a name: ";
        getline(cin, name);

        // If user name is not "" add to vector
        if (name != "") {
            names.push_back(name);
        }
        // Loop back if input is not ""
    } while (name != "");

    //Loop through vector and display it
    for (int i = 0; i < names.size(); ++i) {
        cout << names.at(i) << endl;
    }

    return 0;
}
