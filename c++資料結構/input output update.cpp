#include<iostream>
using namespace std;

int main(){
	int mark[100];
	int n;
	cout<<"enter the no of students";
	cin>>n;
	//Assign a value
	mark[0]=-1;
	//input
	for(int i=1;i<=n;i++){
		cin>>mark[i];
		mark[i]=mark[i]*2;
	}
	//update
	
	//output
	for(int i=1;i<=n;i++){
		cout<<mark[i]<<",";
	}
	cout<<endl;
} 
