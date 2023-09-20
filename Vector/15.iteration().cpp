#include<iostream>

using namespace std;
int main()
{
	vector<int>v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	vector<int>::iterator it;
	it=v1.begin()+3;
	cout<<*it<<endl;
}