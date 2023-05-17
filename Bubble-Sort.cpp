//Basically this is the most sorting algorithm
//Steps
//1. Suppose ou select ith integer
//2. Now, you will compare that ith integer with intergers from  i + 1 to n
//3. At the end of each, iteration, the largest integer will get in correct position

class Solution
{
    public:
    
    void bubbleSort(int arr[], int n)
    {
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] > arr[j]){
                    swap(arr[i], arr[j]);
                }
            }
        }
        // Your code here  
    }
};
