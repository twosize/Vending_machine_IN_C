#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Currencey 5
#define MAX 20
int currenceys[Currencey] ={1,5,10,25,100};

struct Items{
    char* name;
    float price;
    char* id;
};

struct Items itemArray[9]=
{{"Pop-Tart", 1.63,"E7"},{"Coffee", 2.76, "B2"},
{"S&V Lays",1.49, "G4"},{"M&Ms", 1.72, "C3"},
{ "Purelife", 1.88, "T5"}, {"Cheetos", 1.59, "D9"}
,{"BBQ Lays",1.72,"K5"},{"Pepsi",2.29,"R6"},{"Granola",1.17,"Q8"}};


void changeCal(int money){
    
    int change = money;
    int temp[MAX] = {0};
    int i, k=0;
    for (i = Currencey - 1; i >= 0; i--) {
        while (change >= currenceys[i]) {
            change -= currenceys[i];
            
            temp[k++] = currenceys[i];
        }
    }
    
   int  dollar=0 ,quater=0,dime=0, nickel=0, penn=0;
    for (i = 0; i < k; i++) {
        if(temp[i]== 1){
            penn++;
        }else if(temp[i]== 5) 
        {
            nickel++;
        }
        else if(temp[i]== 10) 
        {
            dime++;
        }
        else if(temp[i]== 25) 
        {
            quater++;
        }
        else if(temp[i]== 100) 
        {
            dollar++;
        }
    }
   
    printf("Your change is %d dollar(s),%d quarter(s),%d dime(s),%d nickel(s),%d pennies(s)"
    , dollar,quater,dime,nickel,penn);
    return;
}
void Display(){
printf("\nAvailable Items:\n");

    printf("%s)%s\t",itemArray[0].id,itemArray[0].name);
    printf("%s)%s\t",itemArray[1].id,itemArray[1].name);
    printf("%s)%s\t\n",itemArray[2].id,itemArray[2].name);
    printf("%s)%s\t\t",itemArray[3].id,itemArray[3].name);
    printf("%s)%s\t",itemArray[4].id,itemArray[4].name);
    printf("%s)%s\t\n",itemArray[5].id,itemArray[5].name);
    printf("%s)%s\t",itemArray[6].id,itemArray[6].name);
    printf("%s)%s\t",itemArray[7].id,itemArray[7].name);
    printf("%s)%s\t\n",itemArray[8].id,itemArray[8].name);

}

int main(){
    
    char id[3];
    float balance=0.0;
    float  temp = 0.0;
    int balance2 ;
    int snack_index = -1, drink_index = -1;
    double total_price = 0.0;
    
    Display();
     while (snack_index == -1) {
        printf("\n>> Please select a snack:\n");
        scanf("%2s", id);
        for (int i = 0; i < 9; i++) {
            if (strcmp(id, itemArray[i].id) == 0 && itemArray[i].id!= itemArray[1].id
            && itemArray[i].id!= itemArray[4].id&& itemArray[i].id!= itemArray[7].id) {
                printf(">> Item: %s\n", itemArray[i].name);
                printf(">> Price: $%.2f\n", itemArray[i].price);
                printf("Are you sure? (Y/N): ");
                scanf("%1s", id);
                if (strcmp(id, "Y") == 0) {
                    snack_index = i;
                    total_price += itemArray[i].price;
                    break;
                }
            }
        }
        if (snack_index == -1&& strcmp(id, "N") == 0 ) {
            Display();
        }if(strcmp(id, itemArray[1].id) == 0 || strcmp(id, itemArray[4].id) == 0||strcmp(id, itemArray[7].id) == 0) {
            printf("Item choosen not a snack, choose again\n");
            Display();
        }
    }

    while (drink_index == -1) {
        printf("\n>> Please select a drink:\n");
        scanf("%2s", id);
        for (int i = 0; i < 9; i++) {
            if (strcmp(id, itemArray[i].id) == 0 && itemArray[i].id!= itemArray[0].id
            && itemArray[i].id!= itemArray[2].id&& itemArray[i].id!= itemArray[3].id
             && itemArray[i].id!= itemArray[5].id && itemArray[i].id!= itemArray[6].id 
             && itemArray[i].id!= itemArray[8].id) {
                printf(">> Item: %s\n", itemArray[i].name);
                printf(">> Price: $%.2f\n", itemArray[i].price);
                printf("Are you sure? (Y/N): ");
                scanf("%1s", id);
                if (strcmp(id, "Y") == 0) {
                    drink_index = i;
                    total_price += itemArray[i].price;
                    break;
                }
            }
        }
        if (drink_index == -1&& strcmp(id, "N") == 0 ) {
            Display();
        }if(strcmp(id, itemArray[0].id) == 0 || strcmp(id, itemArray[2].id) == 0||strcmp(id, itemArray[3].id) == 0
               ||strcmp(id, itemArray[5].id) == 0  ||strcmp(id, itemArray[6].id) == 0 
                ||strcmp(id, itemArray[8].id) == 0     ) {
            printf("Item choosen not a Drink, choose again\n");
            Display();
        }
    }


    printf("\nPlease enter a Currency\n");
    scanf("%f",&balance);
    temp = balance-total_price;
    balance2 = temp *100;
    //printf("%.2f\t",temp);
    printf("You selected %s and %s. ",itemArray[snack_index].name,itemArray[drink_index].name);
    changeCal(balance2);

 
    return(0);
}