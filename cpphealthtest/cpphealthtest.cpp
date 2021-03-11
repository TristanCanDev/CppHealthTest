#include <iostream>
using namespace std;

int main()
{
    // This program is meant to be a clone of my python health test thingy I made for a school test

    int HealthPoint = 0;
    int TotalPossible = 24;

    string Question1 = "\nDo you utilize the oral health care system and abide their guidlines?";
    string Question2 = "\nDo you eat items with high sugar counts that could reduce the chance of getting proper nutrients but could give you excessive amounts of calories?";
    string Question3 = "\nDo you inject, take, or consume drugs (This excludes Marijuana as it is healthy to take in most cases) of any form?";
    string Question4 = "\nDo you consume alcoholic beverages regularly?";
    string Question5 = "\nDo you live in a community where you are often subjected or exposed to unhealthy poluted air?";
    string Question6 = "\nDo you have any eating disorder such as anorexia or bulimia?";
    string Question7 = "\nDo you live in a community or household that has limited access to food which causess starvation among yourself or others?";
    string Question8 = "\nHave you recieved your general vaccinations?";
    string Question9 = "\nDo you get your influenza vaccination yearly?";
    string Question10 = "\nDo you have any STIs such as HIV?";
    string Question11 = "\nDo you currently have any health conditions?";
    string Question12 = "\nDo you suffer mental illness or suffer from suicidal thoughts?";

    cout << "Welcome to the BluSoftware Wellness Test created within python and ported to c++! Please be sure to answer all questions honestly so we can properly gauge your general wellnes\n";
    cout << "Remember, most of these questions have been created out of the Leading Heath Indicators that can be found at health.gov/healthypeople";

    string userin;
    string bruh[12] = { Question1, Question2, Question3, Question4, Question5, Question6, Question7, Question8, Question9, Question10, Question11, Question12 };
    int x;
    for (x = 0; x < 12; x++)
    {
        cout << bruh[x] << " y/n";
        cin >> userin;
        if (x == 1) {
            if (userin == "y") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 2) {
            if (userin == "n") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 3) {
            if (userin == "n") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 4) {
            if (userin == "n") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 5) {
            if (userin == "n") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 6) {
            if (userin == "n") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 7) {
            if (userin == "n") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 8) {
            if (userin == "y") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 9) {
            if (userin == "y") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 10) {
            if (userin == "n") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 11) {
            if (userin == "n") {
                HealthPoint = HealthPoint + 2;
            }
        }
        if (x == 12) {
            if (userin == "n") {
                HealthPoint = HealthPoint + 2;
            }
        }
    }
    if (HealthPoint <= 6) {
        cout << "With the answers you have provided, we have decided to declare you unhealthy";
    }
    else if (HealthPoint <= 12) {
        cout << "With the answers you have provided, we have decided to declare you moderately unhealthy";
    }
    else if (HealthPoint <= 18) {
        cout << "With the answers you have provided, we have decided to declare you moderately healthy";
    }
    else if (HealthPoint <= 24) {
        cout << "With the answers you have provided, we have decided to declare you healthy";
    }

    return 0;
}
