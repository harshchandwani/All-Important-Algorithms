//This is a sorting algoruthm which finds the correct position and insert them in the correct position
//How we do it?
//Start from 1st index
//Store it in key
//Check all the number before 1st index which are greater to move one step ahead
//After j reaches 0
//insert key into that j + 1 place

public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        int i, key, j;
        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;
     
            // Move elements of arr[0..i-1], 
            // that are greater than key, to one
            // position ahead of their
            // current position
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
        //code here
    }
