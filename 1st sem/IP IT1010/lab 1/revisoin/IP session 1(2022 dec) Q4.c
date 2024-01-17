#include <stdio.h>
#include <assert.h>

float calInterest(int FDType, float depositAmount);
float calTax(float annualInterest);
void displayDetailes(float interest, float taxAmount);

float calInterest(int FDType, float depositAmount)
{
    int type = FDType;

    switch (type)
    {
        case 1 : return depositAmount * 0.16;
        case 2 : return depositAmount * 0.15;
        case 3 : return depositAmount * 0.155;
        case 4 : return depositAmount * 0.175;
        default : return 0;
    }
}

float calTax(float annualInterest)
{
    return annualInterest * 0.05;
}

void displayDetailes(float interest, float taxAmount)
{
    float amount_payable;

    amount_payable = interest - taxAmount;

    printf ("Annual Interest\t Tax amount\t Amount Payable\n");
    printf ("%.2f\t\t %.2f\t\t %.2f\n", interest, taxAmount, amount_payable);
}

int main ()
{
  assert(calInterest(1, 1000) == 160.00);
  assert(calInterest(5, 1000) == 0.0);

  int x;
  float y, amount, tax;

    printf("Enter Fixed deposit type : ");
    scanf("%d", &x);

  while(x != -1)
  {
      printf("Enter deposit amount : ");
      scanf("%f", &amount);

      y = calInterest(x, amount);

      tax = calTax(y);

      displayDetailes(y, tax);

      printf("\nEnter Fixed deposit type : ");
      scanf("%d", &x);
  }

  return 0;
}
