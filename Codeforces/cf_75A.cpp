#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a;
	cin>>b;
	
	int sum=a+b;
	int w=sum;
	int x=a;
	int y=b;
	int d1=0;
	int d2=0;
	int d3=0;
	while(x>0){
		x=x/10;
		d1++;
		
		
	}
	while(y>0){
		y=y/10;
		
		d2++;
		
		
	}
	while(w>0){
		w=w/10;
		d3++;
		
	}
	int arr1[d1];
	int arr2[d2];
	int arr3[d3];
	for(int i=0;i<d1;i++){
		arr1[i]=0;
	}
	for(int i=0;i<d2;i++){
		arr2[i]=0;
	}
	for(int i=0;i<d3;i++){
		arr3[i]=0;
	}
	int j=0;
	for(int i=0;i<d1;i++){
		int f=a%10;
		if(f!=0){
		arr1[j]=f;
		j++;
		}
		
		a=a/10;
	}
	int k=0;
	for(int i=0;i<d2;i++){
		int f=b%10;
		if(f!=0){
		arr2[k]=f;
		k++;
		
		}
		
		b=b/10;
	}
	
	int l=0;
	for(int i=0;i<d3;i++){
		int f=sum%10;
		if(f!=0){
		arr3[l]=f;
		l++;
		
		}
		
		sum=sum/10;
	}
	
	
	int r=0;
	int h=j;
	for(int i=j-1;i>=0;i--){
		r=r+arr1[i]*pow(10,h-1);
		h--;
	}
	
	int u=0;
	int v=k;
	for(int i=k-1;i>=0;i--){
		u=u+arr2[i]*pow(10,v-1);
		v--;
	}
	
	int z=0;
	int q=l;
	for(int i=l-1;i>=0;i--){
		z=z+arr3[i]*pow(10,q-1);
		q--;
	}
	
	if(r+u==z){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	
	
	return 0;
}