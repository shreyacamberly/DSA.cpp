#include<iostream>
using namespace std;

int main() {
	
	int i;
	cin>>i;

	if(i>75&&i<=100){
		cout<<"Distinction";
	}
	else if(i>50&&i<=75){
		cout<<"Average";
	}
	else if(i>35&&i<=50){
		cout<<"Below Average";
	}
}
