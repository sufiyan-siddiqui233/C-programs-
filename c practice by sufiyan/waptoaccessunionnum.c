//8.2 WAP to access union member

#include <stdio.h>
union Job {
   float salary;
   int workerNo;
} j;

int main() {
    printf("Siddiqui Mohd Sufiyan D5A 52\n");
   j.salary = 12.3;

   // when j.workerNo is assigned a value,
   // j.salary will no longer hold 12.3
   j.workerNo = 100;

   printf("Salary = %.1f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}