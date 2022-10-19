#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//functions to generate bills
void generateBillHeader(char name[50], char date[30])
{
    printf("\n\n");
        printf("\t  MOTUN MARTEEN BILLING SYSTEM");
        printf("\n\t  ***********************************");
        printf("\nDate:%s",date);
        printf("\nInvoice To: %s",name);
        printf("\n");
        printf("***********************************");
        printf("Items\t\t");
        printf("Qty\t\t");
        printf("Total\t\t");
        printf("\n*********************************");
        printf("\n\n");
}
