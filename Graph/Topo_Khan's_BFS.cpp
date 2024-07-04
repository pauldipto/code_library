#include <bits/stdc++.h>
using namespace std;
 
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


vector<int> topoSort(int V, vector<int> adj[]) {
	int inDegree[V] = {0};
	for(int i = 0; i < V; i++) {
	    for(auto it : adj[i]) {
	        inDegree[it]++;
	    }
	}
	    
	queue<int> q;
	for(int i = 0; i < V; i++) {
	    if(inDegree[i] == 0) {
	        q.push(i);
	    }
	}
	    
	vector<int> ans;
	while(!q.empty()) {
	    int node = q.front();
	    q.pop();
	    ans.push_back(node);
	        
	    for(auto it : adj[node]) {
	        inDegree[it]--;
	        if(inDegree[it] == 0) {
	            q.push(it);
	        }
	    }
	}
	return ans;
}  

int main()
{
   fastread();
  
}
