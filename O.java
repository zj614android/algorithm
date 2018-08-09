package com.zj.dp;

public class O {

    public static void main(String[] args) {
        常数阶();
        线性阶();
        平方阶();
        对数阶();
    }

    private static void 对数阶() {
        int number = 1;
        int n = 100;
        while (number < n) {
            number = number * 2;
            System.out.println("哈哈");//执行1次
        }
    }

    private static void 常数阶() {
        System.out.println("哈哈");//执行1次
        System.out.println("呵呵");//执行1次
        System.out.println("嘿嘿");//执行1次
    }


    private static void 线性阶() {
        int n = 100;
        for (int i = 0; i < n; i++) {//执行 n 次 O(n)
            System.out.println("哈哈");//执行1次  O(1)
        }
    }

    private static void 平方阶() {
        平民平方阶();
        等差数列平方阶();
    }

    private static void 平民平方阶() {
        int n = 100;
        for (int i = 0; i < n; i++) {//执行n次
            for (int j = 0; j < n; j++) {//执行n次
                System.out.println("哈哈");
            }
        }
    }


    private static void 等差数列平方阶() {
        int n = 100;
        for (int i = 0; i < n; i++) {//执行n次
            for (int j = i; j < n; j++) {//执行n次
                System.out.println("哈哈");
            }
        }
    }

}
