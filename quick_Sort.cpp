#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[(low + high) / 2];
    while (low <= high)
    {
        while (arr[low] < pivot)
        {
            low++;
        }
        while (arr[high] > pivot)
        {
            high--;
        }
        if (low <= high)
        {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }
    return low;
}

void quickSortRecursion(int arr[], int low, int high)
{
    int pi = partition(arr, low, high);
    if (low < pi - 1)
    {
        quickSortRecursion(arr, low, pi - 1);
    }
    if (pi < high)
    {
        quickSortRecursion(arr, pi, high);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSortRecursion(arr, 0, n - 1);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
