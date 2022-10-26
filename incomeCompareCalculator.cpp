// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Oct 21 2022
// This program compares your income to the
// national average and provincial average

#include <iostream>

int main() {
    // Initializing variables
    std::string userIncomeStr;
    std::string userProvince;
    std::string userAnswer;

    // Initializing constants for provinces
    int userIncomeInt;
    int salary = 57914;
    int nunavut = 87335;
    int northwestTerritories = 77670;
    int alberta = 61865;
    int yukon = 61812;
    int ontario = 55524;
    int newfoundlandAndLabrador = 55508;
    int saskatchewan = 54371;
    int britishColumbia = 53516;
    int quebec = 51735;
    int manitoba = 49661;
    int newBrunswick = 49511;
    int novaScotia = 48470;
    int pei = 45912;

    // Gets the user's input, income, the input "income"
    // can be an integer, negative, or decimal
    std::cout << "Enter your income\n";
    std::cout << ">> ";
    std::cin >> userIncomeStr;
    std::cout << "\n";

    // Tries casting the user's income to an integer
    try {
        userIncomeInt = std::stoi(userIncomeStr);

        // Program restarts if user's income could not be casted to an integer
    } catch (std::invalid_argument) {
        std::cout << "You must enter a number.\n\n";
        return main();
    }

    // list of provinces for the user to pick, each
    // province assigned a number, this is because
    // c++ could not handle spaced inputs
    std::cout << "List of provinces with assigned";
    std::cout << " number (select a number, not the province):\n";
    std::cout << "Nunavut - 1\nNorthwest Territories - 2\n";
    std::cout << "Alberta - 3\nYukon - 4\nOntario - 5\n";
    std::cout << "Newfoundland and Labrador - 6\n";
    std::cout << "Saskatchewan - 7\nBritish Columbia - 8\n";
    std::cout << "Quebec - 9\nManitoba - 10\n";
    std::cout << "New brunswick - 11\nNova Scotia - 12\nPEI - 12\n";

            // ask the user for their province
            std::cout
        << "Enter your province\n";
    std::cout << ">> ";
    std::cin >> userProvince;
    std::cout << "\n";

    // If the user chose this "province", apply the following if statements
    if (userProvince == "1") {
        //
        if (userIncomeInt >= salary && userIncomeInt >= nunavut) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and Nunavut's average\n.";
        } else if (userIncomeInt <= salary && userIncomeInt <= nunavut) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and Nunavut's average\n";
        } else if (userIncomeInt >= salary && userIncomeInt <= nunavut) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower than Nunavut's average";
        }

    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "2") {
        //
        if (userIncomeInt >= salary && userIncomeInt >= northwestTerritories) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and ";
            std::cout << "Northwest Territories' average\n.";
        } else if (userIncomeInt <= salary &&
        userIncomeInt <= northwestTerritories) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and ;";
            std::cout << "Northwest Territories' average\n";

        } else if (userIncomeInt >= salary &&
        userIncomeInt <= northwestTerritories) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower than ";
            std::cout << "Northwest Territories' average";
        }

    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "3") {
        //
        if (userIncomeInt >= salary && userIncomeInt >= alberta) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and Alberta's average\n.";
        } else if (userIncomeInt <= salary && userIncomeInt <= alberta) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and Alberta's average\n";
        } else if (userIncomeInt >= salary && userIncomeInt <= alberta) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower than Alberta's average";
        }

    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "4") {
        //
        if (userIncomeInt >= salary && userIncomeInt >= yukon) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and Yukon's average\n.";
        } else if (userIncomeInt <= salary && userIncomeInt <= yukon) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and Yukon's average\n";
        } else if (userIncomeInt >= salary && userIncomeInt <= yukon) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower than Yukon's average";
        }

    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "5") {
        //
        if (userIncomeInt >= salary && userIncomeInt >= ontario) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and Ontario's average\n.";
        } else if (userIncomeInt <= salary && userIncomeInt <= ontario) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and Ontario's average\n";
        } else if (userIncomeInt <= salary && userIncomeInt >= ontario) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower than Ontario's average";
        }

    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "6") {
        //
        if (userIncomeInt >= salary &&
        userIncomeInt >= newfoundlandAndLabrador) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and ";
            std::cout << "Newfoundland and Labrador's average\n.";
        } else if (userIncomeInt <= salary &&
        userIncomeInt <= newfoundlandAndLabrador) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and ";
            std::cout << "Newfoundland and Labrador's average\n";
        } else if (userIncomeInt <= salary &&
        userIncomeInt >= newfoundlandAndLabrador) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower than ";
            std::cout << "Newfoundland and Labrador's average";
        }

    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "7") {
        //
        if (userIncomeInt >= salary &&
        userIncomeInt >= saskatchewan) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and Saskatchewan's average\n.";
        } else if (userIncomeInt <= salary &&
        userIncomeInt <= saskatchewan) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and Saskatchewan's average\n";
        } else if (userIncomeInt <= salary &&
        userIncomeInt >= saskatchewan) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower ";
            std::cout << "than Saskatchewan's average";
        }

    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "8") {
        //
        if (userIncomeInt >= salary &&
        userIncomeInt >= britishColumbia) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and British Columbia's average\n.";
        } else if (userIncomeInt <= salary &&
        userIncomeInt <= britishColumbia) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and ";
            std::cout << "British Columbia's average\n";
        } else if (userIncomeInt <= salary &&
        userIncomeInt >= britishColumbia) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower";
            std::cout << "than British Columbia's average";
        }

    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "9") {
        //
        if (userIncomeInt >= salary &&
        userIncomeInt >= quebec) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and Quebec's average\n.";
        } else if (userIncomeInt <= salary &&
        userIncomeInt <= quebec) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and Quebec's average\n";
        } else if (userIncomeInt <= salary &&
        userIncomeInt >= quebec) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower than Quebec's average";
        }
    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "10") {
        //
        if (userIncomeInt >= salary &&
        userIncomeInt >= manitoba) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and Manitoba's average\n.";
        } else if (userIncomeInt <= salary &&
        userIncomeInt <= manitoba) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and Manitoba's average\n";
        } else if (userIncomeInt <= salary &&
        userIncomeInt >= manitoba) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower than Manitoba's average";
        }

    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "11") {
        //
        if (userIncomeInt >= salary &&
        userIncomeInt >= newBrunswick) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and New Brunswick's average\n.";
        } else if (userIncomeInt <= salary &&
        userIncomeInt <= newBrunswick) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and ";
            std::cout << "New Brunswick's average\n";
        } else if (userIncomeInt <= salary &&
        userIncomeInt >= newBrunswick) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower ";
            std::cout << "than New Brunswick's average";
        }

    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "12") {
        //
        if (userIncomeInt >= salary &&
        userIncomeInt >= novaScotia) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and Nova Scotia's average\n.";
        } else if (userIncomeInt <= salary &&
        userIncomeInt <= novaScotia) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and Nova Scotia's average\n";
        } else if (userIncomeInt <= salary &&
        userIncomeInt >= novaScotia) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower ";
            std::cout << "than Nova Scotia's average";
        }
    // If the user chose this "province", apply the following if statements
    } else if (userProvince == "13") {
        //
        if (userIncomeInt >= salary &&
        userIncomeInt >= pei) {
            std::cout << "Your salary is above or equal to the ";
            std::cout << "national average and Prince ";
            std::cout << "Edward's island average\n.";
        } else if (userIncomeInt <= salary &&
        userIncomeInt <= pei) {
            std::cout << "Your salary is lower or equal ";
            std::cout << "to the national average and ";
            std::cout << "Prince Edward's Island average\n";
        } else if (userIncomeInt <= salary &&
        userIncomeInt >= pei) {
            std::cout << "Your salary is higher than the ";
            std::cout << "national average but lower than ";
            std::cout << "Prince Edward's Island average";
        }

    // Else, if none of the of the if statement's
    // requirements were met, print the following
    // Uses while loop to give the user the option to continue or to not
    } else {
        std::cout << "Enter a valid Canadian province (just the number)\n\n";
        std::cout << "Would you like to try again? (y/n)\n";
        std::cout << ">> ";
        std::cin >> userAnswer;
        std::cout << "\n";
        while (userAnswer == "y") {
            return main();
        }
    }
    // users a while loop to give the user the option
    // to continue or not after the user finishes
    std::cout << "Would you like to try again? (y/n)\n";
    std::cout << ">> ";
    std::cin >> userAnswer;
    std::cout << "\n";
    while (userAnswer == "y") {
        return main();
    }
}
