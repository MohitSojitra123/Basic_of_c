// input electricity unit charge and calculate the total electricity bill according to the given condition

// for first 50 unit Rs. 0.50/unit
// for next 100 unit Rs. 0.75/unit
// for next 100 unit Rs.1.20/unit
// for unit above 250 rs. 1.50/unit
// an additional surcharge of 20% is added to the bill




#include<stdio.h>

int main(){
  
       float units, bill = 0, surcharge, total;

        printf("Enter Units...");
        scanf("%f",&units);

        if(units <=50){
              bill=(units * 0.50);
        }else if(units <= 150){
            bill=((50 * 0.50) + (units - 50) * 0.75 );
        }else if(units <=250){
           bill=((50* 0.50) + (100 * 0.75) + (units - 150) * 1.20);
        }else{
           bill=((50*0.50) + (100*0.75) + (100*1.20) +((units - 250)*1.50));
        }

        surcharge=bill *0.20;
        total = bill+surcharge;

         printf("Total Electricity Bill = Rs. %.2f\n", total);

}
