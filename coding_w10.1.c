#include <stdio.h>
int main() {
    int student_number;                                             // สร้างตัวแปร int student_number
   
    printf("Enter number of students: ");                           //แสดงข้อความ Enter number of students
    scanf(" %d", &student_number);                                          // รับค่า student_number
    printf("Enter %d student scores (one per line):\n", student_number);    // ใส่ค่าในตัวแปร student_number

    float score[student_number];                      // สร้างตัวแปร float score โดยที่กำหนดให้มีช่อง array เท่ากับค่าที่กำหนดไว้ใน student_number
    float sum;                                        // สร้างตัวแปร float sum

    for (int i = 0; i < student_number ; i++) {       // กำหนด for loop โดยให้ int i=0 และให้ทำงานจนกว่า i มีค่าเกือบเท่า student_number หลังจากนั้นจึงบวกค่า i 1
        printf("Score %d: ", i+1);                     // แสดงข้อความให้ใส่ค่า Score โดย ให้เเสดง i+1
        scanf("%f", &score[i]);                        // รับค่า score โดย ตอนแรก i = 0 จากนั้นจะเพิ่มขึ้นที่ละ 1 เเละจะใส่ค่าไปเรื่อยๆ ในเเต่ละช่องของ ตัวแปร score 
        sum += score[i];                                // ให้นำค่า score ที่ระบุไว้มาบวกกันเรื่อบ ๆ ในตัวแปร sum
    }
    float average = sum / student_number ;              //สร้างตัวแปร average โดยที่ให้ sum หารด้วย student_number
    printf("\nNumber of students = %d\n", student_number);          // แสดงข้อความจำนวนของนักเรียน
    printf("Average score = %.2f\n", average);  /*แสดงข้อความคะแนนเฉลี่ย โดยการนำ sum จากการบวกคะแนนกันในเเต่ละช่องของ ตัวแปร scoreหารกับจำนวนนักเรียนในตัวแปร student_number */

    return 0;
}