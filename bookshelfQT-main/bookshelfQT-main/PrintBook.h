#ifndef pbook_h
#define pbook_h
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

class PrintBook:public Book{
	private:
		int printPages;
	public:
		PrintBook():Book(){
			printPages=0;
		}
		int getPrintPages(){
			return printPages;
		}
		void setName(string s){
			Name = s;
		}
		void setPages(int p){
			Pages = p;
			printPages = p/16;
		}
}; 

#endif
