//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>     
int main(void) {
    char date[11]; // Format: dd/04/yyyy
    printf("Enter a date (dd/04/yyyy): ");
    fgets(date, sizeof(date), stdin);

    // Check if the input format is correct
    if (strlen(date) != 11 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format.\n");
        return 1;
    }

    // Replace "04" with "Apr"
    char month[] = "Apr";
    char newDate[15]; // New format: dd-Apr-yyyy
    strncpy(newDate, date, 3); // Copy dd/
    newDate[3] = '\0';
    strcat(newDate, month);     // Append Apr
    strcat(newDate, &date[5]);  // Append /yyyy

    printf("Date in new format: %s", newDate);
    return 0;
}   