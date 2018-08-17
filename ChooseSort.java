package zj;

public class ChooseSort {

    public static void main(String[] args) {
        int[] array = {6, 3, 77, 11, 2, 99, 4};

        int[] ints = chooseSort(array);

        printArray(ints);
    }

    private static int[] chooseSort(int[] array) {
        int minIndex = 0;
        int alreadySortIndex = 0;
        for (int i = 0; i < array.length; i++) {
            alreadySortIndex = i;
            minIndex = i;
            for (int j = alreadySortIndex; j < array.length; j++) {

                //确定最小元素
                if (array[j] <= array[minIndex]) {
                    minIndex = j;
                }


                if (j == array.length - 1) {
                    if (array[alreadySortIndex] > array[minIndex]) {
                        int temp = array[alreadySortIndex];
                        array[alreadySortIndex] = array[minIndex];
                        array[minIndex] =temp;
                    }
                }
            }

        }

        return array;
    }


    private static void printArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + ",");
        }
    }
}
