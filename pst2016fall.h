void pst()
{
    int year;
    char fal_sp;
    system("cls");
    printf("\nPlease enter the examination year: ");
    scanf("%d",&year);
    printf("The year you have entered is %d\n",year);
    switch (year)
    {
        case 2016:
        {
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
                    pst2016spring();
                break;

                default:
                    printf("\nSorry not available\n");
                break;
            }
        }
        break;
        case 2017:
        {
            printf("\nPress 'f' or 'F' for fall: ");
            printf("\nPress 's' or 'S' for spring: ");
            scanf(" %c",&fal_sp);
            system("cls");
            switch(fal_sp)
            {
                case 'f':
                case 'F':
                    pst2017fall();
                break;
                case 's':
                case 'S':
                   pst2017spring();
                break;

                default:
                    printf("\nSorry not available");
                break;
            }
        }
        break;
        default:
            printf("\nSorry not available");
        break;
    }
    return;
}

void pst2016fall()
{
    FILE *fpointer;
    fpointer = fopen("pst/pstfall2016f.txt","r");

    char qfall_2016[500];

    while(!feof(fpointer))
    {
        fgets(qfall_2016, 500, fpointer);
        printf(qfall_2016);

    }
    fclose(fpointer);
    return;
}

void pst2016spring()
{
    FILE *fpointer;
    fpointer = fopen("pst/pstfall2016s.txt","r");

    char qspring_2016[500];

    while(!feof(fpointer))
    {
        fgets(qspring_2016, 500, fpointer);
        printf(qspring_2016);

    }
    fclose(fpointer);
    return;
}

void pst2017fall()
{
    FILE *fpointer;
    fpointer = fopen("pst/pstfall2017f.txt","r");

    char qfall_2017[500];

    while(!feof(fpointer))
    {
        fgets(qfall_2017, 500, fpointer);
        printf(qfall_2017);

    }
    fclose(fpointer);
    return;
}

void pst2017spring()
{
    FILE *fpointer;
    fpointer = fopen("pst/pstfall2017s.txt","r");

    char qspring_2017[500];

    while(!feof(fpointer))
    {
        fgets(qspring_2017, 500, fpointer);
        printf(qspring_2017);

    }
    fclose(fpointer);
    return;
}
