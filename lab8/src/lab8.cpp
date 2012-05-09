#include <iostream>
#include <stack>
#include <vector>
#include <stdlib.h>

using namespace std;

class Containers
{
	float temp;
public:
	Containers(){temp=0;}
	Containers(float f){temp=f;}
	~Containers(){}
	Containers &operator=(float f){
		temp=f;
		return *this;
	}

	float get_temp()
	{
		return temp;
	}
};
bool operator<(Containers a, Containers b)
{
	return a.get_temp()<b.get_temp();
}
bool operator==(Containers a,Containers b)
			{
	return a.get_temp()==b.get_temp();
			}

int main ()
{
	stack <float> Q;
	vector<float> V1(15);
	vector<float>::iterator it;
	vector<Containers> V2;

	float i,j,k=1.7;

	cout<<"Результат \n";
	for(i=0.0;i<10.0;i++) Q.push(i);
	cout<<"Розмір стеку "<<Q.size()<<"\n";
	cout<< "Стек: \n";
	for(j=0;j<10;j++)
	{
		cout<<Q.top();
		Q.pop();
	}
	if(Q.empty())cout<<"\nСтек порожній \n";

	it=V1.begin();
	i=0;
	while(it!=V1.end())
	{
		*it=i+k;
		it++;
		k++;
	}
	cout<<"\n Вектор V1: \n";
	it=V1.begin();
	while (it!=V1.end())
	{
		cout<<*it<< " ";
		it++;
	}
	cout<<"\n Розмір вектора V1:"<<V1.size()<<"\n";

	it=V1.begin();
	it+=3;
	V1.insert(it,10,1.0);


	cout<<"\n Вектор V1 після вставки: \n";
	it=V1.begin();
	while(it!=V1.end())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<"\n Розмір вектора після вставки:"<<V1.size()<<"\n";
	it=V1.begin();
	it+=2;
	V1.erase(it,it+10);

	cout<<"\n Вектор після видалення:\n";
	it=V1.begin();
	while(it!=V1.end())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<"\n Розмір вектора після видалення:"<<V1.size()<<"\n";

	for(i=0;i<10;i++)
		V2.push_back(Containers(rand()%1000));

	cout<<"\n Новий вектор заповнений функцією rand(): \n";
	for (i=0;i<V2.size();i++)
		cout<<V2[i].get_temp()<<' ';

	return 0;

}

