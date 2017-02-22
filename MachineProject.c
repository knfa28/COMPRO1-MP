/*******************************************************************************
This is to certify that this project is my own work, based on my personal 
efforts in studying and applying the concepts learned. I have constructed the 
functions and their respective algorithms and corresponding code by myself. 
The program was run, tested, 
and debugged by my own efforts. I further certify that I have not copied in 
part or whole or otherwise plagiarized the work of 
other students and/or persons. 

                                          Kurt Neil F. Aquino, DLSU ID# 11337974 
*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef char strText[20];         
typedef strText arrFood[10];       /*array of fruits and vegetables*/     
typedef strText arrNutrient[8];    /*array of the list of nutrients*/

typedef float arrServing[11];      /*array of the serving sizes of the foods*/ 
typedef float arrNutrients[8];     /*array for the nutrients of the fruits*/

typedef int arrChoice[5];          /*array for the storage of the inputs*/
typedef float arrGrams[5];         /*of the user from the Meal Planner*/
typedef char arrYesNo[5];

/*checks if the user has already filled-up the required fields*/
int inputCheck(arrChoice aChoice, arrGrams aGrams)
{
	int nCtr,    /*counter variable*/
	    nCheck;  /*test variable*/
	
	/*gets the total of the values stored in the array*/	    
	for(nCtr = 0; nCtr < 4; nCtr++)
		nCheck += aChoice[nCtr] + aGrams[nCtr];
	
	if(nCheck == 0)   /*if there is no value (0), return 1. otherwise, 0*/
		return 1;
	else
		return 0;
}

/*checks if there is any value stored in an array*/
int arrCheck(arrNutrients aArray, int nNum)
{
	int nCtr,        /*counter variable*/
	    nCheck = 0;  /*test variable*/
	
	/*gets the total of the values stored in the array*/
	for(nCtr = 0; nCtr < nNum; nCtr++)
		nCheck += aArray[nCtr];
		
	if(nCheck == 0)   /*if there is no value (0) it returns 1 otherwise, 0*/
		return 1;
	else
		return 0;
}

/*displays a line*/
void displayLines(int nNum)
{
	int nCtr;	
	printf("\n");
	for(nCtr = 0; nCtr < nNum; nCtr++)
		printf("%c", 196);
}

/*displays spaces*/
void displaySpace(int nNum)
{
	int nCtr;
	for(nCtr = 0; nCtr < nNum; nCtr++)
		printf("\t");
}

/*displays a table of fruits and vegetables
and their corresponding nutrient values*/
void displayTable(arrFood aFood,
                  arrNutrient aNutrient,
                  arrNutrients aSpinach,
                  arrNutrients aRomaineLettuce,
				  arrNutrients aMustardGreen,
				  arrNutrients aCarrot,
				  arrNutrients aPotato,
				  arrNutrients aYam,
				  arrNutrients aAsparagus,
				  arrNutrients aBroccoli,
				  arrNutrients aMelon,
				  arrNutrients aStrawberry)
{
	int i, j;  /*counter variables*/

	/*displays selection header*/
	displayLines(143);
	displaySpace(8);
	printf("  MARKET SELECTION OF FRUITS AND VEGETABLES\n\n");
	displayLines(143);
	
	/*displays the table info*/	
	printf("\nFruits and Vegetables");	
	for(i = 0; i < 8; i++)      
		printf("%15s", aNutrient[i]);		   
	displayLines(143);

    /*displays the nutritient values of Spinach per 100 grams*/              
    printf("\n1. %-15s:", aFood[0]);  
    for (j = 0; j <= 7; j++)
    	printf("%15.2f", aSpinach[j] / 30 * 100); 
	displayLines(143);
	
	j = 0; /*resets the counter variable to zero*/
	
	/*displays the nutrient values of Romaine Lettuce per 100 grams*/                   
    printf("\n2. %-15s:", aFood[1]); 
    for (j = 0; j <= 7; j++)
        printf("%15.2f", aRomaineLettuce[j] / 47 * 100);
   	displayLines(143);

	j = 0; /*resets the counter variable to zero*/
	
	/*displays the nutritient values of Mustard Greens per 100 grams*/                                      
	printf("\n3. %-15s:", aFood[2]); 
    for (j = 0; j <= 7; j++)
        printf("%15.2f", aMustardGreen[j] / 56 * 100);            
    displayLines(143);
	
	j = 0; /*resets the counter variable to zero*/
	
	/*displays the nutrient values of Carrots per 100 grams*/                                              
	printf("\n4. %-15s:", aFood[3]); 
    for (j = 0; j <= 7; j++)
    	printf("%15.2f", aCarrot[j] / 61 * 100);
    displayLines(143);
	
	j = 0; /*resets the counter variable to zero*/
	
	/*displays the nutrient values of Potatoes per 100 grams*/                                       
    printf("\n5. %-15s:", aFood[4]); 
    for (j = 0; j <= 7; j++)
        printf("%15.2f", aPotato[j] / 138 * 100); 
	displayLines(143);

    j = 0; /*resets the counter variable to zero*/	
	
	/*displays the nutrient values of Yams per 100 grams*/                         
	printf("\n6. %-15s:", aFood[5]);  
    for (j = 0; j <= 7; j++)
        printf("%15.2f", aYam[j] / 68 * 100);
	displayLines(143);
	
	j = 0; /*resets the counter variable to zero*/
	
	/*displays the nutrient values of Asparagus per 100 grams*/                         
	printf("\n7. %-15s:", aFood[6]);  
    for (j = 0; j <= 7; j++)
    	printf("%15.2f", aAsparagus[j] / 64 * 100);
    displayLines(143);

	j = 0; /*resets the counter variable to zero*/
		
	/*displays the nutrient values of Broccoli per 100 grams*/                                        
	printf("\n8. %-15s:", aFood[7]);  
    for (j = 0; j <= 7; j++)
    	printf("%15.2f", aBroccoli[j] / 91 * 100);
 	displayLines(143);

	j = 0; /*resets the counter variable to zero*/
	
	/*displays the nutrient values of Melons per 100 grams*/                            
    printf("\n9. %-15s:", aFood[8]); 
	for (j = 0; j <= 7; j++)
        printf("%15.2f", aMelon[j] / 80 * 100);
    displayLines(143);
	
	j = 0; /*resets the counter variable to zero*/
	
	/*displays the nutrient values of Srawberries per 100 grams*/                            
	printf("\n10.%-15s:", aFood[9]);  
	for (j = 0; j <= 7; j++)
		printf("%15.2f", aStrawberry[j] / 72 * 100);
	displayLines(143);	
	
	printf("\n");
}

