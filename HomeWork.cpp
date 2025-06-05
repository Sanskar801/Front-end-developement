#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

// void notes(int amount)
// {

//     int note100 = amount / 100, note50 = 0, note20 = 0, note1 = 0;
//     int remainingAmt = amount - note100 * 100;
//     cout << "Notes of 100: $" << note100 << endl;

//     if (remainingAmt >= 50)
//     {
//         note50 = (remainingAmt / 50);
//         remainingAmt = remainingAmt - note50 * 50;
//         cout << "Notes of 50: $" << note50 << endl;
//     }
//     if (remainingAmt >= 20)
//     {
//         note20 = (remainingAmt / 20);
//         remainingAmt = remainingAmt - note20 * 20;
//         cout << "Notes of 20: $" << note20 << endl;
//     }
//     if (remainingAmt >= 1)
//     {
//         note1 = (remainingAmt / 1);
//         remainingAmt = remainingAmt - note1;
//         cout << "Notes of 1: $" << note1 << endl;
//     }
// }

void maxOfArr(int arr[], int size)
{

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum is : " << max << endl;
}

void SumOfArr(int arr[], int size)
{
    int sum = arr[0];
    for (int i = 1; i < size; ++i)
    {
        sum += arr[i];
    }
    cout << "Sum of Array: " << sum << endl;
}

void maxSumOfArr(int arr[], int size)
{
    int sum = arr[0];
    for (int i = 1; i < size; ++i)
    {
        sum += arr[i];
    }
    // cout << "Sum of Array: " << sum << endl;
}

void reverseOfArr(int arr[], int size)
{

    for (int i = 0; i <= size / 2; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    cout << "Reverse of Array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlt(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i = i + 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    cout << "Alternate swapped Array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}

void minOfArr(int arr[], int size)
{
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum is : " << min << endl;
}

void uniqueEle(int arr[], int size)
{
    cout << "Unique Elements are : ";
    for (int i = 0; i < size; i++)
    {
        int occurance = 0, dup;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                occurance++;
                dup = arr[j];
            }
        }
        if (occurance == 0 && arr[i] != dup)
        {
            cout << arr[i] << " ";
        }
    }
}

void duplicateEle(int arr[], int size)
{
    cout << "Duplicate Elements are : ";
    int dup;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                dup = arr[j];
                cout << dup << " ";
            }
        }
    }
}

void intersaction(int arr[], int size, int brr[], int sizeb)
{
    cout << "Intersaction Elements are : ";
    int res, i = 0, j = 0;

    while (i < size && j < sizeb)
    {

        if (arr[i] == brr[j] && res < arr[i])
        {
            res = arr[i];
            cout << res << " ";
            i++;
            j++;
        }
        else if (arr[i] < brr[j])
            i++;
        else
            j++;
    }
}

void pairSum(int arr[], int size, int sum)
{
    cout << "Pair Elements are : ";

    int res = 0;

    sort(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            res = arr[i] + arr[j];

            if (res == sum)
            {
                cout << arr[i] << " and " << arr[j] << endl;
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortOne(int arr[], int size)
{
    cout << "Sorted Elements are : ";

    int left = 0, right = size - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)  // Corrected the typo here
        {
            right--;
        }

        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++, right--;
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    // int amount = 1330;
    // notes(amount);

    // int array[6] = {-4, 8, 10, 8, 10, 43};
    // maxOfArr(array, 6);
    // minOfArr(array, 6);
    // SumOfArr(array, 6);
    // maxSumOfArr(array, 6);
    // reverseOfArr(array, 6);
    // swapAlt(array, 6);
    // uniqueEle(array, 6);
    // duplicateEle(array, 6);

    // int array1[6] = {1, 2, 3, 4, 5, 6};
    // int array1[5] = {2, -3, 3, 3, -2};
    // int array2[4] = {5, 6, 6, 10};

    // intersaction(array1, 6, array2, 4);

    // pairSum(array1, 6, 8);
    // pairSum(array1, 5, 0);

    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sortOne(arr, 8);

    return 0;
}