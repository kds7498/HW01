#include <iostream>
#include <string>
#include <vector>

using namespace std;

int tot(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}


	return sum;
}

int avg(int arr[], int size) {

	int sum = tot(arr, size);

	return (double)sum / size;
}



int main() {

	const int size = 5;
	/*cout << "원하는 배열 크기를 입력하세요: ";
	cin >> size;*/

	int num[size];

	for (int i = 0; i < size; i++) {
		cout << "배열 Num[" << i << "]의 값을 입력해주세요 : ";  cin >> num[i];
		tot(num, size);
	}

	//for (int i = 0; i < size; i++) {
	//	cout << "배열 Num[" << i << "]의 값을 입력해주세요 : ";  cin >> num[i];
	//	tot += num[i];
	//}
	//avg = tot / size;

	int total = tot(num, size);
	double average = avg(num, size);

	cout << "입력받은 값의 총합 : " << total << endl;
	cout << "입력받은 값의 평균 : " << average << endl;

	int choice;
	int temp = 0;
	cout << "오름차순 정렬하려면 1 입력, 내림차순 정렬하려면 2 입력" << endl;
	cout << "정렬방식을 입력해주세요 :"; cin >> choice;


	if (choice == 1)
	{
		for (int i = 0; i < size - 1; i++) {
			for (int j = i + 1; j < size; j++) {
				if (num[i] > num[j]) {
					temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}
		for (int i = 0; i < size; i++) {
			cout << "오름차순 정렬 Num[" << i << "] : " << num[i];
			cout << endl;
		}
		cout << endl;
	}
	if (choice == 2)
	{
		for (int i = 0; i < size - 1; i++) {
			for (int j = i + 1; j < size; j++) {
				if (num[i] < num[j]) {
					temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}
		for (int i = 0; i < size; i++) {
			cout << "내림차순 정렬 Num[" << i << "] : " << num[i];
			cout << endl;
		}
	}
	return 0;
}