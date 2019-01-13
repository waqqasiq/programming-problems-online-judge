#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m,a;
	cin>>n>>m>>a;
	double x=ceil(n*1.0/a);

	double y=ceil(m*1.0/a);

	long long int req=x*y;
	cout<<req<<endl;
	return 0;
}