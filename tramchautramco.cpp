// kiểm tra tổng chữ cái của 1 số tự nhiêu có 
// số nguyên tố hay ko


#include <iostream>
#include <math.h>
using namespace std;

bool nt(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

bool check(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    if (nt(sum)){
        return true;
    }
    else{
        return false;
    } 
    
}

int main(){
    int n; cin >> n;
    if(check(n)){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}