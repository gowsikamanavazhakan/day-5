#include <iostream>
int main()
{
    int price,quantity,totexp;
    scanf("%d %d",&price,&quantity);
    if(price>1000)
    totexp=((price*quantity)-(0.1*price*quantity));
   else
  
    totexp=price*quantity;
printf("%d",totexp);
return 0;
}
