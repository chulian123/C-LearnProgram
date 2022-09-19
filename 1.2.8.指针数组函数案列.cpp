//#include<iostream>
//
//using namespace std;
////冒泡函数 参数1 数组的首地址 参数2 数组的长度
//void maopao(int * arr ,int len) {
//	for (int i = 0; i < len -1; i++)
//	{
//		for (int j = 0; j <len - i-1; j++)
//		{
//         //如果j > j+1 的值 交换数字
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
////打印数组出来
//void printfArray(int * arr ,int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << endl;
//	}
//}
//
//int main() {
//	int arr[11] = {12,34,32,11,22,54,65,21,23,45,67};
//	int len = sizeof(arr) / sizeof(arr[0]);//数组的长度
//	maopao(arr, len);
//	printfArray(arr,len);
//}