/** quiz03.c
* ===========================================================
*    Name: 
* Section:
* Purpose: Quiz 3 
* ===========================================================
*/

 #include <stdio.h>
 #include "quiz03functs.h"
 
 int main(void) {
    
    int riskValue = 0;
    int riskLevel = RISK_LEVEL_LOW;
    int numCrewMembers = 0;
    
    // user input
    printf("enter risk-value: ");
    scanf("%d", &riskValue);
    
    printf("enter number of crewmembers: ");
    scanf("%d", &numCrewMembers);
    
    // get risk level
    riskLevel = getRiskLevel(riskValue, numCrewMembers);
    
    // output Risk Level
    
}
   
