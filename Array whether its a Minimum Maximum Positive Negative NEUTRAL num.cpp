#include<iostream>
using namespace std;
int size;
void inputNumber(int array[1000]);
void inputNumber(int array[1000])
{
	cout<<"Please enter the size of the array: ";
	cin>>size;
	cout<<"Please enter the elements of the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
}

void Positive(int array[1000])
{
	cout<<"The positive numbers are: "<<endl;
	for(int i=0;i<size;i++)
	{
		if(array[i]>0)
		{
			cout<<array[i]<<endl;
		}
	}
}

void Negative(int array[1000])
{
	cout<<"The negative numbers are: "<<endl;
	for(int i=0;i<size;i++)
	{
		if(array[i]<0)
		{
			cout<<array[i]<<endl;
		}
	}
}

void Neutral(int array[1000])
{
	cout<<"The neutral number is: "<<endl;
	for(int i=0;i<size;i++)
	{
		if(array[i]==0)
		{
			cout<<array[i]<<endl;
		}
	}
}

void Max(int array[1000])
{
	int max;
	max=array[3];
	cout<<"The maximum number is: "<<endl;
		for(int i=0;i<size;i++)
		{
			if(array[i]>max)
			{
				max=array[i];
				cout<<max<<endl;
			}
		}
}

void Min(int array[1000])
{
	int min;
	min=array[3];
	cout<<"The minimum number is: "<<endl;
		for(int i=0;i<size;i++)
		{
			if(array[i]<min)
			{
				min=array[i];
				cout<<min<<endl;
			}
		}
}

void Display(int array[1000])
{
	inputNumber(array);
	Positive(array);
	Negative(array);
	Neutral(array);
	Max(array);
	Min(array);
}

int main()
{
	int array[1000];
	Display(array);
}
 
