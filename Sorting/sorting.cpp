//sorting algorithms


//bubble sort
///here swaping occurs if previos element is greater than next one

for(int i=0;i<n-1;i++){
  for(int j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1]){
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
    }
  }
}




//selection sort

//in this sorting algorithm,it repeatedly selects the smallest element from the unsorted portion of the array and places it at the beginning
//how it works:
//divide the array into two parts: 1.sorted array and 2.unsorted array
//2-step: find the minimum element from the unsorted part
//3.swap it with the first element of the unsorted part
//4.move the boundary of the sorted part one step forward
//5.repeat until the entire array is sorted


void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
      int minIndex = i;

      // Find minimum element in unsorted part
      for (int j = i + 1; j < n; j++) {
          if (arr[j] < arr[minIndex]) {
              minIndex = j;
          }
      }

      // Swap minimum element with first unsorted element
      swap(arr[i], arr[minIndex]);
  }
}


//insertion sort
//in this sorting algo, it is simple and efficient comparison based sorting algo for small data. it works the same way we sort the playing cards in your hand

//algorithm: 
//1.assume the first element is already sorted
//2.take the next element and insert it into its correct position in the sorted part
//3.shift all the larger elements one position to the right
//4.repeat until the entire array is sorted

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
      int key = arr[i];   // element to be inserted
      int j = i - 1;

      // Shift elements that are greater than key
      while (j >= 0 && arr[j] > key) {
          arr[j + 1] = arr[j];
          j--;
      }

      arr[j + 1] = key;
  }
}


//merge sort


//quick sort

