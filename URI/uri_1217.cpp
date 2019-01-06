// URI 1217 - Getline Two - Fruits
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	int num=1;
	int sumkg=0;
	double sum=0;
	for(int i=1; i<=n; i++){
		double x;
		cin>>x;
		sum=sum+x;
	  	string name;
	  	while(getline(cin,name)){
	  		getline(cin,name);
	  		break;
	  	}//end while
  		string s = name;
  		vector<string> result;
  		istringstream my(s);
		for(string s; my >> s; ){
			result.push_back(s);
		}
		cout<<"day "<<i<<":"<<" "<<result.size()<<" kg"<<endl;
		sumkg=sumkg+result.size();
   	} //end outer for
	double avgc=sumkg*1.0/n;
	double avg=sum/n;
	cout<<fixed << setprecision(2)<<avgc<<" kg by day"<<endl;
	cout<<fixed << setprecision(2)<<"R$ "<<avg<<" by day"<<endl;
	return 0;
}//end main
