int main() {
    
    float bookPrice = 8;
    
    int bookInSeries = 3;
    
    int book[3] = {0, 0, 0};
    
    printf("Enter the number of Book 1 sold: ");
    scanf("%d", &book[0]);
    printf("Enter the number of Book 2 sold: ");
    scanf("%d", &book[1]);
        printf("Enter the number of Book 3 sold: ");
    scanf("%d", &book[2]);
    
    int totalNumberOfBooks = 0;
    for (int count = 0; count < bookInSeries; count++)
    {
        totalNumberOfBooks = totalNumberOfBooks + book[count];
    }
    printf("Total number of books is %d \n", totalNumberOfBooks);
    
    float totalBookPrice = 0;
    float discount = 0.05;
    
    float discountedPrice = 0;
    
    if (book[0] != 0 && book[1] != 0 && book[2] == 0)
    {
        totalBookPrice = bookPrice * 2;
        discountedPrice = totalBookPrice-(totalBookPrice*discount);
    }
    else if (book[0] != 0 && book[1] != 0 && book[2] != 0)
    {
        totalBookPrice = bookPrice * 3;
        discount = discount*2;
        discountedPrice = totalBookPrice-(totalBookPrice*discount);
    }

    printf("totalBookPrice with %d books in series %f \n", totalNumberOfBooks, totalBookPrice);
    printf("discounted price is %f \n", discountedPrice);
    
    return 0;
}