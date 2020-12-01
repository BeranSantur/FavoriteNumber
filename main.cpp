#include <iostream>

//Problem: display user's favorite number between 0-100
//What we need to know: user's input between 0-100
//What we need to do: prompt to user, store user's input, than check if it is between 0-100 than display.

bool isEnteredNumberBetweenScope(int enteredNumber)
{
if(enteredNumber<100&&enteredNumber>0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main(){
   
    int userPrefence;
    int enteredNumber;
    bool isUserQuit=false;
    bool quit=false;

        while(!isUserQuit)
        {
            
            std::cout << "Please enter your number between 0-100: ";
            std::cin >> enteredNumber;
            if(isEnteredNumberBetweenScope(enteredNumber))
                {   
                        isUserQuit=false;
                        quit=false;
                        std::cout << "Your favorite number is "<< enteredNumber<<"."<<std::endl;
                        std::cout << "Wanna try again? "<<std::endl;
                        std::cout << "1.Yes "<<std::endl;
                        std::cout << "2.No "<<std::endl;
                        std::cin>> userPrefence;
                        
                        while(!quit)
                        {
                            switch(userPrefence)
                            {
                                case 1:
                                isUserQuit=false;
                                quit=true;
                                break;
                            
                                case 2:
                                isUserQuit=true;
                                quit=true;
                                break;
                            
                                default:
                                    std::cout<< "Please enter a valid number, 1 or 2 "<<std::endl;
                                    std::cin>>userPrefence;
                                    quit=false;
                                        /*if(userPrefence==1)
                                        quit=false;
                                        if(userPrefence==2)
                                        quit=true;
                                           else
                                            {
                                            userPrefence=3;
                                            quit=false;
                                            }  */
                                    break;
                                }
                        }
                }
            else
                {
                    isUserQuit=false;
                } 
        }
    return 0;
}
