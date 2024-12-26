#include <iostream>

using namespace std;

void drawLine() {
	int num = 80;

	for (int i = 0; i < num; i++)
	{
		cout << "-";
	}
	cout << endl;
}

void printArr(int nums[], int size) {
	drawLine();
	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " || ";
	}
	cout << endl;
	drawLine();
}

void swap(int& num1, int& num2) {
	int temp = 0;

	temp = num1;
	num1 = num2;
	num2 = temp;
}

void add(int nums[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += nums[i];
	}
	drawLine();
	cout << "합계: " << sum << endl;
	cout << "평균: " << (float)sum / size << endl;
	drawLine();
}

void sort(int nums[], int size)
{
	int sortType = 0;

	cout << "정렬을 시도합니다. \n1을 입력하면 오름차순, 2를 입력하면 내림차순으로 정렬됩니다. ";
	cin >> sortType;

	if (sortType == 1)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {
				if (nums[i] > nums[j]) swap(nums[i], nums[j]);
			}
		}
	}
	else if (sortType == 2)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {
				if (nums[i] < nums[j]) swap(nums[i], nums[j]);
			}
		}
	}
	else {
		cout << "잘못된 입력입니다." << endl;
	}


	printArr(nums, size);
}


int main() {
	const int arrSize = 5;
	int nums[arrSize];

	cout << "\n#필수 기능\n" << endl;

	for (int i = 0; i < arrSize; i++)
	{
		cout << i + 1 << "번째 숫자를 입력해주세요. 입력(0부터 1000사이의 값): ";
		cin >> nums[i];
		if (!(nums[i] >= 0 && nums[i] <= 1000))
		{
			cout << "잘못 입력했습니다. 0부터 1000사이의 값을 입력해주세요." << endl;
			i--;
		}
	}

	add(nums, arrSize);

	cout << "\n#도전 기능\n" << endl;
	sort(nums, arrSize);

	return 0;
}