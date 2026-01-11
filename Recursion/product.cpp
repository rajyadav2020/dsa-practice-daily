#include<bits/stdc++.h>
using namespace std;


product using decreasing recursion
int recur(int n)
{
  if(n==1)
  return 1;

  int product = n*recur(n-1);
}

int main()
{
  int n;
  cin >>n;

  cout << recur(n);
}

//product using increasing recursion

int recur(int i,int n){
  if(i==n)
  return n;

  int product = i*recur(i+1,n);
}

int main()
{
  int n = 5;
  cout << recur(1,n);
}