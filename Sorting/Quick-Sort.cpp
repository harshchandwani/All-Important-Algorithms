void quickSort(int arr[], int start, int end)
    {
        // code here
        if(start>=end)
        return ;
        
        int pivot =end;
        int i = start-1;
        int j = start;
        
        while(j<pivot){
            if(arr[j] < arr[pivot]){
                i++;
                swap(arr[i],arr[j]);
            }
            j++;
        }
        i++;
        swap(arr[i],arr[pivot]);
        quickSort(arr,start,i-1);
        quickSort(arr,i+1,end);
    }
    




// /* This function takes last element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot */

// partition (arr[], low, high)
// {
//     // pivot (Element to be placed at right position)
//     pivot = arr[high];  

//     i = (low – 1)  // Index of smaller element and indicates the 
//     // right position of pivot found so far

//     for (j = low; j <= high- 1; j++){

//         // If current element is smaller than the pivot
//         if (arr[j] < pivot){
//             i++;    // increment index of smaller element
//             swap arr[i] and arr[j]
//         }
//     }
//     swap arr[i + 1] and arr[high])
// //     return (i + 1)
//        quickSort(arr, low, pi – 1);  // Before pi
//         quickSort(arr, pi + 1, high); // After pi

// }
