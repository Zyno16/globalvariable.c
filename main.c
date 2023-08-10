#include <stdio.h>
#include <stdlib.h>
#define print_count3()\
                    count++;\
                    printf("%d\n",count);
int count=0;
void print_count1(){
count++;
printf("%d\n",count);}
void print_count2(){
count++;
printf("%d\n",count);}
int main()
{
   print_count1();
   print_count1();
   print_count1();
   print_count1();
   print_count2();
   print_count2();
   print_count3();
    return 0;
}
