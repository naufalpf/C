#include <iostream>

using namespace std;

int main(){
int i, j, n;
    i=1;j=24;n=24;
    while(i<j){
        if(n%i==0){
            j=n/i;
            cout << i << endl;
        }
        i++;
    }

    while(i>0){
        if(n%i==0){
            j=n/i;
            if(i!=j)cout << j << " " << endl;
        }
        i--;
    }
    return 0;
}
