#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char selection{};
    vector<int> vec;
    do
    {
        cout << "\nP- Print numbers" << endl;
        cout << "T - Add a number" << endl;
        cout << "A - Display the average number" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;

        if (selection == 'p' || selection == 'P')
        {
            if (vec.size() == 0)
                cout << "There are no numbers in the list" << endl;
            else{
                cout << "The numbers in the list are: ";
                for (auto number: vec)
                    cout << number << " "; 
            }
        }
        else if (selection == 'A' || selection == 'a')
        {
            int total = 0;
            for (auto number : vec)
            {
                total += number;
            }

            double average = total / vec.size();
            cout << "The average number is: " << average << endl;
        }
        else if (selection == 'S' || selection == 's')
        {
            int smallest_number = vec.at(0);
            for (auto number : vec)
            {
                if (number < smallest_number)
                {
                    smallest_number = number;
                }
            }
            cout << "The smallest number is: " << smallest_number << endl;
        }
        else if (selection == 'L' || selection == 'l')
        {
            int largest_number = vec.at(0);
            for (auto number : vec)
            {
                if (number > largest_number)
                {
                    largest_number = number;
                }
            }
            cout << "The largest number is " << largest_number << endl;
        }
        else if (selection == 'Q' || selection == 'q')
        {
            cout << "You quit" << endl;
        }
        else if (selection == 'T' || selection == 't')
        {
            int number_added{0};
            cout << "Enter a number: ";
            cin >> number_added;
            vec.push_back(number_added);
            cout << "You added " << number_added << " to the list" << endl;
        }
        else
        {
            cout << "Selection unknown" << endl;
        }
    } while (selection != 'Q' && selection != 'q');

    return 0;
}