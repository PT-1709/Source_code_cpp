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
        if(cin.fail()){                         // Đây là kiểm tra đầu vào
            cerr<<"Invalid input!"<<endl;       // In ra nếu sai
            cin.clear();                        // Xoá bộ nhớ
            cin.ignore(32767, '\n');            // Xoá bộ nhớ
        }
    }
    while(selection < 1 || selection > 4);      // lựa chọn
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