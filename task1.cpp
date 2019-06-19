//spider task 3 part 1..
//created by aditya_rana on 19 june 2019..

#include<bits/stdc++.h>
using namespace std;
int give_sum(int& n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int 	count_moves(int& number,int count){
		if(number>=0&&number <=9){
			return count;
		} 
		else{
			count++;
			number=give_sum(number);
			count_moves(number,count);
			
			
			
		}
	}


int main(){
	int n;
	cout<<"enter the number : ";
	cin>>n;
	int flag=0;
	cout<<"no. of times sum operation done is :"<<count_moves(n,flag)<<endl;

	return 0;
	

}
