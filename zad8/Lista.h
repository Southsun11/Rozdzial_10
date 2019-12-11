#pragma once
#include <iostream>
template <typename T> 
class Lista
{
private:
	struct Node {
		Node* before;
		T value;
		Node* next;
		Node(T v)
		{
			before = nullptr;
			value = v;
			next = nullptr;
		}
	};
	Node * first;
	Node * last;
public:
	Lista();
	~Lista();
	void dodaj(T v);
	void usun(T& v,int n;

	void visit(void (*pf)(T&));
	void show() const;

};



template <typename T>
Lista<T>::Lista()
{
	last = nullptr;
	first = nullptr;
}
template<typename T>
Lista<T>::~Lista()
{
	Node * temp = first;
	while (temp)
	{
		first = first->next;
		delete temp;
		temp = first;
	}
}
template <typename T>
void Lista<T>::dodaj(T v)
{
	Node * temp = new Node(v);
	if (first == nullptr)
	{
		first = temp;
		last = temp;
	}
	else
	{
		last->next = temp;
		temp->before = last;
		last = temp;
	}

}
template <typename T>
void Lista<T>::show() const
{
	Node* temp = first;
	while (temp)
	{
		std::cout << temp->value << std::endl;
		temp = temp->next;
	}
}
template <typename T>
void Lista<T>::usun(T& v,int n) 
{
	node* temp = first;
	for (int i = 0; i < n; i++)
	{
		if(temp = )
	}
}

template <typename T>
void Lista<T>::visit(void (*pf)(T&)) {};