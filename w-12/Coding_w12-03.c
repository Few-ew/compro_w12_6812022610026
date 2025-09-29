#include <stdio.h>

// ฟังก์ชัน doubleArray รับ pointer ของ array และขนาด array แล้วคูณค่าทุกตัวด้วย 2
void doubleArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        arr[i] *= 2; // คูณค่าของแต่ละสมาชิกใน array ด้วย 2
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5}; // กำหนดค่าเริ่มต้นให้ array a
    int size = 5;               // กำหนดขนาด array

    printf("Before: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);    // แสดงค่าก่อนคูณ
    }
    printf("\n");

    doubleArray(a, size);       // เรียกใช้ฟังก์ชัน doubleArray เพื่อคูณค่าทุกตัวใน array ด้วย 2

    printf("After: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);    // แสดงค่าหลังคูณ
    }
    printf("\n");

    return 0;
}
/*
ขั้นตอนการทำงานของโปรแกรม:
1. กำหนด array a เป็น {1, 2, 3, 4, 5} และ size เป็น 5
2. แสดงค่าของ array ก่อนคูณ (1 2 3 4 5)
3. เรียกใช้ฟังก์ชัน doubleArray โดยส่ง pointer ของ array และขนาด array เพื่อคูณค่าทุกตัวด้วย 2
4. แสดงค่าของ array หลังคูณ (2 4 6 8 10)
*/