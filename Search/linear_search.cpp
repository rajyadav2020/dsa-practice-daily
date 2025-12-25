//in this we have covered how the linear search works
#include<iostream>
using namespace std;

int main()
{
  //taking the input of the size of array from the user 
  int n;
  cout << " enter the size of the array: ";
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];  //this is the element that the user will insert

  }

  //now coming to linear search the user will give the target value , and that value is going to be in searching 
  //taking target value


  int target;
  cout <<"Enter the target value: ";
  cin >> target;

  for(int i=0;i<n;i++)
  {
    if(arr[i]==target)
    {
      cout << "Element is found at index: " << i;
    }
  }
}


//here time complexity 
//there can be 3 possibilities of time complexity
//1.best casae:o(1) when element is at 1st position
//2.average case:o(n);
//3.worst case:o(n);

//and space complexity is O(n);