#include <bits/stdc++.h>
using namespace std;
//UVA 10018 Reverse and Add
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int a;
		cin>>a;
		long long int b=a;
		long long int c=a;
		int w=a;
		int r=1;
		while(1){
			long long int p=b;
		//	cout<<b<<endl;
		int counter=0;
		while(b>0){
			b=b/10;
			counter++;
			
		}
		counter--;
		//cout<<counter<<endl;
		int y=0;
		int z=0;
		
		while(c>0){
			y=c%10;
			c=c/10;
			z=z+y*pow(10,counter);
			counter--;
		}
	//	cout<<z<<endl;
		long long int sum=p+z;
		//cout<<sum<<endl;
		
	long long 	int num=sum;
		int dig=0;
        long long int rev = 0;
        while (num > 0)
       {
          dig = num % 10;
          rev = rev * 10 + dig;
          num = num / 10;
       }
      // cout<<rev<<endl;
       if(rev==sum){
       	cout<<r<<" "<<sum<<endl;
       	break;
       }
       
       b=sum;
       c=sum;
       r++;
       
		}
       
		
		
	}
	return 0;
}