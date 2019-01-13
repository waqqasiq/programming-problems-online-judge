#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	int x=a+b+c;
	int y=a*b+c;
	int z=a+b*c;
	int q=a*(b+c);
	int h=a*b*c;
	int g=(a+b)*c;
	
	int max1=max(x,y);
	int max2=max(max1,z);
	int max3=max(max2,q);
	int max4=max(max3,h);
	int max5=max(max4,g);
	printf("%d\n",max5);
	
	
	return 0;
}