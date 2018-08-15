#include <iostream>
#include <string>
using namespace std;

int * shellSort(int*a, int len);

void printArray(int[], string, int len);
int * insertionSort(int *a, int len);

//c++��ȡ���鳤�Ⱦ����鷳��
template<class T>
int length(T& arr)
{
	return sizeof(arr) / sizeof(arr[0]);
}

int main() {

	int  a[] = { 500,86,1,77,55,24,9 };
	int len = length(a);
	printArray(a, "ϣ������ǰ", len);
	int *result = shellSort(a, len);
	printArray(result, "ϣ�������", len);
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

//ϣ������
int * shellSort(int *a, int len) {

	int h = 1;

	//�����������ֵ
	while (h < len)
	{
		h = 3 * h + 1; 
	}
	h = h / 3;

	int temp = -1;

	//����ϣ������....
	while (h >= 1)
	{

		if (h == 1) {
			printArray(a, "���һ�β�������֮ǰ��", len);
			insertionSort(a,len);
		}
		else
		{
			for (int i = 0; i + h < len ; i++)
			{
				if (a[i] > a[i + h]) {
					int temp = a[i];
					a[i] = a[i + h];
					a[i + h] = temp;
				}
			}
		}

		h = h / 3; //�ݼ�
	}
	
	return a;
}


//��������
int * insertionSort(int *a, int len) {

	int historyIndex = 1;
	//int length = sizeof(a) ;


	for (int i = 0; i < len; i++) {

		historyIndex = i;

		if (i + 1 < len && a[i + 1] < a[i]) {

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

	}

	return a;
}



