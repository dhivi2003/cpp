/*
Project: !!!!!WEATHER APP!!!!!
Name: Dhivyavarshini S A 
College: Vivekanandha College of engineering for Women

Used data:
1) Email
2) Location
3) Weather report timing(Today/Tomorrow/Yesterday/Weekly report)
4) Temperature and Climate

Method used:
1) Switch case
2) 
*/

#include <iostream>
using namespace std;
int main()
{
    string email;
    string location;
    int choice;
    cout<<"!!*!!WEATHER APP!!*!!"<<endl;
    cout<<"Enter your email id:"<<endl;
    cin>>email;
    cout<<"Enter your current location:"<<endl;
    cin>>location;
    cout<<"1)Today\n2)Tomorrow\n3)Yesterday\n4)Entire week\n5)Rainfall in this week\n6)Heavy sun in this week"<<endl;
    cout<<"Enter the period for when you want the report:"<<endl;
    cin>>choice;
    switch(choice)
    { 
        case 1:
        {
            cout<<"Mostly Cloudy"<<endl;
            cout<<"Temperature:25°C"<<endl;
            cout<<"You can chill out WELL!!"<<endl;
            break;
        } 
        case 2:
        { 
            cout<<"High Rainfall"<<endl;
            cout<<"Temperature:22°C"<<endl;
            cout<<"Better you can bring an Umberlla °~°"<<endl;
            break;
        }
       case 3:
        {
            cout<<"Heavy Sun"<<endl;
            cout<<"Temperature:31°C"<<endl;
            cout<<"You have been tired °#°"<<endl;
            break;
        }
       case 4:
        {
            cout<<"Monday--Rainfall(25°C)\nTuesday--Cloudy(28°C)\nWednesday--Sunny(30°C)\nThursday--Heavy Sun(32°C)\nFriday--Windy(27°C)\nSaturday--Storm(24°C)\nSunday--Light Rain(26°C)"<<endl;
            cout<<"According to the above report ## ^...^ Plan your schedule"<<endl;
            break;
        }
        case 5:
        {
            cout<<"Monday# Wednesday# Saturday#"<<endl;
            cout<<"Be safe and secure while Travel"<<endl;
            break;
        }
        case 6:
        {
            cout<<"Tuesday# Friday# Sunday#"<<endl;
            cout<<"Mostly avoid to go out"<<endl;
            break;
        }
        default:
        {
            cout<<"**Choose some other period**";
            break;
        }
    
    }
    cout<<"\nTHANK YOU!!°~~° VISIT AGAIN"<<endl;
    return 0;
    
}


