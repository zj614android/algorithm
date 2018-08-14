/**
#include <iostream>
#include <string>
using namespace std;

int * shellSort(int*a, int len);
void printArray(int[], string, int len);

//c++获取数组长度就是麻烦啊
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
	printArray(a, "排序前", len);
	int *result = shellSort(a, len);
	printArray(result, "排序后", len);

	system("pause");

}

//打印数组
void printArray(int *a, string tagStr, int len) {

	cout << tagStr << endl;
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << ",";
	}
	cout << endl;
}

//插入排序
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

