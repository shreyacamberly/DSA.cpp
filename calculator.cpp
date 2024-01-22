#include<bits/stdc++.h>
using namespace std;
int main() {

  int i;
while(1){
  cin>>i;

  switch (i) {
  case 1:
    int a, b, sum;
    cin >> a >> b;
    sum = a + b;
    cout << sum << endl;
    break;

  case 2:
    int c, d, diff;
    cin >> c >> d;
    diff = c - d;
    cout << diff << endl;
    break;

  case 3:
    int e, f, prod;
    cin >> e >> f;
    prod = e * f;
    cout << prod << endl;
    break;

  case 4:
    int g, h, div;
    cin >> g >> h;
    div = g / h;
    cout << div << endl;
    break;

  case 5:
    int x, y, rem;
    cin >> x >> y;
    rem = x % y;
    cout << rem << endl;
    break;

  case 6:
    return 0;
    break;

  default:
    cout << "Invalid Operation"<<endl;
    
    }
    i++;
  }
}

