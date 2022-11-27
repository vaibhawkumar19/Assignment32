#include<iostream>
using namespace std;
class Array
{
	int a[100];
	int size=0;
	public:
		void insert(int index,int value)
		{
			a[index]=value;
			size++;
		}
		int get(int index)
		{
			return a[index];
		}	
		int getSize()
		{
			return size;
		}	
};
int main()
{
	Array a;
	int n,x,i;
	cout<<"enter the number:-";
	cin>>n;
	cout<<"enter "<<n<<" Elements:-";
	for(i=0;i<n;i++)
	{
		cin>>x;
		a.insert(i,x);
	}
	for(i=0;i<a.getSize();i++)
	{
		cout<<a.get(i)<<" ";
	}
}
