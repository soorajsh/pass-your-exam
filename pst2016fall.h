
void pst()
{
    int year;
    char fal_sp;
    system("cls");
    printf("\nPlease enter the examination year: ");
    scanf("%d",&year);
    printf("The year you have entered is %d",year);
    switch (year)
    {
        case 2016:
            printf("\nPress 'f' or 'F' for fall: ");
            printf("\nPress 's' or 'S' for spring: ");
            scanf(" %c",&fal_sp);
            system("cls");
            switch(fal_sp)
            {
                case 'f':
                case 'F':
                    pst2016fall();
                break;
                case 's':
                case 'S':
                    printf("\nSorry will be available soon");
                break;

                default:
                    printf("\nSorry not available");
                break;
            }
    }
    return;
}

void pst2016fall()
{
    FILE *fpointer;
    fpointer = fopen("pstfall2016.txt","r");

    char qfall_2016[500];

    while(!feof(fpointer))
    {
        fgets(qfall_2016, 500, fpointer);
        printf(qfall_2016);

    }
    fclose(fpointer);
    return;
}
