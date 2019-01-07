//UVA 924 SPREAD THE NEWS BFS
#include <bits/stdc++.h>
using namespace std;
vector<int>v[2510];
int level[2510];
int visit[2510];
int boom[2510];


void bfs(int s){
	queue <int>q;
	q.push(s);
	level[s]=0;
	visit[s]=true;
	while(!q.empty()){
		int p=q.front();
		q.pop();
		for(int i=0;i<v[p].size();i++){
			if(visit[v[p][i]]==0){
				level[v[p][i]]=level[p]+1;
				q.push(v[p][i]);
				visit[v[p][i]]=1;
				boom[level[v[p][i]]]++;
			}//end if
		}//end for
	}//end while
}//end bfs function


int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		for(int j=0;j<a;j++){
			int x;
			cin>>x;
			v[i].push_back(x);
		}//end for
	}//end outer for
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
		memset(visit,0,sizeof(visit));
		memset(level,0,sizeof(level));
		memset(boom,0,sizeof(boom));
		int s;
		cin>>s;
		bfs(s); //calling bfs function
		int max=boom[0];
		int maxind=0;
		for(int k=1;k<n;k++){
			if(max<boom[k]){
				max=boom[k];
				maxind=k;
			}//end if
		}//end for
		if(v[s].size()==0){
			cout<<0<<endl;
		}
		else{
			cout<<max<<" "<<maxind<<endl;
		}
	}//end outer for
	return 0;
}//end main
