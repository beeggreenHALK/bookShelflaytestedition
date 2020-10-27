#ifndef book_h
#define book_h
#include <iostream>
#include <string>

using namespace std;

class Book{
	public:
		string Name;
		int Pages;
		Book(){
			Name = '-';
			Pages = 0;
		}
		string getName(){
			return Name;
		}
		int getPages(){
			return Pages;
		}
		void Print(){
			cout<<"Book: "<<Name<<", p."<<Pages<<"\n";
		}
};
#endif
