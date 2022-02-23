#include <iostream>

using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void shiftArray(int arr[], int k, int n)
{
    if (k < 0) // shifts the array left
    {
        k = k * (-1);

        reverseArray(arr, 0, n - 1);     // reverse the array
        reverseArray(arr, n - k, n - 1); // reverse the last K elements
        reverseArray(arr, 0, n - k - 1); // reverse the first N - K
    }
    else if (k > 0) // shifts the array right
    {
        reverseArray(arr, 0, n - 1); // reverse the array
        reverseArray(arr, 0, k - 1); // reverse the first K elements
        reverseArray(arr, k, n - 1); // reverse the last N - K elements
    }
    else
        return;
}

void fillArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: " << endl;
    fillArray(arr, n);

    cout << "Enter K number for array rotations: ";
    cin >> k;

    shiftArray(arr, k, n);

    cout << "Result: ";
    printArray(arr, n);
    return 0;
}