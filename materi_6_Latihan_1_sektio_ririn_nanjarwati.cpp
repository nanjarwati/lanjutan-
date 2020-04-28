#include<iostream>

using namespace std;
int main()
{
	string kucing[6]={"anggora","persia","himalaya","sphynx","bengal","savanna"};

	cout<<"Menampilkan secara manual :"<<endl;
	cout<<"kucing :"<<kucing[0]<<endl;
	cout<<"kucing :"<<kucing[1]<<endl;
	cout<<"kucing :"<<kucing[2]<<endl;
	cout<<"kucing :"<<kucing[3]<<endl;
	cout<<"kucing :"<<kucing[4]<<endl;
	cout<<"kucing :"<<kucing[5]<<endl;
	
	
	cout<<"Menampilkan dengan menggunakan for :"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<"kucing :"<<kucing[i]<<endl;
	}
		
	 
	system ("pause");
	return 0;
}
