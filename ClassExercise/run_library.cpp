#include <iostream>
#include <vector>
#include "Library.h"

// Names James McDonald, chakrya ros, Sol A, Joseph W. Evans (Joey):
//
// Complete numbered coding tasks.
// Answer the questions with "Answer: " in the comments in the comments.
// Turn all your library files in as library.zip on moodle before the end of class.

using namespace std; 

int main() {
	
	Library* mylib = new Library();
	Book mybook;
	mybook.title = "Moby Dick";
	mybook.author = "Herman Melville";
	Book mybook2;
	mybook2.title = "Romeo And Juliet";
	mybook2.author = "Shakespeare";
	mylib->Donate(mybook);
	mylib->PrintBooks();
	mybook.title = "Random";
	mylib->PrintBooks();
	
	// 1) Instantiate a couple Books. Set their fields equal to some values.
	// Print out the values of the books' fields.


	// 2) Instantiate a Library.
   
	// 3) Add a void Donate(Book b) method to your Library class.
	// Your Library should store the new book at the end of its shelf.


	// 4) Donate one of the Books that you instantiated to your Library.
   

	// 5) Print out the books in the Library (use the given PrintBooks method)
	

	// 6) Change the title and/or author of the book that you donated to
	// something different.
	// Print out the new book information, then print out the books in your
	// Library. Did changing the Book information change it in your Library?
	//
	// Answer (and your hypothesis for why/why not):
	
	//When we call Donate it is creating a copy of the book passed in memory and adding that to the shelf_.	
	
	// 7) Create two Books that are separate structs (not pointers or references)
	// but that have the same information.
	// use the == operator to test if they are equal. What happens?
	// if it succeeds, are these equal?
	//
	// Answer:
		
	/*
	Book one;
	one.title="Foo";
	one.author="Bar";
	Book two;
	two.title="Foo";
	two.author="Bar";
	
	if (one == two){
		cout << "They are equal." << endl;
	}
	else {
		cout << "They are not equal." << endl;
	}
	
	This creates an invalid operand to binary expression error on compile.
	
	*/
	
	
	// 8) Create two Book references to your Books from # 7.
	// use the == operator to test if they are equal. What happens?
	// if it succeeds, are these equal?
	//
	// Answer:
	
	/*	
	Book one;
	one.title="Foo";
	one.author="Bar";
	Book two;
	two.title="Foo";
	two.author="Bar";
	Book& b1_ref=one;
	Book& b2_ref=two;
	if (b1_ref == b2_ref){
			cout << "They are equal." << endl;
		}
		else {
			cout << "They are not equal." << endl;
		}
	*/
	// This creates the same error as above.
	
	
	// 9) Create two Book pointers to your Books from # 7.
	// use the == operator to test if they are equal. What happens?
	// if it succeeds, are these equal?
	//
	// Answer:
	
	

	// 10) Overload == for our library.
	
	Book one;
	one.title="Foo";
	one.author="Bar";
	Book two;
	two.title="Foo";
	two.author="Bar";
	Book& b1_ref=one;
	Book& b2_ref=two;
	if (one == two){
			cout << "They are equal." << endl;
		}
		else {
			cout << "They are not equal." << endl;
		}

	// 11) Add another donate method that accepts amount of copies as an input.

	int i = 3;
	mylib->Donate(mybook2, i);
	mylib->PrintBooks();
	
	// 12)
   
}