//#include<iostream>
//using namespace std;
//#include<string.h>
//void swap(char *a,char *b)//����ÿ���ַ�
//{
//	char temp=*a;
//	*a=*b;
//	*b=temp;
//}
//
//void swapword(char a[],int n,int m)//����ָ����n,m���λ
//{
//	while(n<m)
//	{
//      swap(a[n++],a[m--]);
//	}			
//}
//
//int main()
//{
//	char s[100];
//	cout<<"print a string"<<endl;
//	gets(s);
//
//	//�ƶ������ƶ�m�Σ���
//	int m=0;//�ƶ��Ĵ�����
//	int n=strlen(s);
//	cin>>m;
//	swapword(s,0,m-1);
//	swapword(s,m,n-1);
//	swapword(s,0,n-1);
//
//	cout<<s<<endl;
//	return 0;
//}