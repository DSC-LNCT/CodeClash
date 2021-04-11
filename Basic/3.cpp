#include <iostream>
using namespace std;

// Function to find minimum swaps
int minimumSwaps(int arr[],int n)
{
    // Initialise count variable
    int count = 0;
    int i = 0;
    
    while (i < n)
    {

        // If current element is
        // not at the right position
        if (arr[i] != i + 1)
        {

            while (arr[i] != i + 1)
            {
                int temp = 0;

                // Swap current element
                // with correct position
                // of that element
                temp = arr[arr[i] - 1];
                arr[arr[i] - 1] = arr[i];
                arr[i] = temp;
                count++;
            }
        }

        // Increment for next index
        // when current element is at
        // correct position
        i++;
    }
    return count;
}

// Driver code
int main()
{
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cout << minimumSwaps(arr,n)<<endl;
    }
    
    // Function to find minimum swaps
    return 0;
}

