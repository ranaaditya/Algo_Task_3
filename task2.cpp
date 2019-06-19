//spidern task four...
//created by aditya_rana on 19 june 2019...

#include<bits/stdc++.h>
#define ll long long  
using namespace std;

stack<ll> sortStack(stack<ll> &input) 
{ 
    stack<ll> tmpStack; 
  
    while (!input.empty()) 
    { 
         
        ll tmp = input.top(); 
        input.pop(); 
  
        
        while (!tmpStack.empty() && tmpStack.top() < tmp) 
        { 
           
            input.push(tmpStack.top()); 
            tmpStack.pop(); 
        } 
  
       
        tmpStack.push(tmp); 
    } 
  
    return tmpStack; 
} 



 void get_strength(){
 		int n,m;
	cout<<"enter the length of wall : ";
	cin>>n;
	cout<<"enter the number of bricks : ";
	cin>>m;
	if(m>=n){
	
stack<ll> stak;
for(int i=0;i<m;i++){
	ll ent;
	cin>>ent;
	stak.push(ent);
	}
	
	stak=sortStack(stak);

while(stak.size()!=n){
	ll a,b;
	a=stak.top();
	stak.pop();
	b=stak.top();
	stak.pop();
	
	stak.push(a+b);
	stak=sortStack(stak);
	
	}
	
	cout<< "maximum strengt of wall is : " <<stak.top();



}else cout<<endl<<"not possible  NUMBER OF BRICKS ARE LESS THAN LENGTH OF WALL !!! \n ....TRY AGAIN .... ";


	
}
int main(){
	
get_strength();
	
	return 0;
	
}

