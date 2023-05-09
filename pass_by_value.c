#include <stdio.h>
int Pass_by_value(int y)
{
  int y=200;
}
int main()
{
    int y=100;
    Pass_by_value(y);

    return 0;
}
// pass the value,not passing the variable,there main()funiction
// call the Pass_by_value(y),there y is 100 those 100 is parameter of 
// Pass_by_value funtion now but (int y=200)it is not the change the main()funiction
// variable value y
//Pass_by_value ()funiction variable y are not same as main()funiction variable y 