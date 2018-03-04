#include <stdio.h>
#include <stdlib.h>
#include "pstquestion.h"

int main()
{
    int c1,c2,c3,c4;
    FILE *fptr;

    char filename[1], c;


    MENU:for(;;)
    {
    	system("cls");
    	printf("\nOLD QUESTIONS COLLECTIONS\n");
    	printf("\n1.Pokhara University ");
    	printf("\n2.Tribhuvan University ");
    	printf("\n3.Kathmandu University");
		printf("\n4.Exit ");
    	printf("\nEnter a number from 1-4:-");
    	scanf("%d",&c1);

    	switch (c1)
    	{
    		case 1:
    			FACULTY:for(;;)
    			{
    				system("cls");

    				printf("\nFaculty:");
    				printf("\n1.BE Information Technology");
    				printf("\n2.BE Civil \n3.BE Computer");
					printf("\n4.BE Software");
					printf("\n5.BE Electronics and Communication");
					printf("\n6.Back to previous Menu");
					printf("\n7.Exit");
    				printf("\nEnter a number from 1-7:-");
    				scanf("%d",&c2);
    				switch(c2)
    				{
    					case 1:
    							system("cls");
								printf("\nSemesters:");
								printf("\n1.first Semester");
								printf("\n2.Second Semester");
								printf("\n3.Third Semester");
								printf("\n4.fourth Semester");
								printf("\n5.fifth Semester");
								printf("\n6.Sixth Semester");
								printf("\n7.Seventh Semester");
								printf("\n8.Eighth Semester");
								printf("\n9.Back to previous menu");
								printf("\n10.Exit");
    							printf("\nEnter a number from 1-10:-");
    							scanf("%d",&c3);

    						SEMESTER:
							for(;;)
							{
								system("cls");

    							switch (c3)
    							{
                                        case 1:
                                        	for(;;)
                                            {
													printf("\nSubjects:");
													printf("\n1.Engineering Mathematics-I");
													printf("\n2.Engineering Physics-I");
													printf("\n3.Communication Technique");
													printf("\n4.Problem Solving Techniques");
													printf("\n5.Programming in C");
													printf("\n6.Basic Electrical Engineering");
													printf("\n7.Back to previous Menu");
													printf("\n8.Exit");
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
															break;
														case 3:
															system("cls");
															printf("\nCommunication Technique");

															break;
														case 4:
															system("cls");
															printf("Problem Solving Techniques\n");
																pst();
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

