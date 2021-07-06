int main() {
    
    float bookPrice = 8;
    
    int book[2] = {0, 0};
    
    printf("Enter the number of Book 1 sold: ");
    scanf("%d", &book[0]);
    printf("Enter the number of Book 2 sold: ");
    scanf("%d", &book[1]);
    
    int totalNumberOfBooks;
    totalNumberOfBooks = book[0] + book[1];
    printf("Total number of books is %d \n", totalNumberOfBooks);
    
    float totalBookPrice = 0;
    float discount = 0.05;
    
    int bookInSeries = 0;
    float discountedPrice = 0;
    
    if (book[0] != 0 && book[1] != 0)
    {
        totalBookPrice = bookPrice * 2;
        discountedPrice = totalBookPrice-(totalBookPrice*discount);
    }
    printf("totalBookPrice with 2 books in series %f \n", totalBookPrice);
    printf("discounted price is %f \n", discountedPrice);
    
    return 0;
}