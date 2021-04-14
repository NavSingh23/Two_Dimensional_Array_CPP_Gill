#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp
double cityOne[7] = {64.0,64.0,67.0,71.0,77.0,86.0,88.0};

Poway, Day 1: 64

Poway, Day 2: 64

Poway, Day 3: 67

Poway, Day 4: 71

Poway, Day 5: 77

Poway, Day 6: 86

Poway, Day 7: 88

Devon, Day 1: 64

Devon, Day 2: 66

Devon, Day 3: 55

Devon, Day 4: 51

Devon, Day 5: 61

Devon, Day 6: 67

Devon, Day 7: 63

*/



int main() {
  
       const int CITY = 2;

      const int WEEK = 7;

      double cityOne[7] = {64.0,64.0,67.0,71.0,77.0,86.0,88.0};
      double cityTwo[7] = {64.0,66.0,55.0,51.0,61.0,67.0,63.0};

      string city[2] = {"Poway", "Devon"};

    int temperature[CITY][WEEK];

    //Note your input data from the above

    //cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {
            if (i == 0)
            {
            temperature[i][j] = cityOne[j];
            }
            else if (i == 1)
            {
            temperature[i][j] = cityTwo[j];
            }
             
            //cout << "City: " << city[i] << ", Day " << j + 1 << " : ";

            //cin >> temperature[i][j];

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City: " << city[i] << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

   /*For up to 5 Points Extra Credit

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....

      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */

 

    return 0;


}