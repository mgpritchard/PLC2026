#include <stdio.h>

typedef struct { char title[20]; char shipAddress[50]; float price; } BookSale;
typedef struct { char title[20]; float price; } EBookSale;

typedef union {
    BookSale book;
    EBookSale ebook;
    } BookUnion;

typedef enum {Book, EBook} BookVariant;

typedef struct {
    BookVariant variant;
    BookUnion content;
    } Sale;
    
Sale firstsale = {Book, {"SomeTitle", 40}}; //this should have been an EBook!

Sale secondsale = {Book, {"DifferentTitle", "SomeStreet", 10}};


int main(int argc, char *argv[]){
    printf("Send To: %s", &firstsale.content.book.shipAddress);
}

