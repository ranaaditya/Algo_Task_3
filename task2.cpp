//spider_task_3 part_2.
//written by rana_aditya.

#include<bits/stdc++.h>
using namespace std;
void max_strength(){
	int n,m,k;
	cout<<"enter the length of wall ";
	cin>>n;
	cout<<"enter the number of bricks : ";
	cin>>m;
	if(m>=n){
		int ent;
		std::priority_queue<int,vector<int>,greater<int> > pq;         //min priority queue
	  std::priority_queue<int> pr;                                     // max priority queue
	  for(int i=0;i<m;i++){
	  	cin>>ent;
	  	pr.push(ent);
	  }
	  for(int i=0;i<n;i++){
	  	pq.push(pr.top());
	  	pr.pop();
	  }
	  while(pr.size()!=0){
	  	k=pr.top()+pq.top();
	  	pr.pop();
	  	pq.pop();
	  	pq.push(k);
	  }
	  cout<<pq.top();
	  
		
	}else cout<<"!!! number of bricks required  are less to construct the wall  !!!";

}
	int main(){
		max_strength();
		return 0;
		
	}
	


