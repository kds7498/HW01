#include <iostream>
#include <string>
#include <vector>

using namespace std;

//double tot(){
//	double tot = 0;
//	vector<int> num(size);
//	for (int i = 0; i < ; i++) {
//		cout << "배열 Num[" << i << "]의 값을 입력해주세요 : ";  cin >> num[i];
//		tot += num[i];
//	}
//}



int main() {
	double tot = 0;
	double avg = 0;
	int size;
	cout << "원하는 배열 크기를 입력하세요: ";
	cin >> size;

	vector<int> num(size);

	for (int i = 0; i < size; i++) {
		cout << "배열 Num[" << i << "]의 값을 입력해주세요 : ";  cin >> num[i];
		tot += num[i];
	}
	avg = tot / size;

	cout << "입력받은 값의 총합 : " << tot << endl;
	cout << "입력받은 값의 평균 : " << avg << endl;

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