/*computes for the number of servings*/
float getServing(float fAmt, float fServing)
{
	float fServings;   /*stores the number of servings*/
	
	/*computes for the number of servings*/
	fServings = fAmt / fServing;	
	return fServings;  /*returns the number of servings*/
}

/*computes for the number of servings of a given amount food in grams*/
void computeServing(arrFood aFood, arrServing aServing)
{
	int nChoice; /*stores the selected option of the user*/
	float fAmt;  /*stores the given amount*/
	char cNull;   
	
	displayLines(60);
	printf("\n\t\t   SERVING CONVERSION\n");
	displayLines(60);
	
	/*displays the list of Fruits and Vegetables to be selected by the user*/
	printf("\nCompute servings for:\n"
	       "\n1. Spinach                      6. Yam\n"
		   "\n2. Romaine Lettuce              7. Asparagus\n"
	       "\n3. Mustard Greens               8. Broccoli\n"
	       "\n4. Carrot                       9. Melon\n"
	       "\n5. Potato                       10. Strawberry");
	displayLines(60);

    /*confirms whether input value is valid or not*/
	do
	{
		/*asks the user for input based on the selection*/
		printf("\n\nInput choice: ");
		scanf("%d%c", &nChoice, &cNull);
		if(nChoice < 1 || nChoice > 10)
		    /*displays error message*/
			printf("\nPlease enter a valid option");
	}while(nChoice < 1 || nChoice > 10);
	
	/*decrements the value of the input so
	that the value may be found in the array*/
	nChoice -= 1;
	
	/*displays the chosen food of the user*/
	printf("\nThe chosen food is %s\n", aFood[nChoice]); 
		
   /*confirms whether input value is valid or not*/
	do
	{
		/*asks the user how many grams does she want to compute for*/
		printf("\nCompute servings for how many grams: ");
		scanf("%f%c", &fAmt, &cNull);
		if(fAmt <= 0)
		    /*displays error message*/
			printf("\nPlease enter a valid amount in grams\n");
	}while(fAmt <= 0);
	
	/*displays the amount per serving*/
	printf("\n%.2f grams of %s is equivalent to %.2f serving(s)\n",
	       fAmt, aFood[nChoice], getServing(fAmt, aServing[nChoice]));	        
}

/*computes for the converted nutrient values
 a Fruit/Vegetable will have when cooked*/
float getCooked(float fGrams,
                float fServing,
                float fNutrient,
				float fNutriLost)
{
	float fNutrients;   /*stores the computed nutrient value*/	
	
	/*computes for the converted nutrient value*/
	fNutrients =  getServing(fGrams, fServing) * fNutrient * fNutriLost;	
	return fNutrients;  /*returns the computed nutrient value*/
}

/*computes for the converted nutrient values
 a Fruit/Vegetable will have when served raw*/
float getRaw(float fGrams,
             float fServing,
             float fNutrient)
{
	float fNutrients;   /*stores the computed nutrient value*/	
	
	/*computes for the converted nutrient value*/
	fNutrients =  getServing(fGrams, fServing) * fNutrient;	
	return fNutrients;  /*returns the computed nutrient value*/
}


/*computes for the total base nutrients of the selected foods*/
void getNutriBase(arrNutrients aSpinach,
        	 	  arrNutrients aRomaineLettuce,
		 		  arrNutrients aMustardGreen,
			  	  arrNutrients aCarrot,
			 	  arrNutrients aPotato,
			 	  arrNutrients aYam,
			 	  arrNutrients aAsparagus,
			 	  arrNutrients aBroccoli,
		 	 	  arrNutrients aMelon,
			 	  arrNutrients aStrawberry,
				  arrChoice aChoice,
				  arrGrams aGrams,
				  arrNutrients aTotalBase)
{
	int i, j;   /*counter variables*/
	
	/*determines which Fruit/Vegetable the user has picked*/
	for(i = 0; i < 4; i++)
    {
    	switch(aChoice[i])
		{
			case 0: /*calculates the base nutrient values
			          of the selcted Fruit/Vegetable*/
					for(j = 1; j <= 7; j++)
						/*stores the nutrient values into an array*/
						aTotalBase[j] += getRaw(aGrams[i],
							                	aSpinach[0],
												aSpinach[j]);	 
					break;					
			case 1: for(j = 1; j <= 7; j++)
						aTotalBase[j] += getRaw(aGrams[i],
							                	aRomaineLettuce[0],
												aRomaineLettuce[j]);
					break;					
			case 2: for(j = 1; j <= 7; j++)
						aTotalBase[j] += getRaw(aGrams[i],
							                	aMustardGreen[0],
												aMustardGreen[j]);	
					break; 					
			case 3: for(j = 1; j <= 7; j++)
						aTotalBase[j] += getRaw(aGrams[i],
							                	aCarrot[0],
												aCarrot[j]);	
					break;	
			case 4: for(j = 1; j <= 7; j++)
						aTotalBase[j] += getRaw(aGrams[i],
							               		aPotato[0],
												aPotato[j]);	
					break;					
			case 5: for(j = 1; j <= 7; j++)
						aTotalBase[j] += getRaw(aGrams[i],
							                	aYam[0],
												aYam[j]);;	
					break;					
       		case 6: for(j = 1; j <= 7; j++)
						aTotalBase[j] += getRaw(aGrams[i],
							                	aAsparagus[0],
												aAsparagus[j]);
					break;					
			case 7: for(j = 1; j <= 7; j++)
						aTotalBase[j] += getRaw(aGrams[i],
							                	aBroccoli[0],
												aBroccoli[j]);	
					break;					
			case 8: for(j = 1; j <= 7; j++)
						aTotalBase[j] += getRaw(aGrams[i],
							                	aMelon[0],
												aMelon[j]);	
					break;					
			case 9: for(j = 1; j <= 7; j++)
						aTotalBase[j] += getRaw(aGrams[i],
							                	aStrawberry[0],
												aStrawberry[j]);	
					break;
		}
    }
}

