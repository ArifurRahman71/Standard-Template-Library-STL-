#include<iostream>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;

	// v.erase(v.begin()+0);

	// for(int i=0;i<v.size();i++)
	// {
	// 	cout<<v[i]<< " ";
	// }
	// cout<<endl;

// v.erase(v.begin()+2,v.end());

// for(int i=0;i<v.size();i++)
// 	{
// 		cout<<v[i]<< " ";
// 	}
// 	cout<<endl;

v.erase(v.begin()+1,v.begin()+3);//Q-why do not remove 3 no value????

for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;





}