/**
#include <iostream>
#include <string>
using namespace std;

int * shellSort(int*a, int len);
void printArray(int[], string, int len);

//c++��ȡ���鳤�Ⱦ����鷳��
template<class T>
int length(T& arr)
{
	//cout << sizeof(arr[0]) << endl;
	//cout << sizeof(arr) << endl;
	return sizeof(arr) / sizeof(arr[0]);
}

int main() {

	int  a[] = {500,86,99,77,88};
	int len = length(a);
	printArray(a, "����ǰ", len);
	int *result = shellSort(a, len);
	printArray(result, "�����", len);

	system("pause");

}

//��ӡ����
void printArray(int *a, string tagStr, int len) {

	cout << tagStr << endl;
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << ",";
	}
	cout << endl;
}

//��������
int * shellSort(int *a, int len) {

	int historyIndex = 1;

	cout << "length == " << len << endl;
	int h = 2;
	for (int i = 0; i < len; i++) {
		h = len / (i + h);
		


		if (a[i] < a[i + h]) {
		
		}

	}

	return a;
}
*/

