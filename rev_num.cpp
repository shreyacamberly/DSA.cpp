#include<iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int d=0;                  //where d is the number we'll get
	while(n>0){             //rem is the remainder we'll get after n%10
		int rem=n%10;
		d=d*10+rem;
		n=n/10;
	}
	cout<<d;
}
