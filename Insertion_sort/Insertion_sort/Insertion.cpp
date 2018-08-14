#include <iostream>
#include <string>
using namespace std;

int * insertionSort(int*a,int len);
void printArray(int[], string,int len);

//c++获取数组长度就是麻烦啊
template<class T>
int length(T& arr)
{
	//cout << sizeof(arr[0]) << endl;
	//cout << sizeof(arr) << endl;
	return sizeof(arr) / sizeof(arr[0]);
}

int main() {

	int  a[] = { 500,86,1,77,55,24};
	int len = length(a);
	printArray(a,"排序前", len);
	int *result = insertionSort(a, len);
	printArray(result, "排序后", len);

	system("pause");

}

//打印数组
void printArray(int *a,string tagStr,int len) {
	
	cout << tagStr << endl;
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << "," ;
	}
	cout << endl;
}

//插入排序
int * insertionSort(int *a,int len) {

	int historyIndex = 1;
	//int length = sizeof(a) ;


	for (int i = 0; i < len; i++){

		historyIndex = i;

		if (i + 1 < len && a[i + 1] < a[i]) {

			int temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;

			//在比较过程中若是满足了位置对换的条件，还需要对之前比较过的数进行再次比较，直到结束
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


