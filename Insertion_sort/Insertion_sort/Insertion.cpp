#include <iostream>
#include <string>
using namespace std;

int * insertionSort(int*a,int len);
void printArray(int[], string,int len);

//c++��ȡ���鳤�Ⱦ����鷳��
template<class T>
int length(T& arr)
{
	//cout << sizeof(arr[0]) << endl;
	//cout << sizeof(arr) << endl;
	return sizeof(arr) / sizeof(arr[0]);
}

int main() {

	int  a[] = { 500,86,99,77,88,1,2};
	int len = length(a);
	printArray(a,"����ǰ", len);
	int *result = insertionSort(a, len);
	printArray(result, "�����", len);

	system("pause");

}

//��ӡ����
void printArray(int *a,string tagStr,int len) {
	
	cout << tagStr << endl;
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << "," ;
	}
	cout << endl;
}

//��������
int * insertionSort(int *a,int len) {

	int historyIndex = 1;
	//int length = sizeof(a) ;

	cout << "length == " << len << endl;

	for (int i = 0; i < len; i++){

		//���յ�C++��û������Խ���쳣����������������ôŪ��������
		if (i + 1 == len) {
			return a;
		}

		if (a[i + 1] < a[i]) {

			int temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;

			//�ڱȽϹ���������������λ�öԻ�������������Ҫ��֮ǰ�ȽϹ����������ٴαȽϣ�ֱ������
			while (historyIndex > 0 && a[historyIndex] < a[historyIndex - 1]) {
				int temp = a[historyIndex];
				a[historyIndex] = a[historyIndex - 1];
				a[historyIndex - 1] = temp;
				historyIndex--;
			}

		}

		historyIndex = i;
	}

	return a;
}


