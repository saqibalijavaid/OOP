#include <iostream>

using namespace std;

int inputDay(int num)
{
    puts("Enter day (1 to 31):");

    while (1)
    {
        if (scanf("%d", &num) == 1)
        {
            if (num < 1 || num > 31)
            {
                puts("Invalid input");
            }
            else
            {
                printf("%s %d", "You entered: ", num);
                break;
            }
        }
        else
        {
            puts("Invalid");
            while (getchar() != '\n')
                ;
        }
    }

    return num;
}

int inputMonth(int num)
{
    puts("Enter month (1 to 12):");

    while (1)
    {
        if (scanf("%d", &num) == 1)
        {
            if (num < 1 || num > 12)
            {
                puts("Invalid input");
            }
            else
            {
                printf("%s %d", "You entered: ", num);
                break;
            }
        }
        else
        {
            puts("Invalid");
            while (getchar() != '\n')
                ;
        }
    }

    return num;
}

int inputYear(int num)
{
    puts("Enter number (1 to 9):");

    while (1)
    {
        if (scanf("%d", &num) == 1)
        {
            if (num < 1)
            {
                puts("Invalid input");
            }
            else
            {
                printf("%s %d", "You entered: ", num);
                break;
            }
        }
        else
        {
            puts("Invalid");
            while (getchar() != '\n')
                ;
        }
    }

    return num;
}

class Date
{
private:
    int day;
    int month;
    int year;

public:
    // setter functions
    void setDay(int x)
    {
        day = x;
    }
    void setMonth(int x)
    {
        month = x;
    }
    void setYear(int x)
    {
        year = x;
    }

    // getter functions
    int getDay() const
    {
        return day;
    }
    int getMonth() const
    {
        return month;
    }
    int getYear() const
    {
        return year;
    }

    void displayDate() const
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main(void)
{
    Date day1;

    int day;
    int month;
    int year;

    day = inputDay(day);
    cout << endl;
    month = inputMonth(month);
    cout << endl;
    year = inputYear(year);
    cout << endl;

    day1.setDay(day);
    cout << endl;
    day1.setMonth(month);
    cout << endl;
    day1.setYear(year);
    cout << endl;

    day1.displayDate();
    cout << endl;

    int size;
    cout << "Enter Size: ";
    cin >> size;
    Date *arr = new Date[size];
    for (int i = 0; i < size; i++)
    {
        int arrDay;
        int arrMonth;
        int arrYear;

        arrDay = inputDay(arrDay);
        cout << endl;
        arrMonth = inputDay(arrMonth);
        cout << endl;
        arrYear = inputDay(arrYear);
        cout << endl;

        arr[i].setDay(arrDay);
        arr[i].setMonth(arrMonth);
        arr[i].setYear(arrYear);
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i].getDay() << "/" << arr[i].getMonth() << "/" << arr[i].getYear() << endl;
    }

    return 0;
}