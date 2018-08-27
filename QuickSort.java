package zj;

import java.util.Arrays;

public class QuickSort {

    private static int count = 0;

    public static void main(String[] args) {

        int[] a = {31, 8, 66, 1, 22, 9, 11};
        System.out.println("开始：" + Arrays.toString(a));
        quickSort(a, 0, a.length - 1);
//        quickSortVersion2(a);
        System.out.println("结束：" + Arrays.toString(a));
    }


    /**
     * @param a     数组
     * @param left  区间开始
     * @param right 区间结束
     */
    public static void quickSort(int[] a, int left, int right) {

        count ++;

        //begin和end记录初始的区间范围，i,j是用来做角标的频繁跳动。
        int temp;
        int i = left;
        int j = right;

        if (left > right) {
            return;
        }

        while (true) {

            //1.从左往右找比标尺大的值
            while (j > i && a[j] > a[left]) {
                j--;
            }

            //2.从右往左找比标尺小的值
            while (i < j && a[i] < a[left]) {
                i++;
            }

            //3.找到之后,判断当前ij是否相碰撞了,发生了碰撞则表示一趟结束,此时（跳出循环）进行递归,进行下一趟排序
            if (i == j) {

                //5.当元素发生碰撞时，置换换key元素位置，并跳出循环进行下一趟排序
                temp = a[left];
                a[i] = a[left];
                a[left] = temp;
                break;

            } else {
                //4.当元素未发生碰撞时  交换二者元素并重复循环
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                continue;
            }
        }

        //6.递归 分别排序标尺左边和右边
        quickSort(a, left, i - 1);//左边
        quickSort(a, i + 1, right);//右边
    }

    public static void quickSortVersion2(int[] a) {
        if (a.length > 0) {
            quickSortVersion2(a, 0, a.length - 1);
        }
    }

    private static void quickSortVersion2(int[] a, int start, int end) {

        int temp;//用于交换的变量

        //1,找到递归算法的出口
        if (start > end) {
            return;
        }

        //2,存
        int i = start;
        int j = end;

        //3,key
        int key = a[start];

        //4,完成一趟排序，未碰撞时
        while (i < j) {

            //4.1 从右往左找到第一个小于key的数
            while (i < j && a[j] > key) {
                j--;
            }

            // 4.2 从左往右找到第一个大于key的数
            while (i < j && a[i] <= key) {
                i++;
            }

            // 4.3 交换
            if (i < j) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }

        // 4.4，调整key的位置
        temp = a[i];
        a[i] = a[start];
        a[start] = temp;

        //5, 对key左边的数快排
        quickSortVersion2(a, start, i - 1);

        //6, 对key右边的数快排
        quickSortVersion2(a, i + 1, end);
    }

}
