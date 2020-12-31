#include <iostream>

#include <iostream>

using namespace std;

int array_result_min(int A[], int max, int min) {
	for (int i = 0; i < 10; i++)
	{
		A[i] = rand() % 90 + 5;
		if (A[i] < min)
		{
			min = i;
		}
	}
	return min;
}
int array_result_max(int A[], int max, int min) {
	for (int i = 0; i < 10; i++)
	{
		if (A[i] > max)
		{
			max = i;
		}
	}
	return max;
}
int output(int A[]){
	cout << "Array: ";
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] " << A[i] << "   ";
	}
	return 1;
}
int main() {
	int A[10];
	int max = 0;
	int min = 0;
	cout << "Result(min): " << array_result_min(A, max, min) << endl;
	cout << "Result(max): " << array_result_max(A, max, min) << endl;
	cout << output(A) << endl;
	return 0;
}