#include<iostream>
using namespace std;
int main()
{
	//1.vector Declaration
	vector<int>v;
	//2.push_back()
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	//3.print vector value

	cout<<v[0]<<endl;
	cout<<v[1]<<endl;
	//cout<<v[2]<<endl;
	//cout<<v[3]<<endl;
	//3.1-Another way to vector print 

	cout<<v.at(2)<<endl;
	cout<<v.at(3)<<endl;
	//4.size()

	cout<<v.size()<<endl;

	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;
	//5.front()

cout<<v.front()<<endl;
//6.back()

cout<<v.back()<<endl;
//7.clear()

v.clear();
cout<<v.size()<<endl;
//8.empty()

if(v.empty())
	cout<<"Empty"<<endl;
else
	cout<<"Not Empty"<<endl;




}