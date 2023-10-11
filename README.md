# Vending_machine_IN_C


Make the following vending_machine.c file with the desired output below.
In the vending_machine.c file, customers are to select a snacks and a drink (in that order). Inform customer if selection is not of type snack or drink when chosen and allow to choose again. Output the customer's selected items and change (in currency) from customer input. 
*design with the assumption that the vending machine takes no bills larger than $10 and disperses no bills larger than $1.

Nine Items in the Vending Machine
1) Item: Pop-Tart, Price: $1.63, Code: E7
2) Item: Coffee, Price: $2.76, Code: B2
3) Item: S&V Lays, Price: $1.49, Code: G4
4) Item: M&Ms, Price: $1.72, Code: C3
5) Item: Purelife, Price: $1.88, Code: T5
6) Item: Cheetos, Price: $1.59, Code: D9
7) Item: BBQ Lays, Price: $1.72, Code: K5
8) Item: Pepsi, Price: $2.29, Code: R6
9) Item: Granola, Price: $1.17, Code: Q8

Input:
>>./a.out

Desired Output:

>> Available Items:
E7) Pop-Tart       B2) Coffee     G4) S&V Lays
C3) M&Ms         T5) Purelife    D9) Cheetos
K5) BBQ Lays    R6) Pepsi       Q8) Granola 

>> Please Select a snack:
>> Item 1: E7
>>Price: $1.63
Are you sure? (Y/N): Y
>> Available Items:
E7) Pop-Tart       B2) Coffee     G4) S&V Lays
C3) M&Ms         T5) Purelife    D9) Cheetos
K5) BBQ Lays    R6) Pepsi       Q8) Granola

>> Please Select a drink:
>> Item 1: D9
>> Item chosen not a drink, choose again.
>> Available Items:
E7) Pop-Tart       B2) Coffee     G4) S&V Lays
C3) M&Ms         T5) Purelife    D9) Cheetos
K5) BBQ Lays    R6) Pepsi       Q8) Granola

>> Please Select a drink:
>> Item 1: B2
>> Price: $2.76
>> Are you sure? (Y/N): N
>> Available Items:
E7) Pop-Tart       B2) Coffee     G4) S&V Lays
C3) M&Ms         T5) Purelife    D9) Cheetos
K5) BBQ Lays    R6) Pepsi       Q8) Granola

>> Please Select a drink:
>> Item 1: T5
>> Price: $1.88
>> Are you sure? (Y/N): Y

>> Please enter a Currency (5 = $5.00): 5

>> You selected Pop-Tart and Purelife. Your change is 1 dollar(s), 1 quarter(s), 2 dime(s), 0 nickel(s), 4 pennies.
