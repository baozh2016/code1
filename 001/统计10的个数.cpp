//#include<iostream>
//using namespace std;
//
//int findmax(char *a)
//{
//	char *p=NULL;
//	p=a;
//	int cout0=0;
//	int cout1=0;
//	int temp0=0;//��󱣴�0�ĸ���
//	int temp1=0;
//
//	while(*p!=NULL)
//	{
//		if(*p=='0')
//		{
//			cout0++;
//			if(*(++p)=='1')////��һ������0����Ҫͳ��0�ĸ�������
//			{
//				if(temp0<cout0)
//					temp0=cout0;//��0�ĸ�������temp0�У����´� ���¼���0
//				cout0=0;
//			}
//			
//		}
//		else if(*p=='1')
//		{
//			cout1++;
//			if(*(++p)=='0')
//			{
//				if(temp1<cout1)
//					temp1=cout1;
//				cout1=0;
//			}
//			
//		}
//
//	}	
//	if(temp1>temp0)
//			return temp1;
//		else return temp0;
//}
//
//
//int main()
//{
//	char b[]="010101000101111011111110001";
//	int num=0;
//	num=findmax(b);
//	cout<<num;
//	return 0;
//}