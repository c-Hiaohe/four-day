#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


void Add(int* p)
{
 ++*p;

}
int main()
{
 int num = 0;
 Add(&num);
 printf("num = %d\n",num);
 Add(&num);
 printf("num = %d\n", num);
 Add(&num);
 printf("num = %d\n", num);
 
 return 0;
}

//int binary_search(int arr[], int k,int sz)
//{
//
// int left = 0;
// int right = sz - 1;
// while (left <= right)
// {
//
//  int mid = (left + right) / 2;
//  if (arr[mid] < k)
//  {
//   left = left + 1;
//  }
//  else if(arr[mid]>k)
//  {
//   right = mid - 1;
//  }
//  else
//  {
//   return mid;
//  }
//  
// }
// return -1;
//}
//
//int main()//二分查找，在一个有序的数组中找具体的某个数
//{
// int arr[] = {1,2,3,4,5,6,7,8,9,10};
// int k = 7;
// int sz = sizeof(arr) / sizeof(arr[0]);
// int ret = binary_search(arr, k,sz);
// if (ret == -1)
// {
//  printf("找不到");
//
// }
// else
// {
//  printf("找到了，下标是:%d",ret);
// }
// return 0;
//}

//int is_leap_year(int y)//打印1000~2000的闰年
//{
// if ((y % 4 == 0 && y%10