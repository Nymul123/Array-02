#include <iostream>
using namespace std;

int lar(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    { // start from 1 since largest is initialized to arr[0]
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    return largest;
}

int small(int arr[], int size)
{
    int small = arr[0];
    for (int i = 1; i < size; i++)
    { // start from 1 since small is initialized to arr[0]
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    return small;
}

// Function to swap two values (by reference)
void swa(int &m, int &s)
{
    int temp = m;
    m = s;
    s = temp;
}

int main()
{
    int size;
    cin >> size;

    int arr[size]; // declare array after reading the size

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int m = lar(arr, size);
    int s = small(arr, size);

    // Swap largest and smallest
    swa(m, s);

    

    return 0;
}
