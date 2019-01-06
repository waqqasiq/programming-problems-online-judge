// URI 1437 - Turn Left!
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int n;
    
    while(cin>>n){
        char c[n];
        char x='N';
        if(n==0){
            break;
        }
        for(int i=0; i<n ; i++){
            cin>>c[i];
        }
        for(int i=0; i<n; i++){
            if(c[i]=='D' && x=='N'){
                x='L';
            }
            else if (x=='N' && c[i]=='E'){
                 x='O';
            }
            else if (x=='S' && c[i]=='D'){
                 x='O';
            }
            else if (x=='S' && c[i]=='E'){
                 x='L';
            }
            else if (x=='L' && c[i]=='D'){
                 x='S';
            }
            else if (x=='L' && c[i]=='E'){
                 x='N';
            }
            else if (x=='O' && c[i]=='D'){
                 x='N';
            }
            else if (x=='O' && c[i]=='E'){
                 x='S';
            }
        }//end for    
        cout<<x<<endl;
    }//end while
	return 0;
}//end main