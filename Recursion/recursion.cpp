#include<bits/stdc++.h>
using namespace std;

//recursion are of two types
//one decreasing and one increasing
//decreasing recursion

void recur(int n)
{
  if(n==0)
  return; //this is stopping the recursion
  cout <<"hello \n";
  recur(n-1);
}

int main()
{
  recur(5);

  return 0;
}


//increasing recursion

void recur(int i, int n)
{
  if(i>n)
  return;
  cout <<"hello" <<endl;
  recur(i+1,3);
}

int main()
{
  recur(1,3);
}