#include <iostream>
using namespace std;

int low(int arr[], int size)
{
    int lowest = arr[0];

    for(int i = 1; i < size; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    return lowest;
}
int high (int arr[], int size)
{
    int highest = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    return highest;
}
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int scores[n];
    for (int i = 0; i < n; i++)
    {
       cout << "Enter test scores :";
	    cin >> scores[i];
    }
    int lowest = low (scores, n);
    int highest = high (scores, n);

    cout << lowest << " " << highest << endl;

    return 0;
}
