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
    
    float totalBookPrice = 0;
    float discount = 0.05;
    float discountedPrice = 0;
    
    int seriesBought = 0;
    int totalNumberOfBooksCounter = totalNumberOfBooks;
    
    int numberOfBooksInSet;
    int maxInSet = 0;
    
    for (int count = 0; count < bookInSeries; count++)
    {
        if (book[count] != 0)
        {
            maxInSet++;
        }
    }
        
    for (int count = maxInSet; count > 0; count--)
    {
        int numberOfSets;
            
        if ((totalNumberOfBooks % count) == 0)
        {
            numberOfSets = totalNumberOfBooks / count;
            
            numberOfBooksInSet = totalNumberOfBooks / numberOfSets;
                
            break;
        }
    }
    
    if (totalNumberOfBooksCounter == 1)
    {
        totalBookPrice = bookPrice;
        discountedPrice = bookPrice;
    }
    else if (totalNumberOfBooksCounter != 1)
    {
        while (totalNumberOfBooksCounter != 0)
        {
            int count;
            float totalBookPriceTemp;
            float discountTemp;
            float discountedPriceTemp;
            int setCounter = 0;
            
            for (count = 0; count < bookInSeries; count++)
            {
                if (book[count] != 0)
                {
                    book[count]--;
                    seriesBought++;
                    totalNumberOfBooksCounter--;
                    
                    setCounter++;
                }
                
                if (setCounter == numberOfBooksInSet)
                {
                    break;
                }
            }
            
            if (seriesBought != 0)
            {
                totalBookPriceTemp = bookPrice * seriesBought;
                if (seriesBought == 2)
                {
                    discountTemp = discount;
                }
                else if (seriesBought == 3)
                {
                    discountTemp = discount * 2;
                }
                else
                {
                    discountTemp = discount * seriesBought;
                }
                
                discountedPriceTemp = totalBookPriceTemp - (totalBookPriceTemp * discountTemp);
                
                seriesBought = 0;
            }
            
            totalBookPrice = totalBookPrice + totalBookPriceTemp;
            discountedPrice = discountedPrice + discountedPriceTemp;
        }
    }
    
    printf("Total Price with %d books in series %.2f \n", totalNumberOfBooks, totalBookPrice);
    printf("Final Discounted Price is %.2f \n", discountedPrice);
    
    return 0;
}