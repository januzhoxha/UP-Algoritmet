/*
Write a C++ program that:

Creates an unordered_map<string, int>
Inserts these values:
"apple" → 10
"banana" → 20
"orange" → 30
Prints the value of "banana"
*/
/*
#include <unordered_map>
#include <iostream>
using namespace std;


int main() {
    unordered_map<string,int> values;

    values["apple"] = 10;
    values["banana"] = 20;
    values["orange"] = 30;

    for(auto const& [name, number] : values) {
        if(name == "banana") {
            cout << "Banana's value is: " << number << endl;
        }
    }
}*/

/*
Write a program that:

Creates an unordered_map<string, int>
Inserts:
"apple" → 10
"banana" → 20
"orange" → 30
Checks if "grape" exists using find()

If it exists print:*/
/*
#include <unordered_map>
#include <iostream>
using namespace std;

int main() {
    unordered_map<string, int> fruits;

    fruits["apple"] = 10;
    fruits["banana"] = 20;
    fruits["orange"] = 30;

    if(fruits.find("grape") != fruits.end()) {
        cout << "Grape exists!";
    } else {
        cout << "Grape doesnt exist!";
    }

    return 0;
}*/


/*
🧠 TASK — Hash Map Frequency + Top Finder

Write a program that:

Input:
Reads a sentence (multiple words)
Requirements:
Store word frequency in unordered_map<string, int>
Print all words with their frequencies
Find and print the most frequent word
If tie → print any one
*/

/*
#include <unordered_map>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unordered_map<string,int> words;
    int j = 0;
    int z = 0;
    int k = 0;

    words["Apple"] = j;
    words["Banana"] = z;
    words["Snigkers"] = k;

    string word;

    for (int i = 0; i < 4; i++)
    {
        cout << "Type in one of these: " << endl;
        for(auto const& [name, frequency] : words) {
        cout << name << endl;
        }
        cin >> word;
        if((word == "Apple")) {
            j++;
        } if(word == "Banana") {
            z++;
        } if(word == "Snigkers") {
            k++;
        } else {
            cout << "One attempt less for you!" << endl;
        }
    }

    for(auto const& [name, frequency] : words) {
        cout << name << "Has been mentioned this: " << frequency << " many times!" << endl;
    }

    return 0;
}*/

/*
Detyra 3: Numërimi i frekuencës së fjalëve Te nurmohet sa here paraqitet secila fjale ne varg. 
Të shkruhet programi sipas kërkesave në vijim: a. Të deklarohet një unordered_map ku çelësi është string (fjala) 
dhe vlera është int (numri i paraqitjeve të saj). b. Të jepet një varg fjalësh të paracaktuara në program 
(p.sh. {"molle", "dardhe", "molle", "qershi", "molle", "dardhe"}). c. Për secilën fjalë në varg, të rritet numëruesi përkatës
në unordered_map. d. Të printohen të gjitha fjalët bashkë me sa herë janë paraqitur.*/

/*
#include <unordered_map>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unordered_map<string, int> perseritja;

    string fjala;

    perseritja["molla"] = 0;
    perseritja["dardhe"] = 0;
    perseritja["qershi"] = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Enter a word: " << endl;
        cin >> fjala;

        perseritja[fjala]++;

        if((fjala != "molla") || (fjala != "dardhe") || (fjala != "qershi")) {
            cout << "Invalid word!" << endl;
        }
    }

    for (auto &const [name, value] : perseritja ) {
        cout << name << " has been mentioned: " << value << " times!" << endl;
    }

    return 0;
}*/

/*
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {

    vector<string> animals = {"cat", "dog", "bird", "cat", "lion", "dog", "tiger"};

    unordered_map<string, int> seen;

    for (string x : animals) {
        seen[x]++;

        if (seen[x] == 2) {
            cout << x;
            break;
        }
    }

    return 0;
}*/
/*
#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    unordered_map<string, vector<int>> students;
    string name;
    int grade;

    for (int i = 0; i < 5; i++)
    {
        cout << "What is your name? " << endl;
        cin >> name;

        for (vector <int> x : students) 
        {
            
        }
        
        
        
    }
    
}
*/

/*Declare an unordered_map that stores student names (string) as keys and their points (int) as values.
Input data for 5 students:
Ask the user to enter the student’s name.
Ask the user to enter the student’s points.
Store the data in the map.
Check whether the student "Blerta" exists in the map:
If she exists, print her points.
Otherwise, print a message stating that the student does not exist.
Display all students who have more than 85 points.
Print both the name and the points.
Remove the student named "Dardan" from the map (if they exist).
Finally, print the updated list of all students and their points after deletion.*/

/*

#include <unordered_map>
#include <iostream>
using namespace std;

int main() {
    unordered_map<string, int> students;

    // Input 5 students
    for (int i = 0; i < 5; i++) {
        string emri;
        int vlera;

        cout << "Enter name: ";
        cin >> emri;

        cout << "Enter points: ";
        cin >> vlera;

        students[emri] = vlera;
    }

    cout << "\n--- Check for Blerta ---\n";

    // Check if Blerta exists
    if (students.find("Blerta") != students.end()) {
        cout << "Blerta has " << students["Blerta"] << " points.\n";
    } else {
        cout << "Studenti Blerta nuk ekziston.\n";
    }

    // Students with more than 85 points
    cout << "\n--- Students with >85 points ---\n";
    for (auto it : students) {
        if (it.second > 85) {
            cout << it.first << " : " << it.second << endl;
        }
    }

    // Remove Dardan
    students.erase("Dardan");

    // Final list
    cout << "\n--- Final list ---\n";
    for (auto it : students) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}

*/


/*
Exercise: Library Book System (unordered_map)

You are required to create a C++ program that manages a small library system using an unordered_map.

Requirements:
Declare an unordered_map that stores:
Book titles (string) as keys
Number of available copies (int) as values
Input data for 5 books:
Ask the user to enter the book title
Ask the user to enter how many copies are available
Store this data in the map
Check whether the book "Harry Potter" exists in the system:
If it exists, print how many copies are available
Otherwise, print that the book is not in the library
Display all books that have more than 3 copies available:
Print both the book title and number of copies
Remove the book named "Clean Code" from the system (if it exists)
Finally, print the updated list of all books and their available copies
*/


#include <iostream>
#include <unordered_map>
#include <iomanip>
using namespace std;

int main() {
    unordered_map<string, int> books;
    string bookTitles;
    int availableCopies;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a book title!" << endl;
        cin >> bookTitles;

        cout << "Enter available copies: " << endl;
        cin >> availableCopies;

        books[bookTitles] = availableCopies;
    }


    cout << "\n -----Check for Harry Potter ----\n" << endl;


    if (books.find("Harry Potter") != books.end()) {
        cout << "Harry potter exists and has: " << books["Harry Potter"] << " in it!" << endl;
    } else
    {
        cout << "We dont have Harry Potter books" << endl;
    }
    


    for (auto it : books)
    {
        if (it.second > 3)
        {
            cout << it.first << " has: " << it.second << "copies available!" << endl;
        }
    }

    if (books.find("Clean Code") != books.end()) 
    {
        books.erase("Clean Code");
    }
    
    for (auto it : books)
    {
        cout << it.first << " has: " << it.second << " copies" << endl;
    }
    
    return 0;

}