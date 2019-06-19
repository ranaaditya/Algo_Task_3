//task 3 spider algo induction
//created by aditya_rana on 19 june 2019
#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
	if(n==1)return false;
	
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
		
	}
	
	
	
	
	return true;
}
bool is_coprime(int a,int b){
	
	
}
int min_sum(int num){
	int ent=2;
	int arr[num-2];
	for(int i=0;i<num-1;i++){
		arr[i]=ent++;
	}
	int sum=0,adi=1;
	for(int k=1;k<num;k++){
		if(is_prime(arr[k])){
			sum+=adi++;

			
		}
		
	}
	return sum;
}
	
	
	

int main(){
	int n;
	cout<<"enter the number : ";
	cin>>n;
cout<<min_sum(n);
	return 0;
}
