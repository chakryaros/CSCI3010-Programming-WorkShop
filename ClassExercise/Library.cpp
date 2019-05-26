#include <iostream>
#include <string>
#include <vector>

#include "Library.h"

bool Book::operator==(const Book &b) {
	return title == b.title && author == b.author;	
}

/**
	Zero argument constructor initializes a library with a shelf but no books.
*/
Library::Library() {
	std::vector<Book> tmp;
	shelf_ = tmp;  // initialize my shelf
}

void Library::Donate(Book b){
	shelf_.push_back(b);
}

void Library::Donate(Book c, int num){
	for (int i=0; i<num; i++){
		shelf_.push_back(c);
	}
}
/**
	Prints out each book in the library, one per line to cout
*/
void Library::PrintBooks() {
	for (Book b : shelf_) {
		std::cout << b.title << " by " << b.author << std::endl;
	}
}