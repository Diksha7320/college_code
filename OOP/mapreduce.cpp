//Assignment 7
/*Write a program in C++ to use map associative container. The keys will be the
names of states and the values will be the populations of the states. When the
program runs, the user is prompted to type the name of a state. The program then
looks in the map, using the state name as an index and returns the population of
the state.*/

#include <iostream>
#include <map>
using namespace std;

class stateList {
    map<string, int> list;

   public:
    stateList() 
    {
        list["Andaman Nicobar"] = 400000;
        list["Andhra Pradesh"] = 52787000;
        list["Arunachal Pradesh"] = 1533000;
        list["Assam"] = 35043000;
        list["Bihar"] = 123083000;
        list["Chandigarh"] = 1208000;
        list["Chhatisgarh"] = 29493000;
        list["Dadra Nagar Haveli and Daman & Diu"] = 1078000;
        list["Delhi"] = 20571000;
        list["Goa"] = 1559000;
        list["Gujarat"] = 69788000;
        list["Haryana"] = 29483000;
        list["Himachal Pradesh"] = 7394000;
        list["Jammu Kashmir"] = 13408000;
        list["Jharkhand"] = 38471000;
        list["Karnataka"] = 66845000;
        list["Kerala"] = 35489000;
        list["Ladakh"] = 297000;
        list["Lakshadweep"] = 68000;
        list["Madhya Pradesh"] = 84516000;
        list["Maharashtra"] = 124437000;
        list["Manipur"] = 3165000;
        list["Meghalaya"] = 3288000;
        list["Mizoram"] = 1216000;
        list["Nagaland"] = 2192000;
        list["Odisha"] = 44033000;
        list["Puducherry"] = 1572000;
        list["Punjab"] = 30339000;
        list["Rajasthan"] = 79281000;
        list["Sikkim"] = 677000;
        list["Tamil Nadu"] = 76402000;
        list["Telangana"] = 37725000;
        list["Tripura"] = 4071000;
        list["Uttar Pradesh"] = 230907000;
        list["Uttarakhand"] = 11399000;
        list["West Bengal"] = 98125000;
    }

    int getPopulation(string state) 
    {
         return list[state];
    }

    void displayAll() 
    {
        cout << "All states data available is" << endl;
        for (pair<string, int> state : list)
        {
            cout << state.first << " - " << state.second << endl;
        }
    }
};

int main() 
{
    string str;
    int population;

    stateList database;
    retry: //retry block start point
    cout << "Enter state name(0 for all)" << endl;
    cin >> str;
    if (str == "0") 
    {
        database.displayAll();
    } 
    else
    {
        population = database.getPopulation(str);
        if (population == 0) 
        {
            cout << "No such state is present, Please Try Again" << endl;
            goto retry;
        } 
        else 
        {
            cout << "Population of " << str << " is " << population << endl;
        }
    }

    
    return 0;
}