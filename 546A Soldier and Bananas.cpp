#include<iostream>
using namespace std;

int main(){
	int k,n,w,total=0;
	cin>>k>>n>>w;
	
	for(int i=1;i<=w;i++){
		total+= i * k;
	}
	if(total>n)
		cout<<total-n;
	else 
		cout<<0;
}
