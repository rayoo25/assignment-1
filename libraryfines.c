#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    int fineRate;
    float fineAmount;

    
    printf("Enter Book ID (integer): ");
    scanf("%d", &bookID);
    printf("Enter Due Date (integer): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (integer): ");
    scanf("%d", &returnDate);


    daysOverdue = returnDate - dueDate;

    
    if (daysOverdue <= 7) {
        fineRate = 20; 
    } else if (daysOverdue <= 14) {
        fineRate = 50; 
    } else if (daysOverdue > 14) {
        fineRate = 100;
    } else {
        fineRate = 0; 
    }

   
    if (daysOverdue > 0) {
        fineAmount = daysOverdue * fineRate;
    } else {
        fineAmount = 0; 
    }

    
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Fine Amount: Ksh. %.2f\n", fineAmount);

    return 0;
}