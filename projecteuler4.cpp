
#include <iostream>

using namespace std;
 
int res = 1;
 
int gcd(int a,int b) {
  
   if(b == 0)
      return a;
   else return gcd(b,a%b);    
}
 
void lcm(int arr[], int n) {
 
    if(n == 0) return;
    res = res*arr[n-1] / gcd(res, arr[n-1]);
    lcm(arr, n-1);
}
 
int main() {
     
    int arr[40];
    int n,t;
    cin>>t;
    for(int i = 0;i < t;i++)
    {
      res = 1;
      cin>>n;
      for(int j = 1;j<=n;j++)
      {
           arr[j-1] = j;
      }
      lcm(arr, n);
      cout << res << endl;
    }
  return 0;
}