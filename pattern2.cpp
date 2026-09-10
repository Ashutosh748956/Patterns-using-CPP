// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
for (int i = 0 ; i < 4 ; i++){
    // for (int j = 0; j< i+1; j++)--->this also works same 
    for (int j = 0; j <= i ; j++){
        cout <<  "* " ;
        // cout << i;
    }
    cout << endl;
}
    return 0;
}