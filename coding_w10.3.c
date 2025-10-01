#include <stdio.h>      // ไลบรารีมาตรฐาน สำหรับ Input/Output เช่น printf, scanf
#include <string.h>     // ไลบรารีสำหรับจัดการสตริง เช่น strcmp, strlen

int main() {
    char name1[30], name2[30];   // ประกาศตัวแปรอาร์เรย์ char ขนาด 30 เก็บชื่อของลูกค้า 2 คน

    printf("Enter name of customer 1: ");   // แสดงข้อความให้ผู้ใช้ป้อนชื่อลูกค้าคนที่ 1
    scanf("%s", name1);                     // รับค่าชื่อจากผู้ใช้ เก็บไว้ใน name1 (ไม่ต้องใส่ & เพราะเป็น array อยู่แล้ว)

    printf("Enter name of customer 2: ");   // แสดงข้อความให้ผู้ใช้ป้อนชื่อลูกค้าคนที่ 2
    scanf("%s", name2);                     // รับค่าชื่อจากผู้ใช้ เก็บไว้ใน name2

    // ตรวจสอบว่าชื่อลูกค้าเหมือนกันหรือไม่
    if (strcmp(name1, name2) == 0) {  
        // strcmp() จะเปรียบเทียบสตริง ถ้าเหมือนกันจะคืนค่า 0
        // ดังนั้นถ้าเท่ากับ 0 แปลว่าชื่อเหมือนกัน

        printf("Both of your names are the same, which is %s.\n", name1);  
        // แสดงผลว่าชื่อเหมือนกัน พร้อมโชว์ชื่อ

        printf("The length of the name is %d characters.\n", (int)strlen(name1));  
        // strlen() ใช้นับความยาวของ string (จำนวนตัวอักษร ไม่รวม '\0')
    } else {
        // กรณีชื่อไม่เหมือนกัน
        printf("Customer 1: %s (%d characters)\n", name1, (int)strlen(name1));  
        // แสดงชื่อและจำนวนตัวอักษรของลูกค้าคนที่ 1

        printf("Customer 2: %s (%d characters)\n", name2, (int)strlen(name2));  
        // แสดงชื่อและจำนวนตัวอักษรของลูกค้าคนที่ 2
    }

    return 0;   // คืนค่า 0 บอกว่าโปรแกรมทำงานเสร็จสมบูรณ์
}