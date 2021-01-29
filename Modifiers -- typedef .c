#include<Stdio.h>
typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;
typedef signed   char   s8;
typedef signed short   s16;
typedef signed int  s32;
typedef float    f32;
typedef   double       f64;

int main(void){
                                                /*Output*/
printf("The size of u8 = %d\n",sizeof(u8));       //1
printf("The size of u16 = %d\n",sizeof(u16));     //2
printf("The size of u32 = %d\n",sizeof(u32));     //4
printf("The size of s8 = %d\n",sizeof(s8));       //1
printf("The size of s16 = %d\n",sizeof(s16));     //2
printf("The size of s32 = %d\n",sizeof(s32));     //4
printf("The size of f32 = %d\n",sizeof(f32));     //4
printf("The size of f64 = %d",sizeof(f64));       //8

}


