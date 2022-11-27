#include<iostream>
using namespace std;
class Array
{
	int a[100],i;
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
		int search(int value)
		{
			for(i=0;i<size;i++)
			{
				if(a[i]==value)
					return i;//return index
				else
					return -1;//Element not found
			}
		}
		void delete1(int index)
		{
			for(i=index;i<size-1;i++)
			{
				a[i]=a[i+1];
			}
			a[size-1]=0;
			size--;
		}	
		void printArray()
		{
		for(i=0;i<size;i++)
			{
				cout<<a[i]<<" ";
			}
	}
};
int main()
{
	Array a;
	int n,x,i,value;
	cout<<"enter the number:-";
	cin>>n;
	cout<<"enter "<<n<<" Elements:-"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>x;
		a.insert(i,x);
	}
	for(i=0;i<a.getSize();i++)
	{
		cout<<a.get(i)<<" ";
	}
	cout<<"Enter element u want to search:-"<<endl;
	cin>>value;
	int index=a.search(value);
	if(index != -1)
	{
		cout<<"Element found"<<index;
	}
	else
	{
		cout<<"Element not found"<<endl;
	}
	cout<<"which Index you want to delete:- ";
	cin>>index;
	a.delete1(index);
	a.printArray();
}
