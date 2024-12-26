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
	cout << "�հ�: " << sum << endl;
	cout << "���: " << (float)sum / size << endl;
	drawLine();
}

void sort(int nums[], int size)
{
	int sortType = 0;

	cout << "������ �õ��մϴ�. \n1�� �Է��ϸ� ��������, 2�� �Է��ϸ� ������������ ���ĵ˴ϴ�. ";
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
		cout << "�߸��� �Է��Դϴ�." << endl;
	}


	printArr(nums, size);
}


int main() {
	const int arrSize = 5;
	int nums[arrSize];

	cout << "\n#�ʼ� ���\n" << endl;

	for (int i = 0; i < arrSize; i++)
	{
		cout << i + 1 << "��° ���ڸ� �Է����ּ���. �Է�(0���� 1000������ ��): ";
		cin >> nums[i];
		if (!(nums[i] >= 0 && nums[i] <= 1000))
		{
			cout << "�߸� �Է��߽��ϴ�. 0���� 1000������ ���� �Է����ּ���." << endl;
			i--;
		}
	}

	add(nums, arrSize);

	cout << "\n#���� ���\n" << endl;
	sort(nums, arrSize);

	return 0;
}