#include<iostream>
using namespace std;

int main() {
	int n;
	while (n>=0&&n<=10000){
		cin>>n;
		break;
	}
	int i=1,prod;
	while(i<=10){
		prod=n*i;
		cout<<prod<<endl;
		i++;
	}
}
