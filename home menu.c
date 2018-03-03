#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c1,c2,c3,c4;
    FILE *fptr;

    char filename[1], c;


    MENU:for(;;)
    {
    	system("cls");
    	printf("\nOLD QUESTIONS COLLECTIONS\n\n1.Pokhara University \n2.Tribhuvan University \n3.Kathmandu University \n4.Exit ");
    	printf("\nEnter a number from 1-4:-");
    	scanf("%d",&c1);

    	switch (c1)
    	{
    		case 1:
    			FACULTY:for(;;)
    			{
    				system("cls");

    				printf("\nFaculty:\n1.BE Information Technology \n2.BE Civil \n3.BE Computer \n4.BE Software \n5.BE Electronics and Communication \n6.Back to previous Menu \n7.Exit");
    				printf("\nEnter a number from 1-7:-");
    				scanf("%d",&c2);
    				switch(c2)
    				{
    					case 1:
    						SEMESTER:for(;;)
    						{
    						    system("cls");

								printf("\nSemesters: \n1.first Semester \n2.Second Semester \n3.Third Semester \n4.fourth Semester \n5.fifth Semester \n6.Sixth Semester \n7.Seventh Semester \n8.Eighth Semester \n9.Back to previous menu \n10.Exit");
    							printf("\nEnter a number from 1-10:-");
    							scanf("%d",&c3);
    							switch (c3)
    							{
                                        case 1:
                                            system("cls");
                                            for(;;)

                                            {
                                            	printf("\nSubjects:\n1.Engineering Mathematics-I \n2.Engineering Physics-I \n3.Communication Technique \n4.Problem Solving Techniques \n5.Programming in C \n6.Basic Electrical Engineering \n7.Back to previous Menu \n8.Exit");
                                            	printf("\nEnter a number from 1-8:-");
                                            	scanf("%d",&c4);
                                            	switch (c4)
                                            	{
                                            		case 1:
                                            		    system("cls");
                                            			printf("\nEngineering Mathematics-I \n");
                                            			break;
                                            		case 2:
                                            		    system("cls");
										    			printf("\nEngineering Physics-I");
    // Open file
    fptr = fopen("physics2015fall.txt", "r");
    if (fptr == NULL)
    {
        printf("\nCannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);
    													break;
    												case 3:
    												    system("cls");
    									    			printf("\nCommunication Technique");

    									    			fptr = fopen("physics2015fall.txt", "r");
    fptr = fopen("ct2015fall.txt", "r");
    if (fptr == NULL)
    {
        printf("\nCannot open file \n");
        exit(0);
    }

    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);

    													break;
    												case 4:
    												    system("cls");
    									    			printf("Problem Solving Techniques");
    													break;
    												case 5:
    												    system("cls");
    									   				printf("\nProgramming in C");
    													break;
    												case 6:
    												    system("cls");
                                        			    printf("\nBasic Electrical Engineering");
    													break;
    												case 7:
                                                        goto SEMESTER;
    													break;
    												case 8:
    									    			exit(0);
    												default:
    													printf("\nInvalid Input.");
												}
											}

										case 2:
										    printf("\nSorry!!\n\n\n\n\n\n\n");
    										break;
    									case 3:
    									    printf("\nSorry!!\n\n\n\n\n\n\n");
    										break;
    									case 4:
    									    printf("\nSorry!!\n\n\n\n\n\n\n");
    										break;
    									case 5:
    									    printf("\nSorry!!\n\n\n\n\n\n\n");
    										break;
    									case 6:
                                            printf("\nSorry!!\n\n\n\n\n\n\n");
    										break;
    									case 7:
    									    printf("\nSorry!!\n\n\n\n\n\n\n");
    										break;
    									case 8:
    									    printf("\nSorry!!\n\n\n\n\n\n\n");
    										break;
    									case 9:
    									    goto FACULTY;
    										break;
    									case 10:
    									    exit(0);
    									default:
    										printf("\nInvalid Input.");
								}
    						}
    					case 2:
    					    printf("\nSorry!!\n\n\n\n\n\n\n");
    						break;
    					case 3:
    					    printf("\nSorry!!\n\n\n\n\n\n\n");
    						break;
                        case 4:
    					    printf("\nSorry!!\n\n\n\n\n\n\n");
    						break;
                        case 5:
    					    printf("\nSorry!!\n\n\n\n\n\n\n");
    						break;
    					case 6:
                            system("cls");
    					    goto MENU;
                            break;
                        case 7:
    						exit(0);
    					default:
    						printf("\nInvalid Input.");

					}
    			}
    			break;
    		case 2:
    		    printf("\nSorry!!\n\n\n\n\n\n\n");
    			break;
    		case 3:
    		    printf("\nSorry!!\n\n\n\n\n\n\n");
    			break;
    		case 4:
    			exit(0);
    		default:
    			printf("\nInvalid Input.");


		}

	}

    return 0;
}

