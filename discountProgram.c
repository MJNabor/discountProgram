int main() {
    
    float bookPrice = 8;
    
    int book[2] = {0, 0};
    
    printf("Enter the number of Book sold: ");
    scanf("%d", &book[0]);
    
    int totalNumberOfBooks;
    totalNumberOfBooks = book[0] + book[1];
    printf("Total number of books is %d \n", totalNumberOfBooks);
    
    float totalBookPrice = 0;
    float discount = 0.05;
    
    int bookInSeries = 0;
    float discountedPrice = 0;
    
    if (book[0] != 0)
    {
        totalBookPrice = bookPrice;
        discountedPrice = totalBookPrice;
    }

    printf("totalBookPrice is %f \n", totalBookPrice);
    
    return 0;
}