//Suppose we will select the ith element,
//We will store the index in minIdx = i
//Now, we will be running another for loop for i + 1 to n
//and if our arr[j] < arr[minIdx] then we will put the minIdx = j
//and if the minIdx != i
//swap them
void selectionSort(int arr[], int n)
    {
        int i, j, minIdx;
        for(int i = 0; i < n - 1; i++){
            minIdx = i;
            for(int j = i + 1; j < n; j++){
                if(arr[j] < arr[minIdx]){
                    minIdx = j;
                }
            }
            if(minIdx != i){
                swap(&arr[minIdx], &arr[i]);
            }
        }
       //code here
    }
