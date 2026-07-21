#include <iostream>
#include <iomanip>
using namespace std;

double avg(int score [], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
	{
        sum = sum +score[i];
    }
    return (double)sum / size;
}
int main()
 {
    int n;
    cout << "Enter number of students : ";
    cin >> n;

    int score[n];
    for (int i = 0; i < n; i++) 
	{
		cout << "Enter student score : " << endl;
        cin >> score[i];
    }

    double average = avg(score, n);

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}
