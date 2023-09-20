#include<iostream>

using namespace std;
int main()
{
	vector<int>v1;
	v1.push_back(100);
	v1.push_back(20);
	v1.push_back(300);
	v1.push_back(5);
	v1.push_back(10);

	cout<< "before sroting"<<endl;
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;

	reverse(v1.begin(),v1.end());

	cout<< "After sroting"<<endl;
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	



}
