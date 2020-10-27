#ifndef shelf_h
#define shelf_h

#include <iostream>
#include <string>
#include <vector>
#include "PrintBook.h"

using namespace std;

class Shelf{
	protected:
		vector<PrintBook> pbooks;
	public:
		Shelf(){
			//TODO: default actions
		}
		
		void addBook(PrintBook pb){
			pbooks.push_back(pb);
		}
		
		PrintBook getBook(int id){
            if(id<pbooks.size()){//Проверка
				return pbooks[id];
			}else{
				cout<<"Error in Book ID!\n";
			}
		}

        int getBookN(){//Количество книг
            return pbooks.size();
        }

		void Print(){
			cout<<"Shelf contents: \n";
			for(int i=0;i<pbooks.size();i++){
				pbooks[i].Print();
			}
		}
};

#endif
