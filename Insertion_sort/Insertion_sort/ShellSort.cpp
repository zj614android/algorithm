#include <iostream>
#include <string>
using namespace std;

int * shellSort(int*a, int len);

void printArray(int[], string, int len);
int * insertionSort(int *a, int len);

//c++获取数组长度就是麻烦啊
template<class T>
int length(T& arr)
{
	return sizeof(arr) / sizeof(arr[0]);
}

int main() {

	int  a[] = { 500,86,1,77,55,24,9 };
	int len = length(a);
	printArray(a, "希尔排序前", len);
	int *result = shellSort(a, len);
	printArray(result, "希尔排序后", len);
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

//希尔排序
int * shellSort(int *a, int len) {

	int h = 1;

	//计算出步长的值
	while (h < len)
	{
		h = 3 * h + 1; 
	}
	h = h / 3;

	int temp = -1;

	//进行希尔排序....
	while (h >= 1)
	{

		if (h == 1) {
			printArray(a, "最后一次插入排序之前：", len);
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

		h = h / 3; //递减
	}
	
	return a;
}


//插入排序
int * insertionSort(int *a, int len) {

	int historyIndex = 1;
	//int length = sizeof(a) ;


	for (int i = 0; i < len; i++) {

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



