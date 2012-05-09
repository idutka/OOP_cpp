#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class student {
	char fname[20];
	char sname[20];
	char group[10];
public:
	student() {};
	student (char *f, char *s, char *g){
		strcpy (fname,f);
		strcpy(sname,s);
		strcpy(group,g);
	}
	friend ostream &operator<<(ostream &stream, student o);
	friend istream &operator>>(istream &stream, student &o);
};
ostream &operator<<(ostream &stream, student o)
{

	stream << o.fname << " ";
	stream << o.sname << " ";
	stream << o.group << "\n";
	return stream;
}
istream &operator>>(istream &stream, student &o)
{
	cout<<"Ведіть і'мя студента:";
	stream>>o.fname;
	cout<<"Введіть прізвище студента:";
	stream>>o.sname;
	cout<<"Введіть групу:";
	stream>>o.group;
	cout<<"\n";
	return stream;
}
int main ()
{
	student a;
	char c,ch;

	fstream pb("student",ios::in | ios::out | ios::app);
	if(!pb)
	{
		cout<<"Помилка при відкриванні файла \n";
		return 1;
	}

	while(1){
		do {
			cout<<"1.Додати студента \n";
			cout<<"2.Вивести список \n";
			cout<<"3.Вихід \n";
			cin>>c;
		}while (c < '1' or c > '3');

		switch(c){
		case '1':
			cin>>a;
			cout<<"Ви вибрали:";
			cout<<a;
			pb<<a;
			break;
		case '2':
			pb.seekg(0,ios::beg);
			while(!pb.eof()){
				pb.get(ch);
				if(!pb.eof())
					cout<<ch;
			}
			pb.clear();
			cout<<endl;
			break;
		case '3':
			pb.close();
			return 0;
		}
	}
	return 0;
}
