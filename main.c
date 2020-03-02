/**
 *das Programm rechnet den Tag des Jahres aus für das jeweilige eingegebene Datum
 *
 *Author: Kerem Koc und Muhammed Yarar
 *Datum: 11.02.2020
 **/

#include <stdio.h>
#include <stdlib.h>
#include "timelib.h"

int main()
{
    struct date inputDate;
    inputDate.day = 0;
    inputDate.month = 0;
    inputDate.year = 0;

    input_date(&inputDate);

    printf("Tag des Jahres: %i\n", day_of_the_year(inputDate.day, inputDate.month, inputDate.year));
    return 0;
}
