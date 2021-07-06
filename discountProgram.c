int main() {
    
    float bookPrice = 8;
    
    int bookInSeries = 5;
    
    int book[5] = {0, 0, 0, 0, 0};
    
    printf("Enter the number of Book 1 sold: ");
    scanf("%d", &book[0]);
    printf("Enter the number of Book 2 sold: ");
    scanf("%d", &book[1]);
    printf("Enter the number of Book 3 sold: ");
    scanf("%d", &book[2]);
    printf("Enter the number of Book 4 sold: ");
    scanf("%d", &book[3]);
    printf("Enter the number of Book 5 sold: ");
    scanf("%d", &book[4]);
    
    int totalNumberOfBooks = 0;
    for (int count = 0; count < bookInSeries; count++)
    {
        totalNumberOfBooks = totalNumberOfBooks + book[count];
    }
    printf("Total number of books is %d \n", totalNumberOfBooks);
    
    float totalBookPrice = 0;
    float discount = 0.05;
    float discountedPrice = 0;
    
/*    if (book[0] != 0 && book[1] != 0 && book[2] == 0 && book[3] == 0 && book[4] == 0)
    {
        totalBookPrice = bookPrice * 2;
        discountedPrice = totalBookPrice-(totalBookPrice*discount);
    }
    else if (book[0] != 0 && book[1] != 0 && book[2] != 0 && book[3] == 0 && book[4] == 0)
    {
        totalBookPrice = bookPrice * 3;
        discount = discount*2;
        discountedPrice = totalBookPrice-(totalBookPrice*discount);
    }
    else if (book[0] != 0 && book[1] != 0 && book[2] != 0 && book[3] != 0 && book[4] == 0)
    {
        totalBookPrice = bookPrice * 4;
        discount = discount*4;
        discountedPrice = totalBookPrice-(totalBookPrice*discount);
    }
    else if (book[0] != 0 && book[1] != 0 && book[2] != 0 && book[3] != 0 && book[4] != 0)
    {
        totalBookPrice = bookPrice * 5;
        discount = discount*5;
        discountedPrice = totalBookPrice-(totalBookPrice*discount);
    }*/
    
    int seriesBought = 0;
    int totalNumberOfBooksCounter = totalNumberOfBooks;
    
    while (totalNumberOfBooksCounter != 0)
    {
        int count;
        float totalBookPriceTemp;
        float discountTemp;
        float discountedPriceTemp;
        
        for (count = 0; count < bookInSeries; count++)
        {
            if (book[count] != 0)
            {
                book[count]--;
                seriesBought++;
                totalNumberOfBooksCounter--;
            }
        }
        
        printf("seriesBought is %d \n", seriesBought);
        
        if (seriesBought != 0)
        {
            totalBookPriceTemp = bookPrice * seriesBought;
            if (seriesBought != 3)
            {
                discountTemp = discount * seriesBought;
            }
            else
            {
                discountTemp = discount * 2;
            }
            
            printf("discountTemp is %f \n", discountTemp);
            discountedPriceTemp = totalBookPriceTemp - (totalBookPriceTemp * discountTemp);
            
            seriesBought = 0;
        }
        
        totalBookPrice = totalBookPrice + totalBookPriceTemp;
        discountedPrice = discountedPrice + discountedPriceTemp;
    }
    
    printf("totalBookPrice with %d books in series %f \n", totalNumberOfBooks, totalBookPrice);
    printf("discounted price is %f \n", discountedPrice);
    
    return 0;
}