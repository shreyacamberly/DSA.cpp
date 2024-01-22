#include<iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;

	int d,sum_e=0,sum_o=0;
	while(n>0){
		d=n%10;

		if(d%2==0){
			sum_e = sum_e + d;
		}
		else{
			sum_o = sum_o + d;
		}
		n=n/10;
	}
	cout<<sum_e<<" "<<sum_o;
}