/*asks the user for 4 food items from the selection that she will
use for today's meals and their corresponding amount in grams*/
void getPlan(arrNutrient aNutrient,
             arrNutrients aSpinach,
        	 arrNutrients aRomaineLettuce,
		 	 arrNutrients aMustardGreen,
			 arrNutrients aCarrot,
			 arrNutrients aPotato,
			 arrNutrients aYam,
			 arrNutrients aAsparagus,
			 arrNutrients aBroccoli,
		 	 arrNutrients aMelon,
			 arrNutrients aStrawberry,
			 arrFood aFood,
			 arrChoice aChoice, 
			 arrGrams aGrams,
			 arrYesNo aYesNo,
			 arrNutrients aTotalBase,
			 float *fTotalGrams)
{
	int i, j,     /*counter variables*/
	    nChoice;  /*stores the selected option of the user*/
	float fGrams; /*stores the input amount in grams*/
	char cYesNo,  /*stores the selected option of the user*/
	     cNull;   /*stores the value of the new line character*/
	
	/*array of ordinals to be used in the Meal Panner*/
	strText arrOrdinal[5] = {"first","second","third","fourth"};
	
	/*displays a table of fruits and vegetables
    and their corresponding nutrient values*/
	displayTable(aFood, aNutrient, aSpinach, aRomaineLettuce,
	             aMustardGreen, aCarrot, aPotato, aYam, aAsparagus,
				 aBroccoli, aMelon,aStrawberry);		
	
	/*displays selection header*/
	displaySpace(8);
	printf("MEAL PLANNER\n");
	displayLines(143);
	
	/*asks the user for input 4 times*/ 
	for(i = 0; i < 4; i++)
	{	
		/*confirms whether input value is valid or not*/
		do
		{
			/*asks the user for input based on the selection*/
			printf("\nChoose your %s food for today's meal: ", arrOrdinal[i]);
			scanf("%d%c", &nChoice, &cNull);
			if(nChoice < 1 || nChoice > 10)
			    /*displays error message*/
				printf("\nPlease input a valid option\n");
		}while(nChoice < 1 || nChoice > 10);
		
		/*decrements the value of the input so
	    that the value may be found in the array*/
		nChoice -= 1;
		
		/*stores the input of the user into an array*/
        aChoice[i]	= nChoice;
        
        /*confirms whether input value is valid or not*/
		do
		{
			/*asks the user if she will cook the selected fruit or vegetable*/
			printf("\nWill you cook the %s [Y/N]? ", aFood[nChoice]);
			scanf("%c", &aYesNo[i]);
			if(aYesNo[i] != 'Y' && aYesNo[i] != 'y' &&
			   aYesNo[i] != 'N' && aYesNo[i] != 'n')
			    /*displays error message*/
				printf("\nPlease input either Y or N only\n");
		}while(aYesNo[i]  != 'Y' && aYesNo[i] != 'y' &&
			   aYesNo[i]  != 'N' && aYesNo[i] != 'n');

		/*asks the user for the amount of the
		selected food she would like to serve*/
		if(aYesNo[i]  == 'Y' || aYesNo[i]  == 'y')
		{
			do
			{
				printf("\nHow much %s (in grams) will you cook? ", aFood[nChoice]);
				scanf("%f%c", &aGrams[i], &cNull);
				if(aGrams[i] <= 0)
		    		/*displays error message*/
					printf("\nPlease enter a valid amount in grams\n");
			}while(aGrams[i] <= 0);		
		}	
		else
		{
			do
			{
				printf("\nHow much %s (in grams) will you eat raw? ", aFood[nChoice]);
				scanf("%f%c", &aGrams[i], &cNull);
 				if(aGrams[i] <= 0)
		    		/*displays error message*/
					printf("\nPlease enter a valid amount in grams\n");
			}while(aGrams[i] <= 0);		
		}	 			
 		printf("\n");	
    }
    system("cls");
    
    /*displays a notification that the user has
	 successfully filled all of the required fields*/
    displayLines(60);
   	printf("\n\tYou have successfully planned today's meal");
   	displayLines(60);
   	
	/*stores the total amount of grams the user has indicated*/
    for(j = 0; j < 4; j++)
		*fTotalGrams += aGrams[j];
		   
	/*computes for the total base nutrients of the selected foods*/
   	getNutriBase(aSpinach, aRomaineLettuce, aMustardGreen, aCarrot, aPotato,
	             aYam, aAsparagus, aBroccoli, aMelon, aStrawberry, aChoice,
				 aGrams, aTotalBase);
}

