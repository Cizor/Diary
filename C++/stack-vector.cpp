#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T> 
class Stack{
	private:
		vector<T> v;
		typename vector<T>::iterator i;
	public:
		void push();
		void pop();
		void print();
		void popMultiple(int);
		void clearAll();
};

int main(){
	//To be done for different types of objects of Stack
}

template <class T> void Stack<T>::push(){
	T x;
	i = v.begin();
	i = v.insert(i,1);
}

template <class T>
void Stack<T>::print(){
	for(i = v.begin(); i != v.end();i++){
		cout<<"Element: "<<*i<<endl;
	}
}

template <class T>
void Stack<T>::pop(){
	v.erase(v.begin());
}

template <class T>
void Stack<T>::popMultiple(int range){
	v.erase(v.begin(), v.begin()+range);
}

template <class T>
void Stack<T>::clearAll(){
	v.clear();
}
