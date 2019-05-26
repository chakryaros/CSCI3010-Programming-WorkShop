#include <iostream>

using namespace std;

int main() {

   unsigned int a = 60;	/* 60 = 0011 1100 */  
   unsigned int b = 13;	/* 13 = 0000 1101 */
   int c = 0;           

   // c = a & b;       /* 12 = 0000 1100 */ 
   // printf("Line 1 - Value of c is %d\n", c );

   // c = a | b;       /* 61 = 0011 1101 */
   // printf("Line 2 - Value of c is %d\n", c );

   // c = a ^ b;       /* 49 = 0011 0001 */
   // printf("Line 3 - Value of c is %d\n", c );

   // c = ~a;          /*-61 = 1100 0011 */
   // printf("Line 4 - Value of c is %d\n", c );

   // c = a << 2;     /* 240 = 1111 0000 */
   // printf("Line 5 - Value of c is %d\n", c );

   // c = a >> 2;     /* 15 = 0000 1111 */
   // printf("Line 6 - Value of c is %d\n", c );
   int byte = 0x55;
   printf("byte is %x\n", byte);
   int word = byte + (byte << 8);
   printf("word is %x\n", word);
   int twoWords = word + (word << 16);
   printf("word is %x\n", byte << 16);
   printf("evenbit is %x\n", twoWords);
}