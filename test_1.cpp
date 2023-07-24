#include <bits/stdc++.h>
using namespace std;

int main(){
    int selection;
    do {
        cout << "Pls choose your selection \n";
        cout << "1. HUST" << endl;
        cout << "2. FTU" << endl;
        cout << "3. KMA" << endl;
        cout << "4. VNU" << endl;
        cin >> selection;
        if(cin.fail()){
            cerr<<"Invalid input!"<<endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
    }
    while(selection < 1 || selection > 4);
    switch(selection){
        case 1:
            cout << "Your selection: " << "HUST";
            break;
        case 2:
            cout << "Your selection: " << "FTU";
            break;
        case 3:
            cout << "Your selection: " << "KMA";
            break;
        case 4:
            cout << "Your selection: " << "VNU";
            break;
    }

    
    return 0;
}