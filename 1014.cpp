#include<iostream>
#include<string>
using namespace std;
void Week(int n)//输出对应的“星期” 
{
	switch(n)
	{
		case 1:cout<<"MON"<<' ';break;
		case 2:cout<<"TUE"<<' ';break;
		case 3:cout<<"WED"<<' ';break;
		case 4:cout<<"THU"<<' ';break;
		case 5:cout<<"FRI"<<' ';break;
		case 6:cout<<"SAT"<<' ';break;
		case 7:cout<<"SUN"<<' ';break;
	}
}
int main()
{
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int i=0;
	bool flag=false;//用作第1次和第2次判定，初始化为假 
	while(i<s1.length()&&i<s2.length())
	{
		if(s1[i]==s2[i])//如果两字符相等 
		{
		  	if(flag)//如果flag为真,注意此分支要摆在前面  
			{
				if(s1[i]>='0'&&s1[i]<='9')//0-9之间输出对应时间，注意前面加0 
				{	
					cout<<0<<s1[i]-'0'<<':';
					break;//注意及时退出循环 
				}
				else if(s1[i]>='A'&&s1[i]<='N')//10-23之间输出对应时间，注意字母判定到N为止！ 
				{
					int n=s1[i]-'A'+1;
					cout<<n+9<<':';break;
				}
			}
			if(!flag&&s1[i]>='A'&&s1[i]<='G')//如果flag为假且字符在A到G之间，注意是A到G！ 
			{
					int n=s1[i]-'A'+1;
					Week(n);//转换输出 
					flag=true;//将flag置为真，以便第2次判定
			}		
		}
		i++;	
	}
	i=0;//注意i要及时归0 
	while(i<s3.length()&&i<s4.length())
	{
		if(s3[i]==s4[i]&&(s3[i]>='A'&&s3[i]<='Z'||s3[i]>='a'&&s3[i]<='z'))
		{//如果字符相等且为英文字母，注意是不区分大小写的英文字母！ 
			if(i<10)
			cout<<0;//注意小于10的数要输出0 
			cout<<i;
			break;//及时退出 
		}
		i++;	
	}
	return 0;
}

//总结：代码冗长。不必全部转为字符串在最后来集中输入，可以在过程中及时cout.
//不要转为字符串来+“0”。可以直接cout<<0; cout<<hour;
//能用switch就不要用map