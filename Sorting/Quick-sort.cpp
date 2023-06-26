int partitionArray(int arr[], int low, int high)
{
    // Choosing the pivot
    int pivot = arr[high];
 
    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
 
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
 
            // Increment index of smaller element
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int input[], int start, int end) {
	
        if (start < end) {
          int pos = partitionArray(input, start, end);
          quickSort(input, start, pos-1 );
          quickSort(input, pos+1 , end);
        }
}
