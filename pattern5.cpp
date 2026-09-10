// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 5;
for (int i = 1; i <= n ; i++){
    for (int j = 1;  j <= n-i+1 ; j++){
        cout <<  "* " ;
        // cout << j;/
    }
    cout << endl;
}
    return 0;
}