#include <stdio.h>


struct book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    
    struct book books[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Enter information for book %d:\n", i + 1);
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();  
    }

    for (int i = 0; i < 5; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Price: $%.2f\n", books[i].price);
    }

    return 0;
}

