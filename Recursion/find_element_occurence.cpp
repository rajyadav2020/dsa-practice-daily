#include<bits/stdc++.h>
using namespace std;


//finding the occurences of the particular k element in an array 



// int main()
// {
//   int arr[9] = {1,2,3,4,5,6,4,3,4};
//   int k = 4;
//   vector<int>result;
//   for(int i=0;i<9;i++)
//   {
//     if(arr[i]==k){
//       result.push_back(i);
//     }
//   }
//   for(int i=0;i<result.size();i++){
//     cout << result[i] <<" ";
//   }
// }

//this was using the for loop now 
//now we will try this using the recursion

void recur(int arr[], int n, int i, int k)
{
    if(i == n)   
        return;

    if(arr[i] == k)
        cout << i << " ";

    recur(arr, n, i + 1, k);
}

int main()
{
    int arr[9] = {1,2,3,4,5,6,4,3,4};
    int k = 4;

    recur(arr, 9, 0, k);
}

//this is handled by the recursion 