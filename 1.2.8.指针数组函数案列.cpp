//#include<iostream>
//
//using namespace std;
////ð�ݺ��� ����1 ������׵�ַ ����2 ����ĳ���
//void maopao(int * arr ,int len) {
//	for (int i = 0; i < len -1; i++)
//	{
//		for (int j = 0; j <len - i-1; j++)
//		{
//         //���j > j+1 ��ֵ ��������
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
////��ӡ�������
//void printfArray(int * arr ,int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << endl;
//	}
//}
//
//int main() {
//	int arr[11] = {12,34,32,11,22,54,65,21,23,45,67};
//	int len = sizeof(arr) / sizeof(arr[0]);//����ĳ���
//	maopao(arr, len);
//	printfArray(arr,len);
//}