/*computes for the total nutrients lost*/
void getNutriLost(arrNutrients aTotal,
                  arrNutrients aTotalBase,
			      arrNutrients aTotalLost)
{
	int nCtr;   /*counter variable*/
	
	/*computes for the total nutrients lost by subtracting
	  the total nutrients of the selected cooked foods from
	  the total base nutrients of the selected foods*/
	for(nCtr = 1; nCtr < 8; nCtr++)
		aTotalLost[nCtr] += aTotalBase[nCtr] - aTotal[nCtr];
}

/*computes for the total calculated and converted nutrient values of
 the fruits and vegetables the user has indicated in the Meal Planner*/ 
void computeNutrients(arrFood aFood,
                      arrNutrient aNutrient,
					  arrNutrients aSpinach,
        	 		  arrNutrients aRomaineLettuce,
		 			  arrNutrients aMustardGreen,
					  arrNutrients aCarrot,
			 	      arrNutrients aPotato,
			 		  arrNutrients aYam,
			 		  arrNutrients aAsparagus,
			 		  arrNutrients aBroccoli,
		 	 		  arrNutrients aMelon,
			 		  arrNutrients aStrawberry,
					  arrChoice aChoice,
					  arrGrams aGrams,
					  arrYesNo aYesNo,
					  arrNutrients aTotal,
					  arrNutrients aTotalBase,
					  arrNutrients aTotalLost,
					  float fTotalGrams)
{
	int i, j, k, l;  /*counter variables*/

	/*array of the amount of nutrients lost when
	the selected Fruit/Vegetable is cooked*/                
    float aVegetableGreens[8]     = {1,0.90,0.90,0.90,0.95,0.65,0.60,1.0};
    float aRootVegetables[8]      = {1,0.90,0.90,0.90,0.90,0.70,0.70,1.0};
    float aOthers[8]              = {1,0.90,0.90,0.90,0.90,0.70,0.70,0.70};
			 	
 	/*displays the selection header*/
 	displayLines(146);
 	displaySpace(9);
 	printf("TOTAL NUTRIENTS OF THE PLANNED MEALS\n");
 	displayLines(146);
				     
    /*displays the table information*/
	printf("\n                  ");
	for(i = 0; i < 8; i++)      
		printf("%16s", aNutrient[i]);
	displayLines(146);
    
    /*displays the selected Fruits/Vegetables and their corresponding
	nutrient values based on the selected mode of preparation*/ 
    for(j = 0; j < 4; j++)
    {
    	switch(aChoice[j])
		{
			case 0: if(aYesNo[j] ==  'Y' || aYesNo[j] == 'y')
					{
						/*if the selected Fruit/Vegetable is cooked, it will
						 then compute for the converted nutrient values*/
					    printf("\n(cooked) %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
                        for(k = 1; k <=7; k++)
						{
							/*displays the converted nutrient values*/
	    				    printf("%8.2f\t", getCooked(aGrams[j],
							                            aSpinach[0],
									                    aSpinach[k],
							                            aVegetableGreens[k]));
					        /*stores the nurient values into an array*/
							aTotal[k] += getCooked(aGrams[j],
							                       aSpinach[0],
							                       aSpinach[k],
												   aVegetableGreens[k]);
						} 
					}
					else
					{
						/*if the selected Fruit/Vegetable is prepared as
						 is, it will then only compute for the amount*/
						printf("\n (raw)   %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    	     			for(k = 1; k <=7; k++)
						 {
						 	/*displays the converted nutrient values*/
   	    					printf("%8.2f\t", getRaw(aGrams[j],
							                         aSpinach[0],
								                     aSpinach[k]));
							/*stores the nutrient values into an array*/
							aTotal[k] += getRaw(aGrams[j],
							                    aSpinach[0],
												aSpinach[k]);	
						 }
					}			
					break;					
			case 1: if(aYesNo[j] == 'Y' || aYesNo[j] == 'y')
					{
						printf("\n(cooked) %-15s%8.2f\t",
						aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
	    				    printf("%8.2f\t", getCooked(aGrams[j],
							                            aRomaineLettuce[0],
									                    aRomaineLettuce[k],
									                    aVegetableGreens[k]));
							aTotal[k] += getCooked(aGrams[j],
							                       aRomaineLettuce[0],
												   aRomaineLettuce[k],
												   aVegetableGreens[k]);
						}
					}
					else
					{
						printf("\n (raw)   %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
   	    					printf("%8.2f\t", getRaw(aGrams[j],
							                         aRomaineLettuce[0],
								                     aRomaineLettuce[k]));
							aTotal[k] += getRaw(aGrams[j],
							                    aRomaineLettuce[0],
												aRomaineLettuce[k]);
						}
					}
					break;					
			case 2: if(aYesNo[j] == 'Y' || aYesNo[j] == 'y')
					{
						printf("\n(cooked) %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
	    				    printf("%8.2f\t", getCooked(aGrams[j],
							                            aMustardGreen[0],
									                    aMustardGreen[k],
									                    aVegetableGreens[k]));
							aTotal[k] += getCooked(aGrams[j],
							                       aMustardGreen[0],
												   aMustardGreen[k],
												   aVegetableGreens[k]);
						}
					}
					else
					{
						printf("\n (raw)   %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    			        for(k = 1; k <=7; k++)
						{
   	    					printf("%8.2f\t", getRaw(aGrams[j],
							                         aMustardGreen[0],
								                     aSpinach[k]));
							aTotal[k] += getRaw(aGrams[j],
							                    aMustardGreen[0],
												aMustardGreen[k]);	
						}
					}
					break; 					
			case 3: if(aYesNo[j] == 'Y' || aYesNo[j] == 'y')
					{
						printf("\n(cooked) %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
	    				    printf("%8.2f\t", getCooked(aGrams[j],
							                            aCarrot[0],
									                    aCarrot[k],
									                    aRootVegetables[k]));
							aTotal[k] += getCooked(aGrams[j],
							                       aCarrot[0],
												   aCarrot[k],
												   aRootVegetables[k]);
						}
					}
					else
					{
						printf("\n (raw)   %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
   	    					printf("%8.2f\t", getRaw(aGrams[j],
							                         aCarrot[0],
													 aCarrot[k]));
							aTotal[k] += getRaw(aGrams[j],
							                    aCarrot[0],
												aCarrot[k]);	
						}
					}
					break;	
			case 4: if(aYesNo[j] == 'Y' || aYesNo[j] == 'y')
					{
						printf("\n(cooked) %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
	    				    printf("%8.2f\t", getCooked(aGrams[j],
							                            aPotato[0],
														aPotato[k],
														aRootVegetables[k]));
							aTotal[k] += getCooked(aGrams[j],
							                       aPotato[0],
												   aPotato[k],
												   aRootVegetables[k]);
						}
					}
					else
					{
						printf("\n (raw)   %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
   	    					printf("%8.2f\t", getRaw(aGrams[j],
							                         aPotato[0],
													 aPotato[j]));
							aTotal[k] += getRaw(aGrams[j],
							                    aPotato[0],
												aPotato[k]);	
						}
					}
					break;					
			case 5: if(aYesNo[j] == 'Y' || aYesNo[j] == 'y')
					{
						printf("\n(cooked) %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
	    				    printf("%8.2f\t",  getCooked(aGrams[j],
							                             aYam[0],
														 aYam[k],
														 aRootVegetables[k]));
							aTotal[k] += getCooked(aGrams[j],
							                       aYam[0],
												   aYam[k],
												   aRootVegetables[k]);
						}
					}
					else
					{
						printf("\n (raw)   %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
   	    					printf("%8.2f\t", getRaw(aGrams[j],
							                         aYam[0],
													 aYam[k]));
							aTotal[k] += getRaw(aGrams[j],
							                    aYam[0],
												aYam[k]);;	
						}
					}
					break;					
       		case 6: if(aYesNo[j] == 'Y' || aYesNo[j] == 'y')
					{
						printf("\n(cooked) %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
	    				    printf("%8.2f\t", getCooked(aGrams[i],
							                            aAsparagus[0],
														aAsparagus[k],
														aOthers[k]));
							aTotal[k] += getCooked(aGrams[j],
							                       aAsparagus[0],
												   aAsparagus[k],
												   aOthers[k]);
						}
					}
					else
					{
						printf("\n (raw)   %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
	   	 	        	for(k = 1; k <=7; k++)
						{
   	    					printf("%8.2f\t", getRaw(aGrams[j],
							                         aAsparagus[0],
													 aAsparagus[k]));
							aTotal[k] += getRaw(aGrams[j],
							                    aAsparagus[0],
												aAsparagus[k]);
						}
					}
					break;					
			case 7: if(aYesNo[j] == 'Y' || aYesNo[j] == 'y')
					{
						printf("\n(cooked) %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
	    				    printf("%8.2f\t", getCooked(aGrams[j],
							                            aBroccoli[0],
														aBroccoli[k],
														aOthers[k]));
							aTotal[k] += getCooked(aGrams[j],
							                       aBroccoli[0],
												   aBroccoli[k],
												   aOthers[k]);
						}
					}
					else
					{
						printf("\n (raw)   %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
   	    					printf("%8.2f\t", getRaw(aGrams[j],
							                         aBroccoli[0],
													 aBroccoli[k]));
							aTotal[k] += getRaw(aGrams[j],
							                    aBroccoli[0],
												aBroccoli[k]);	
						}
					}
					break;					
			case 8: if(aYesNo[j] == 'Y' || aYesNo[j] == 'y')
					{
						printf("\n(cooked) %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);;
    		        	for(k = 1; k <=7; k++)
						{
	    				    printf("%8.2f\t", getCooked(aGrams[j],
							                            aMelon[0],
														aMelon[k],
														aOthers[k]));
							aTotal[k] += getCooked(aGrams[j],
							                       aMelon[0],
												   aMelon[k],
												   aOthers[k]);
						}
					}
					else
					{
						printf("\n (raw)   %-15s%8.2f\t",
						       aFood[aChoice[j]], aGrams[j]);
    		        	for(k = 1; k <=7; k++)
						{
   	    					printf("%8.2f\t", getRaw(aGrams[j],
							                         aMelon[0],
													 aMelon[k]));
							aTotal[k] += getRaw(aGrams[j],
							                    aMelon[0],
												aMelon[k]);	
						}
					}
					break;					
			case 9: if(aYesNo[j] == 'Y' || aYesNo[j] == 'y')
					 {
						 printf("\n(cooked) %-15s%8.2f\t",
						        aFood[aChoice[j]], aGrams[j]);
    		        	 for(k = 1; k <=7; k++)
						 {
	    				    printf("%8.2f\t", getCooked(aGrams[j],
							                            aStrawberry[0],
														aStrawberry[k],
														aOthers[k]));
							aTotal[k] += getCooked(aGrams[j],
							                       aStrawberry[0],
												   aStrawberry[k],
												   aOthers[k]);
						 }
					 }
					 else
					 {
						 printf("\n (raw)   %-15s%8.2f\t",
					            aFood[aChoice[j]], aGrams[j]);
    		        	 for(k = 1; k <=7; k++)
						 {
   	    					printf("%8.2f\t", getRaw(aGrams[j],
							                  aStrawberry[0],
											  aStrawberry[k]));
							aTotal[k] += getRaw(aGrams[j],
							                    aStrawberry[0],
												aStrawberry[k]);	
						 }
					 }
					 break;
		}
		displayLines(146);
    }
    /*displays the total amount of grams and nutrients
      of the selected Fruits and Vegetables*/
	printf("\nTotal Grams & Nutrients:%8.2f\t", fTotalGrams);
	for(l = 1; l <= 7; l++)
		printf("%8.2f\t", aTotal[l]);
	displayLines(146); 
	printf("\n");
	
	/*computes for the total nutrients lost*/
	if(arrCheck(aTotalLost, 9))
		getNutriLost(aTotal, aTotalBase, aTotalLost);		
}

/*displays messages saying that you should
 lessen the intake of a particular nutrient*/
void displayLess(int nNum)
{
	switch(nNum)
	{
		/*message indicating that the intake of Iron should be decreased*/
		case 0: printf("\n   If you take more iron than you need (either from"
		               "\nan extra iron supplement or from your prenatal"
					   "\nvitamin), it can cause your blood levels of iron to"
					   "\nrise too high, possibly causing problems for you and"
					   "your baby.\n"); break;
		/*message indicating that the intake of Zinc should be decreased*/
		case 1: printf("\n   Too much zinccan suppress your body's immunity."
		               "\nRegular ingestion of more than 50 mg of zinc can also"
					   "\ncause interference with the absorption of other"
					   "\nutrients, causing secondary deficiencies.\n"); break;
		/*message indicating that the intake of Calcium should be decreased*/
		case 2: printf("\n   Too much calcium can cause constipation, increase"
		               "\nyour risk of kidney stones, and hinder your body's"
					   "\nabsorption of iron and zinc from foods.\n"); break;
		/*message indicating that the intake of Vitamin A should be decreased*/
		case 3: printf("\n   It's important during pregnancy not to get too"
		               "\nmuch of vitamin A, which in high doses can cause"
					   "\nbirth defects and liver toxicity.\n"); break;
		/*message indicating that the intake of Folic acid should be decreased*/
		case 4: printf("\n   Consuming too much folic acid can hide signs that"
		               "\na person is lacking vitamin B12, which can cause"
					   "\nnerve damage.\n"); break;
		/*message indicating that the intake of Vitamin C should be decreased*/
		case 5: printf("\n   Too much vitamin C can cause severe"
		               "\ngastrointestinal discomfort, cramping"
					   "\nand diarrhea.\n"); break;
		/*message indicating that the intake of Vitamin E should be decreased*/
		case 6: printf("\n   Consuming high levels of Vitamin E will increase"
		               "\nthe chances of your child to have birth defects." 
                       "\nChildren born to mothers who ate diets high in"
					   "nVitamin E were more likely to have congenital heart"
					   "\ndefects.\n"); break;
	}
}

/*displays messages saying that you should
 increase the intake of a particular nutrient*/
void displayMore(int nNum)
{
	switch(nNum)
	{	
		/*message indicating that the intake of Iron should be increased*/
		case 0: printf("\n   Iron helps prevent premature delivery, and wards"
		               "\nof anemia as well, so it is advisable to take in the"
		               "\nthe recommended amounts of Iron.\n"); break;
		/*message indicating that the intake of Zinc should be increased*/
		case 1: printf("\n   Include foods with good amounts of zinc for it is"
		               "\ngreat for the increase of brain development and it is"
					   "\nnecessary to grow and repair cells, and produce"
					   "\nenergy.\n"); break;
		/*message indicating that the intake of Calcium should be increased*/
		case 2: printf("\n   Calcium builds bones and teeth. Your growing baby"
		               "\ntakes the calcium she needs from your body, so to"
					   "\nkeep your bones and teeth healthy, you need to get"
					   "\nenough to replace that amount.\n"); break;
		/*message indicating that the intake of Vitamin A should be increased*/
		case 3: printf("\n   Vitamin A is important for cell growth, eye"
		               "\ndevelopment, healthy skin and mucous membranes,"
					   "\ninfection resistance, bone growth, and fat metabolism"
					   ".\nSo it is advised to include foods high in vitamin A"
		               "\nto your diet.\n"); break;
		/*message indicating that the intake of Folic sacid hould be increased*/
		case 4: printf("\n   Folic acid helps protect against spinal cord birth"
		               "\ndefects during the first 30 days of pregnancy, helps"
					   "\nprevent early miscarriage and premature delivery.It"
					   "\nalso prevents anemia, so it is advisable to take in"
					   "\njust the right amounts, especially during your first" 
					   "\nthree months of pregnancy.\n"); break;
		/*message indicating that the intake of Vitamin C should be increased*/
		case 5: printf("\n   Include foods with high Vitamin C for it makes it"
		               "\neasier for your body to absorb iron from plant foods;"
					   "\nbuilds strong bones and teeth; boosts immunity; keeps"
					   "\nblood vessels strong and red blood cells healthy.\n");
				break;
		/*message indicating that the intake of Vitamin E should be increased*/
		case 6: printf("\n   Vitamin E is necessary for the structural and"
		               "\nfunctional maintenance of skeletal, cardiac, and"
					   "\nsmooth muscle. It also assists in the formation of"
					   "\nred blood cells and it has a positive effect in your"
					   "\nimmunity;so it is recommended to take in good amounts"
					   "\nof food which has vitamin E.\n"); break;
	}
}

/*computes if the recommended quantity of minerals
and vitamins are met, exceeded, or lacking*/
void computeFeedback(arrFood aFood,
                     arrNutrient aNutrient,
                     arrServing aServing,
                     arrChoice aChoice,
                     arrGrams aGrams,
					 arrYesNo aYesNo,
					 arrNutrients aTotal,
					 arrNutrients aTotalLost)
{
	int i, j, k, l, m, n;   /*counter variables*/
	
	/*array of the table information*/
	strText arrInfo[3]     = {"Quantity","Servings"};
	strText arrInfo2[3]    = {"Total","Indicator"};
	strText arrRemarks[4]  = {"Too much","Lacking","Good"};
	
	/*array of the upper and lower tolerable limits of the nutrients*/
	float arrUpperLimit[8] = {20,25,1500,3000,1000,2000,1000};
	float arrLowerLimit[8] = {17,15,300,2500,600,70,15};
	
	/*initial values of the results*/
	int arrResults[8] = {0,0,0,0,0,0,0};
	
	/*displays selection header*/
	displayLines(87);
	printf("\n\t\t\t\t       FEEDBACK\n");
	displayLines(87);

	printf("\n\nYou have chosen to prepare the following food for the day:\n");
	
	/*displays table information*/
	displayLines(50);
	printf("\n          Food");
	displaySpace(2);
	for(i = 0; i < 2; i++)
		printf("%12s", arrInfo[i]);
	displayLines(50);
	
	/*displays the list of the selected food, their amounts, and serving sizes*/
	for(j = 0; j < 4; j++)
	{
		if(aYesNo[j] == 'Y' || aYesNo[j] == 'y')
			printf("\n(cooked) %-15s%11.2f%11.2f",
			       aFood[aChoice[j]], aGrams[j],
				   getServing(aGrams[j],aServing[aChoice[j]]));
		else
			printf("\n (raw)   %-15s%11.2f%11.2f",
			       aFood[aChoice[j]], aGrams[j],
			       getServing(aGrams[j], aServing[aChoice[j]]));
		displayLines(50);
	}
	
	printf("\n\n    Though cooking fruits vegetables may make them easier to"
	       "\ndigest and some nutrients easier to be absorbed by the body,"
		   "\nthe following amount of nutrients were lost based on your"
		   "\nmode of preparation:\n");
	
	/*displays table information*/	   	   
	displayLines(27);
	printf("\n         Total Lost");
	displayLines(27);
	
	/*displays all of the nutrients lost from the mode of preparation*/
	for(k = 1; k < 8; k++)
	{
		printf("\n%-15s%10.2f", aNutrient[k], aTotalLost[k]);
		displayLines(27);
	}
	
	printf("\n\nThis results to the following nutritional intake:\n");
	
	/*displays table information*/
	displayLines(42);
	printf("\n\t\t     ");
	for(l = 0; l < 2; l++)
		printf("%-10s", arrInfo2[l]);
	displayLines(42);

	/*displays all of the nutritional intakes and their corresponding remarks*/
	for(m = 1; m < 8; m++)
	{
		/*if the nutrient is over the upper tolerable limit,
		 it displays "Too much", and returns 1 to the results*/
		if(aTotal[m] > arrUpperLimit[m-1])
		{
			printf("\n%-15s%11.2f\t%-10s",
			       aNutrient[m], aTotal[m], arrRemarks[0]);
			arrResults[m-1] += 1;
		}
		/*if the nutrient is lower than the recommended dosage,
		 it displays "Lacking", and returns 0 to the results*/
		else if(aTotal[m] < arrLowerLimit[m-1])
		{
			printf("\n%-15s%11.2f\t%-10s",
			       aNutrient[m], aTotal[m], arrRemarks[1]);
			arrResults[m-1] += 0;
	    }
		/*otherwise, it displays "Good"*/
		else
			printf("\n%-15s%11.2f\t%-10s",
			       aNutrient[m], aTotal[m], arrRemarks[2]);
		displayLines(42);
	}	
	printf("\n");
	
	/*displays the warning messages in accordance with the results*/
	for(n = 0; n < 7; n++)
	{
		/*displays a message saying that you should
		 lessen the intake of a particular nutrient*/
		if(arrResults[n] == 1)
			displayLess(n);
		/*displays a message saying that you should
		 increase the intake of a particular nutrient*/		
		else if(arrResults[n] == 0)
			displayMore(n);
	}				
}

/*resets all the stored, computed, and altered variables/arrays*/
void NewDay(arrChoice aChoice,
			arrGrams aGrams,
			arrYesNo aYesNo,
			arrNutrients aTotal,
			arrNutrients aTotalBase,
			arrNutrients aTotalLost,
			float *fTotalGrams)
{
	int nCtr;  /*counter variable*/
	
	/*resets the inputs of the user*/
	for(nCtr = 0; nCtr < 4; nCtr++)
	{
	    aChoice[nCtr] = 0;
	    aGrams[nCtr]  = 0;
	    aYesNo[nCtr]  = '\0';    
	}
	
	nCtr = 0;   /*resets the counter variable to zero*/
	
	/*resets the total amount of the values of the Minerals and Vitamins*/
	for(nCtr = 0;nCtr < 9; nCtr++)
	{
	    aTotal[nCtr]     = 0;
	    aTotalBase[nCtr] = 0;
	    aTotalLost[nCtr] = 0;
	}
	
	/*resets the total amount of grams*/ 
	*fTotalGrams = 0;
	
	/*displays a notification that the fields has been reset*/	
	displayLines(60);
	printf("\n\t\tYour inputs has been reset");
	displayLines(60);
}

int main()
{
	int nChoice;              /*stores user input*/	    
	float fTotalGrams = 0;    /*initial value of the total amount of grams*/
	
	/*array of the list of Fruits and Vegetables*/
    arrFood aFood = {"Spinach","Romaine Lettuce","Mustard Greens",
	                 "Carrot","Potato","Yam","Asparagus","Broccoli",
					 "Melon","Strawberry"};
	
	/*aray of the list of Minerals and Vitamins*/				 
	arrNutrient aNutrient = {"Grams(g)","Iron(mg)","Zinc(mg)",
	                         "Calcium(mg)","Vit. A(IU)","Folic Acid(mcg)",
							 "Vit. C(mg)","Vit. E(mg)"};

	/*array of the initial serving sizes of the Fruits and Vegetables*/
	arrServing aServing           = {30,47,56,61,138,68,64,91,80,72};
	                         
	/*array of Fruits and Vegetables and their corresponding nutrient values*/                
	arrNutrients aSpinach         = {30,0.81,0.16,30,2813,58,8.4,0.61};
	arrNutrients aRomaineLettuce  = {47,0.46,0.11,16,4094,64,1.9,0.06};
	arrNutrients aMustardGreen    = {56,0.82,0.11,122,5880,105,17.7,1.13};
	arrNutrients aCarrot          = {61,0.18,0.15,20,10191,12,3.6,0.40};
	arrNutrients aPotato          = {138,0.88,0.48,14,14,52,17.4,0.06};
	arrNutrients aYam             = {68,0.35,0.14,10,83,11,8.2,0.23};
	arrNutrients aAsparagus       = {64,1.37,0.35,15,484,33,3.6,0.72};
	arrNutrients aBroccoli        = {91,0.66,0.37,43,567,57,81.2,0.71};
	arrNutrients aMelon           = {80,0.17,0.14,7,2706,17,29.4,0.04};
	arrNutrients aStrawberry      = {72,0.30,0.10,12,9,17,42.3,0.21};
	
	/*stores the inputs of the user from the Meal Planner*/
	arrChoice aChoice = {0,0,0,0}; 
	arrGrams aGrams   = {0,0,0,0};               	
	arrYesNo aYesNo	  = {'\0','\0','\0','\0'};
	
	/*initial values of the total, base, and the nutrients lost of the
	 Fruits and Vegetables the user has selected in the Meal Planner*/
	arrNutrients aTotal       = {0,0,0,0,0,0,0,0};
	arrNutrients aTotalBase   = {0,0,0,0,0,0,0,0};
	arrNutrients aTotalLost   = {0,0,0,0,0,0,0,0};
                 
    do
    {
    	/*displays the main menu*/
    	displayLines(60);
        printf("\n\t\t\t MAIN MENU\n");
        displayLines(60);
    	printf("\n1. Preview Market Selection\n"
               "\n2. Compute number of servings from amount of food\n"
               "\n3. Plan Today's Meal Preparation\n"
               "\n4. Compute Total Nutrients for planned preparation of meals\n"
               "\n5. Feedback\n"
               "\n6. New day\n"
               "\n7. Exit");
        displayLines(60);
        
		/*asks for user input*/ 
		do
		{
			printf("\n\nInput choice: ");
        	scanf("%d",&nChoice);
        	if(nChoice < 1 || nChoice > 7)
        		printf("\nPlease input a valid option"); 
		}while(nChoice < 1 || nChoice > 7);            
      
		/*calls for a function based on the user's input*/                         
        switch(nChoice)
        {
        	/*displays a table of fruits and vegetables
			and their corresponding nutrient values*/
            case 1: system("cls");
					displayTable(aFood, aNutrient, aSpinach, aRomaineLettuce,
					             aMustardGreen, aCarrot, aPotato, aYam,
								 aAsparagus, aBroccoli, aMelon, aStrawberry);
                    break;
            
			/*computes for the number of servings
			of a given amount food in grams*/                      
            case 2: system("cls");
					computeServing(aFood, aServing);
                    break;
            
			/*asks the user for 4 food items from the selection that she will
            use for today's meals and their corresponding amount in grams*/                    
            case 3: system("cls");
            		/*checks if the user has already planned today's meals*/
            		if(inputCheck(aChoice, aGrams))
						getPlan(aNutrient, aSpinach, aRomaineLettuce,
						        aMustardGreen, aCarrot, aPotato, aYam,
								aAsparagus, aBroccoli, aMelon, aStrawberry,
								aFood, aChoice, aGrams, aYesNo, aTotalBase,
								&fTotalGrams);
					/*displays warning message*/
					else
					{
						displayLines(60);
						printf("\n\t!!!You have already "
						       "planned today's meals!!!");
						displayLines(60);
					}
                    break;

            /*computes for the calculated nutrient values of the fruits and
			vegetables the user has indicated from the Meal Planner*/               
            case 4: system("cls");
					/*checks if the user has already planned today's meals*/
            		if(inputCheck(aChoice, aGrams))
            		{
            			displayLines(61);
            			printf("\n   !!!Please select your meals"
						       " first in the MEAL PLANNER!!!");
						displayLines(61);
					}
            		else
						computeNutrients(aFood, aNutrient, aSpinach,
						                 aRomaineLettuce, aMustardGreen,
										 aCarrot, aPotato, aYam, aAsparagus,
										 aBroccoli, aMelon, aStrawberry,
										 aChoice, aGrams, aYesNo, aTotal,
										 aTotalBase, aTotalLost, fTotalGrams);
                    break;  
                           
			/*computes if the recommended quantity of minerals
			and vitamins are met, exceeded, or lacking*/
            case 5: system("cls");
            		/*checks if the user has already planned today's meals*/
            		if(inputCheck(aChoice, aGrams))
            		{
    					displayLines(61);
            			printf("\n   !!!Please select your meals"
						       " first in the MEAL PLANNER!!!");
						displayLines(61);
					}
					else if(arrCheck(aTotalLost, 9))
					{
						displayLines(61);
            			printf("\n      !!!Please compute "
						       "for the nutrients first!!!");
						displayLines(61);
					}
            		else
						computeFeedback(aFood, aNutrient, aServing, aChoice,
						                aGrams, aYesNo, aTotal, aTotalLost);
                    break;
  
			/*resets all the stored, computed, and altered variables*/  
            case 6: system("cls");
					NewDay(aChoice, aGrams, aYesNo, aTotal,
					       aTotalBase, aTotalLost, &fTotalGrams);
                    break;
            
            /*exits the program*/
            case 7: system("cls");
    				displayLines(60);
        			printf("\n\t\t      !!!THANK YOU!!!");
        			displayLines(60);
			        break;
        }      
        printf("\n");
        system("pause");
        system("cls");
    } while (nChoice != 7);  
	return 0;                                       
}
