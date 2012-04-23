#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class TObject {
public:
	int number_w;
	virtual void Show()=0;
};

struct TItem{
	TObject *obj;
	TItem *next;
};

class Department:public TObject {
protected:
	char *title;

public:
	static TItem *begin;
	Department(char *t,int n){
		title = new char[strlen(t)+1];
		strcpy(title,t);
		number_w = n;
		AddToList();
		cout << "Конструктор для обєкта -відділ- " << this << endl;
	};
	void Show(){
		cout << title << endl;
		cout << number_w << endl;
	}
	void ShowAll(){
		if(begin){
			TItem *temp;
			temp = begin;
			do{
				(temp->obj)->Show();
			}while((temp=temp->next)!=0);
		}else{
			cout << "Список порожній!" << endl;
		}

		}
	void AddToList(){
		if(!begin){
			begin = new TItem;
			begin->obj = this;
			begin->next = 0;
		}else{
			TItem *temp;
			temp = begin;
			while(temp->next) temp = temp->next;
			temp = temp->next = new TItem;
			temp->obj = this;
			temp->next = 0;
		}
	};
	void Workers_more(int m){
		if(begin){
			TItem *temp;
			int i(0);
			temp = begin;
			do{
				if(temp->obj->number_w > m){
					(temp->obj)->Show();
					cout << endl;
					i++;
				}
			}while((temp=temp->next)!=0);
		if(!i) cout << "Немає віділу з кількістю працівників більше " << m << endl;
		}else{
			cout << "Список порожній!" << endl;
		}

	};

	virtual ~Department(){
		cout << "Деструктор для обєкта -відділ- " << this << endl;
	};
};

class Plant: public Department {
	int square;
public:
	Plant(char *t,int n,int s):Department(t,n){
		square = s;
		cout << "Конструктор для обєкта -цех- " << this << endl;
	};
	void Show(){
			cout << title << endl;
			cout << number_w << endl;
			cout << square << endl;
		}
	virtual ~Plant(){
		cout << "Деструктор для обєкта -цех- " << this << endl;
	};
};

class Supervisory: public Department {
	char *chief;
public:
	Supervisory(char *t,int n,char *c):Department(t,n){
		chief = new char[strlen(c)+1];
		strcpy(chief,c);
		cout << "Конструктор для обєкта -операторська- " << this << endl;
	};
	virtual ~Supervisory(){
		cout << "Деструктор для обєкта -операторська- " << this << endl;
	};
};

TItem *Department::begin=0;

int main(){

Plant *pl;
Department dp("постачальний",9);
pl = new Plant("обробний",5,100);
pl = new Plant("токарний",20,200);

pl->Workers_more(6);
		return 0;
}
