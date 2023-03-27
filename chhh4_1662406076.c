
#include<stdio.h>
#include<string.h>

int main()
{
	char first_n[25][15], mid_n[25][15],  //string declaration
	     sur_n[25][15],
		 tele_ph[25][15],
		 full_n[25][25],                   // to concatenation and full name assigning
		 temp[25];                         // for swapping

	int i,j, n=3;                         // n=3 is no. of customer
                                         // or we can get from user how many customer

	/* Customer details initialization */

	printf(" Enter The customer details :\n ");
	fflush(stdout);

	for(i=0; i<n; i++)
	{
		scanf("%s %s %s %s",&first_n[i],&mid_n[i],&sur_n[i],&tele_ph[i]);
	}

	for(i=0; i<n; i++)
	{
		printf("Details : \n %s\t %s\t %s\t %s\n",first_n[i],mid_n[i],sur_n[i],tele_ph[i]);
		fflush(stdout);
	}

	/* Name Conversion (surname than Middle and first name Initial Alphabate) */

	for(i=0; i<n; i++)
	{
		 //copy surname into full_n by using string copy keyword
		// concatenate surname with space(" ").

		strcpy(full_n[i],sur_n[i]);
		strcat(full_n[i]," ");


		temp[0]=first_n[i][0];     //assign 0th element of first name array to temp array


		/* element at string first_n (0,0) (1st Alphabate)assign to the base adrees of temp[0],
	     temp[0] indicate base address.
		0 row and 0 column,
	    now we initialize temp[1] is null so it will access only element at temp[0] */


		temp[1]='\0';    //only temp[0] character available Temp[1] is null terminate string.

		strcat(full_n[i],temp);      // concatenation
		strcat(full_n[i]," ");      //concatenation

		temp[0]=mid_n[i][0];        // Assigning 0th element of middle name array
		temp[1]='\0';

		strcat(full_n[i],temp);
		strcat(full_n[i],".");

		printf("\nModified Name : \n%s",full_n[i]);  // Print string name after modification
		fflush(stdout);

		}

	/* SORTING NAME IN ALPHABTICAL ORDER / SWAPPING  */

	    for(i=0; i<n; i++)
		{
			for(j=1; j<n; j++)
			{
				if(strcmp (full_n[j-1] , full_n[j]) > 0 )//string comparing
				{

					strcpy (temp , full_n[j]);         //SAME AS SWAPPING TWO NO'S

					strcpy (full_n[j] , full_n[j-1]); //HERE IT IS STRING OR CH. ARRAY

					strcpy (full_n[j-1] , temp);

     /* SWAPPING TELEPHONE NO AS PER RESPECTIVE NAME */

					strcpy (temp , tele_ph[j]);

					strcpy (tele_ph[j] , tele_ph[j-1]);

					strcpy (tele_ph[j-1] , temp);
				}
			}
		}

	    /* PRINT THE CUSTOMER DERAILS IN SORTED FORM */

		printf("\n Alphabatic order list \n");
		fflush(stdout);

		for(i=0; i<n; i++)
		{
			printf("\n %s\t %s\t \n", full_n[i], tele_ph[i]);
			fflush(stdout);
		}
}

