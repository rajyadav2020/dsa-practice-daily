
//sum of numbers from 1 to n using recursion using decreasing recursion



int recur(int n)
{
  if(n==0)
  return 0;

  int sum = n + recur(n-1);
  return sum;
}


int main()
{
  int n;
  cin >> n;
  cout << recur(n);
  

  return 0;
}

//recursion calls stores in stack memory

//sum of numbers from 1 to n using recursion using decreasing recursion using increasing recursion

int recur(int i,int n)
{
  if(i==n)
  return n;
  int sum = i + recur(i+1,n);
  return sum;
}

int main()
{
  int n = 3;
  cout << recur(1,n);
}