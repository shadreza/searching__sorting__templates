#include <iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right) {
        int middle = left + (right - left) / 2;

        // Check if x is present at mid
        if (arr[middle] == x)
            return middle;

        // If x greater, ignore left half
        if (arr[middle] < x)
            left = middle + 1;

        // If x is smaller, ignore right half
        else
            right = middle - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}

int main()
{
    int arr[] = { 11, 3, 14, 10, 40 };
	int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n);
    int result = binarySearch(arr, 0, n - 1, x);
	if(result == -1){
		cout << "No In The Array" << endl;
	}
	else{
		cout << "Element present at index " << result;
	}
	cout<<endl;
	for(int i =0 ; i<n;i++){
		cout << arr[i] << endl;
	}
    return 0;
}
