#include<iostream>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	
	 if(x+y>z && y+z>x && x+z>y){
		if(x==y&&y==z&&x==z){
			cout<<"Equilateral Triangle";
		}
		else if(x==y&&x!=z){
			cout<<"Isosceles Triangle";
		}
		else if(x==z&&x!=y){
			cout<<"Isosceles Triangle";
		}
		else if(z==y&&z!=x){
			cout<<"Isosceles Triangle";
		}
		else if(x!=y&&y!=z&&x!=z){
			cout<<"Scalene Triangle";
		}
	}
	else{
		cout<<"Not a Triangle";
	}
}
