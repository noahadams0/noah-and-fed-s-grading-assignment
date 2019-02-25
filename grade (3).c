#include <stdio.h>

int main()
{  
    float avg = 0;
    float sum = 0;
    float earned = 0;
    float possible;
     int i=0;
    
        printf("number of assignments: ");/*array declaration*/
            scanf("%i", &i);
    float num[i];  /*use a for loop to move across the array*/
    
         int x=0; /*i put the designation of this function here to allow for more memory*/
    
    for(x=0;x<i;x++){
        printf("points earned on assignment %d? \n",(x+1));/*here it is asking for the earned points of the assignment of %d*/
            scanf("%f", &earned);
        printf("points possible on assignment %d?\n", (x+1));/*here it asks for the possible points of the assigment of %d which is pulling a digit from an array*/ 
            scanf("%f", &possible);
        num[x] =earned/possible*100;/*it is finding the fraction version of the avg*/
        }
    for(x=0;x<i;x++){
        sum= sum+num[x];/*it is adding the sum and the fraction version of the avg to make a percentage avg*/
        }
        avg=sum/i;/*here it is pulling the average of the sum+num[x] and dividing it by the amount of the assignments*/
            printf("your average grade is: %f %%\n", avg);
                return 0;
}
/*helped by landonn hayford*/
