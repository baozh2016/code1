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
//void swapword(char *a,int n,int m)//����ÿ������
//{
//
//	for(int i=0;i<=(m-n)/2;i++)
//	{
//		swap(a+n+i,a+m-i);
//	}
//}
//
//int main()
//{
//	char s[]="I AM A STUDENT MEN YY";
//	int len=strlen(s);
//	int b2=0;// �ж��Ƿ��˽�������Ҫ���ڶ���������һ
//	for(int i=0;i<=len/2;i++)
//	{
//		swap((s+i),(s+len-i-1));
//	}
//	int j=0,m=0;
//	//char s1[]="abcdefg";
//	//swapword(s1,1,4);
//	//cout<<s1<<endl;
//	while(s[j]!=NULL)
//	{
//		if(s[j+1]==NULL) b2=1;
//		if(s[j]==' '||s[j+1]==NULL)
//		{   
//			swapword(s,m,j-1+b2); 
//			m=j+1;  
//			j++;
//			b2=0;
//	    }		
//		else
//			j++;
//	}
//
//	cout<<s<<endl;
//	return 0;
//}