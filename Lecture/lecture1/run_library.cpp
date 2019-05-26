#include <iostream>
#include <vector>
#include "Library.h"

// Names (Please include last name or initial!):
//
// Complete numbered coding tasks.
// Answer the questions with "Answer: " in the comments in the comments.
// Turn all your library files in as library.zip on moodle before the end of class.

int main() {
    // 1) Instantiate a couple Books. Set their fields equal to some values.
    // Print out the values of the books' fields.
    Book mybook;
    mybook.title = "csci3010";
    mybook.author= "Herman";
    Library mylib;
    mylib.PrintBooks();


    // 2) Instantiate a Library.
   
    // 3) Add a void Donate(Book b) method to your Library class.
    // Your Library should store the new book at the end of its shelf.


    // 4) Donate one of the Books that you instantiated to your Library.
    mylib.Donate(mybook);

    // 5) Print out the books in the Library (use the given PrintBooks method)
    mybook.title="new";

    // 6) Change the title and/or author of the book that you donated to
    // something different.
    mylib.PrintBooks();
    // Print out the new book information, then print out the books in your
    // Library. Did changing the Book information change it in your Library?
    //
    // Answer (and your hypothesis for why/why not):

    
    // 7) Create two Books that are separate structs (not pointers or references)
    Book mybook1;
    mybook1.title = "csci3010";
    mybook1.author= "Herman";
    Book mybook2;
    mybook2.title = "csci3010";
    mybook2.author= "Herman";
    // if(mybook1==mybook2)
    // {
    //     cout<<"success";
    // }

    // but that have the same information.
    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
    //
    // Answer:

    // 8) Create two Book references to your Books from # 7.
    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
    //
    // Answer:

    // 9) Create two Book pointers to your Books from # 7.
    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
   // Book* book1;
    //Book *book1_p = &book1;
    // Answer:


    // 10) (Given in lecture)


    // 11)


    // 12)
   
}