#include<iostream>
int main(){
int prime[5]{1,2,3,4,5};
//int prime[5]{};     //initialize all elements to 0.
for(int i=0;i<5;i++){
    std::cout<<prime[i];
}
return 0;
}
/*
#include <iostream>
 
void passValue(int value) // value is a copy of the argument
{
    value = 99; // so changing it here won't change the value of the argument
}
 
void passArray(int prime[5]) // prime is the actual array
{
    prime[0] = 11; // so changing it here will change the original argument!
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 2;
}
 
int main()
{
    int value{ 1 };
    std::cout << "before passValue: " << value << '\n';
    passValue(value);
    std::cout << "after passValue: " << value << '\n';
 
    int prime[5]{ 2, 3, 5, 7, 11 };
    std::cout << "before passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';
    passArray(prime);
    std::cout << "after passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';
 
    return 0;
}
before passValue: 1
after passValue: 1
before passArray: 2 3 5 7 11
after passArray: 11 7 5 3 2
*/