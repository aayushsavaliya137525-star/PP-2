#include <stdio.h>

// Define a structure named 'Date' to store date information
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    // Declare two Date structures and initialize them
    struct Date date1, date2;

    // Prompt user to enter the first date
    printf("Enter first date (dd mm yyyy): ");
    // Read user input into date1 members
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Prompt user to enter the second date
    printf("Enter second date (dd mm yyyy): ");
    // Read user input into date2 members
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare the dates
    // Dates are equal only if day, month, AND year are all equal
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        printf("The dates are Equal.\n");
    } else {
        printf("The dates are Not Equal.\n");
    }

    return 0;
}
