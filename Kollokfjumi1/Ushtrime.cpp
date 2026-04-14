/*Detyra 1 ne kllk 1
2. [6 pikë] Të shkruhet një program në C++ që menaxhon një inventar të produkteve në një dyqan.
a. [1 pikë] Brenda funksionit main, Të deklarohet një varg me 10 anëtarë të tipit të plotë me emrin
sasiaProdukteve, ku çdo element përfaqëson sasinë në stok të një produkti të ndryshëm.
b. [1 pikë] Të deklarohet një pointer ptrSasia i cili si vlerë merr adresën e elementit të parë të vargut
sasiaProdukteve.
c. [2 pikë] Përmes pointerit ptrSasia, të zvogëlohet sasia e produktit të pestë në varg për 2 njësi.
d. [2 pikë] Të shtypen në ekran sasitë e përditësuara të të gjithë produkteve në inventar duke përdorur pointerin
ptrSasia*/

/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int N = 10;
    int sasiaProdukteve[N] = {1,2,3,4,5,6,7,8,9,10};

    int *ptrSasia = &sasiaProdukteve[0];

    *(ptrSasia + 4) -= 2;

    for (int i = 0; i < N; i++)
    {
       cout << *(ptrSasia + i) << " ";
    }
    
}*/

/*Detyra 2
Write a C++ program that manages an inventory of 12 products.
- Each product has a stock quantity stored in an array.
- Use a pointer to:
- Increase the stock of the 3rd product by 10 units.
- Decrease the stock of the 7th product by 5 units.
- Double the stock of the last product.
- Finally, print all updated quantities using only the pointer.
*/

/*#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int const N = 12;

    int sasiaProduktit[N] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int *sasiaPtr = &sasiaProduktit[0];

    *(sasiaPtr + 2) += 10;
    *(sasiaPtr + 6) -= 5;
    *(sasiaPtr + 11) *= 2;

    for (int i = 0; i < N; i++)
    {
        cout << *(sasiaPtr + i)<< " ";
    }
}*/

/*4. [5 pikë] Të shkruhet kodi sipas kërkesave në vijim:
a. [1 pikë] Të deklarohet nje numer jo i plote me emrin a.
b. [1 pikë] Të deklarohet një pointer, i cili si vlerë merr adresën e variablës a.
c. [1 pikë] Të deklarohet një pointer i dyfishtë, i cili në fillim është i pa-inicializuar.
d. [1 pikë] Përmes pointerit të dyfishtë t'i caktohet vlera variablës a, duke u nisur nga pikat paraprake të
detyrës.
e. [1 pikël Te printohet vlera e variablës a.*/

/*#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a;

    double *pointer = &a;
    double **pointer2;

    pointer2 = &pointer;
    **pointer2 = 3.0;
    cout << a << endl;
    return 0;

}*/

/*
- Pointer Initialization
- Declare an int variable x = 5.
- Create a pointer p to x.
- Use the pointer to increment x by 10.
- Print x.
- Array Traversal
- Create an array of 5 integers.
- Use a pointer to iterate through the array and print each element without using [].
*/

/*
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int x = 5;
    int *p = &x;
    *(p) += 10;

    cout << x << endl;

    int const N = 5;
    int array[N] = {1,2,3,4,5};
    int *arrayp = &array[0];

    for (int i = 0; i < N; i++)
    {
        cout << *(arrayp + i) << " ";
    }

    return 0;
}*/

/*Write a program that:

Declares an array of 8 integers representing the stock of 8 different products.
Declares a pointer pointing to the first element of the array.
Increases the stock of the 3rd product by 5 units using the pointer.
Prints all the stock values using pointer arithmetic.*/
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int N = 8;
    int products[N] = {1,2,3,4,5,6,7,8};

    int *pointer = &products[0];

    *(pointer + 2) += 5;
    
    for (int i = 0; i < N; i++)
    {
        cout << *(pointer + i) << " ";
    }

    return 0;
}*/

/*Declare an array of 12 integers for product quantities.
Declare a pointer to the first element.
Reduce the quantity of every even-indexed product by 2 using the pointer.
Increase the quantity of every product divisible by 3 by 1 using pointer arithmetic.
Print the final inventory using the pointer.*/
/*
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int const N = 12; // Numri i elementeve//
    int array[N] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int *pointer = &array[0];

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            *(pointer + i) -= 2;
        }
    }

    for (int i = 0; i < N; i++)
    {
        
        if (*(pointer + i) % 3 == 0)
        {
            *(pointer + i) += 1;
        }
        
    }


    for (int i = 0; i < N; i++)
    {
        cout << *(pointer + i) << " ";
    }
}*/

/*Declare an array of 15 integers representing product quantities.
Declare a pointer to the array.
Ask the user which product (index) they want to decrease, and by how much. Update via the pointer.
After all updates, print the total inventory and the product with the minimum stock using only the pointer.*/
/*
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int const N = 15;
    int array[N] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    int *pointer = &array[0];
    int index;
    int value;

    getoverhere:
    cout << "Hey which product(index) do you want to decrease, and by how much?(1-15)" << endl;
    cin >> index;
    cin >> value;

    if ((index < 1) || (index > 15))
    {
        cout << "Why would you do this?" << endl;
        goto getoverhere;
    } if ((index >= 1) && (index <= 15))
    {
        if (value > array[index - 1])
        {
            cout << "No placing in a bigger value then the stock of the product" << endl;
            goto getoverhere;
        } else {
            *(pointer + index - 1) -= value;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << *(pointer + i) << " ";
    }
    
}*/

/*
Të shkruhet kodi sipas kërkesave në vijim:

Të deklarohet një numër jo i plotë me emrin a.
Të deklarohet një pointer, i cili si vlerë merr adresën e variablës a.
Të deklarohet një pointer i dyfishtë, i cili në fillim është i pa-inicializuar.
Përmes pointerit të dyfishtë t'i caktohet vlera variablës a, duke u nisur nga pikat paraprake të detyrës.
Të printohet vlera e variablës a.
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a;
    double *pointer = &a;
    
    double **pointer2 = &pointer;

    **pointer2 = 11;

    cout << *pointer << endl;
    cout << **pointer2 << endl;
}*/

/*Të shkruhet programi sipas kërkesave në vijim:

Të definohet funksioni faktorieli, i cili kalkulon faktorielin e një numri të pranuar si parametër.
Funksioni i definuar në pikën a, të kthej rezultatin për numrin e dhënë përmes një parametri pointer.
Brenda funksionit main, të thirret funksioni faktorieli me parametrat e nevojshëm.
Brenda funksionit main, të printohet rezultati për faktorielin e kalkuluar.*/
/*
#include <iostream>
#include <iomanip>
using namespace std;

void factorial(int a, int *res) {
    *res = 1;

    for (int i = 1; i <= a; i++)
    {
        *res *= i;
    }
    
}

int main() {
    int num = 5;
    int result;

    factorial(num, &result);
    
    cout << "Faktoriali: " <<  result << endl;
}*/

/*
Të shkruhet një program që:

Definon një funksion processArray
Funksioni pranon:
një varg (array)
madhësinë e tij
një pointer për rezultat
Funksioni:
gjen mesataren e elementeve
për çdo element më të madh se mesatarja, e përgjysmon atë
llogarit shumën e elementeve të modifikuara
e kthen këtë shumë përmes pointer-it*/
/*
#include <iostream>
using namespace std;

void processArray(int array[], int n, int *rezulltati){
    double mesatarja = 0;

    for (int i = 0; i < n; i++)
    {
        mesatarja += array[i];
    }

    mesatarja /= n;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > mesatarja)
        {
            array[i] /= 2;   
        }
    }

    *rezulltati = 0;
    for (int i = 0; i < n; i++)
    {
        *rezulltati += array[i];
    }
}

int main() {
    const int N = 5;
    int array[N] = {10,20,30,40,50};
    int rezulltati;

    processArray(array, N, &rezulltati);

    cout << "Mesatarja eshte: " << rezulltati << endl;

    return 0;
}*/

/*
an array
its size
two pointers:
one for the minimum value
one for the maximum value
The function should:
Find the minimum and maximum element in the array
Swap their positions in the array
Return:
min via pointer
max via pointer*/
//Zack is that invincible?//
/*
#include <iostream>
#include <iomanip>
using namespace std;

int processArray(int array[], int n, int *min, int *max) {
    int minimum = array[0];
    int maximum = array[0];

    for (int i = 0; i < n; i++)
    {
        if (minimum > array[i])
        {
            minimum = array[i];
        }
        if (maximum < array[i])
        {
            maximum = array[i];
        }
    }
    int position1 = 0;
    int position2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (minimum == array[i])
        {
            position1 = i;
        }
        if(maximum == array[i]){
            position2 = i;
        }
    }
    
    int change = array[position1];
    array[position1] = array[position2];
    array[position2] = change;

    *min = minimum;
    *max = maximum;

    return *max, *min;
}

int main() {
    const int n = 5;
    int array[n] = {10,20,30,40,50};
    int min;
    int max;

    processArray(array, n, &min, &max);

    cout << "Min is: " << min << endl << "Whilst max is: " << max << endl;

    return 0;
}*/

//                          KETU PERFUNDOJNE USHTRIMET ME POINTERA 

/*
Compute the sum of all elements using a pointer, not a[i].*/

/*#include <iostream>
#include <array>
using namespace std;

int main() {
    int sum = 0;
    array<int,5> arr = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        sum += arr.at(i);
    }

    cout << "The sum is; " << sum << endl;
    
}*/

/*
4. [7 pikë] Të shkruhet një program në C++ për menaxhimin e orareve të autobusëve.
a. [1 pikë] Të definohet një klasë BusSchedule që përmban një vektor departureTimes ku secili element
perfaqeson orën e nisjes se nje autobusi ne formatin e orës 24-orëshe.
b. [1 pikë] Klasa BusSchedule duhet të përmbajë një metodë addDepartureTime që mundëson regjistrimin e një
ore të re nisjeje në vektorin departureTimes.
c. [3 pikë] Të shtohet një metodë findNextDeparture e cila, bazuar në orën aktuale (parametër hyrës numër i
plotë), identifikon dhe kthen oren e nisjes se autobusit te ardhshem. Per rastet, kur nuk ka asnje nisje të shtypet
një mesazh që nuk ka nisje dhe të kthehet rezultati -1.
d. [2 pikë] Të shtohet një metodë printSchedule që shtyp oraret e të gjitha nisjeve të autobusëve dhe orën e
nisjes se autobusit te ardhshem nese ora ështe 18.*/

/*#include <iostream>
#include <vector>
using namespace std;

class BusSchedule {
private:
    vector<int> departureTimes;

public:
    void addDepartureTime(int hour) {
        if (hour >= 0 && hour < 24) {
            departureTimes.push_back(hour);
        }
    }

    int findNextDeparture(int currentTime) {
        int next = 25; 

        for (int t : departureTimes) {
            if (t > currentTime && t < next) {
                next = t;
            }
        }

        if (next == 25) {
            cout << "Ska ma autobus per sot!" << endl;
            return -1;
        }

        return next;
    }

    void printSchedule(int currentTime) {
        cout << "Orari i autobuseve:\n";

        for (int t : departureTimes) {
            cout << t << endl;
        }

        if (currentTime >= 18) {
            int next = findNextDeparture(currentTime);

            if (next != -1) {
                cout << "Autobusi i ardhshem niset ne: " << next << endl;
            }
        }
    }
};

int main() {
    BusSchedule bus;

    bus.addDepartureTime(6);
    bus.addDepartureTime(9);
    bus.addDepartureTime(14);
    bus.addDepartureTime(19);
    bus.addDepartureTime(22);

    int ora_tash = 18;

    int next = bus.findNextDeparture(ora_tash);

    if (next != -1) {
        cout << "Ka autobus pas " << ora_tash
             << ", niset ne: " << next << endl;
    }

    bus.printSchedule(ora_tash);

    return 0;
}*/

/*
5. [7 pikë] Të shkruhet një program në C++ për menaxhimin e orareve të trenave.
a. [1 pikë] Të definohet një klasë TrainSchedule që përmban një vektor departureTimes ku secili element përfaqëson orën e nisjes së një treni në formatin 24-orësh.
b. [1 pikë] Klasa TrainSchedule duhet të përmbajë një metodë addDepartureTime që mundëson regjistrimin e një ore të re nisjeje në vektorin departureTimes.
c. [3 pikë] Të shtohet një metodë findNextDeparture e cila, bazuar në orën aktuale (parametër hyrës numër i plotë), identifikon dhe kthen orën e nisjes së trenit të ardhshëm. Për rastet kur nuk ka asnjë nisje, të shtypet një mesazh që nuk ka trena dhe të kthehet rezultati -1.
d. [2 pikë] Të shtohet një metodë printSchedule që shtyp oraret e të gjitha nisjeve të trenave dhe orën e nisjes së trenit të ardhshëm nëse ora është 20.*/
/*
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class TrainSchedule {
    private:
    vector<int> departureTimes = {};
    public:

    void addDepartureTime(int ore_nisje) {
        if ((ore_nisje >= 0) && (ore_nisje < 24))
        {
            departureTimes.push_back(ore_nisje);
        }
    }

    int findNextDeparture(int ora_tash) {
        int tash = 25;

        for (int i = 0; i < departureTimes.at(i); i++)
        {
            if ((departureTimes.at(i) > ora_tash) && (departureTimes.at(i) < tash))
            {
                tash = departureTimes[i];
            }
            
            if (tash == 25) 
            {
                cout << "S'ka ma autobus per sot! " << endl;
                return -1;
            }
            
        }
        
        return tash;
    }

    void printSchedule(int ora_tash) {

    }
};

int main() {

}*/

/*
6. [5 pikë] Të shkruhet një program në C++ për menaxhimin e temperaturave ditore.

a. [1 pikë] Të definohet një klasë TemperatureTracker që përmban një vektor temperatures ku secili element përfaqëson temperaturën e një dite.

b. [1 pikë] Të shtohet një metodë addTemperature që shton një temperaturë të re në vektor.

c. [2 pikë] Të shtohet një metodë findMaxTemperature që gjen dhe kthen temperaturën më të lartë në vektor.

d. [1 pikë] Të shtohet një metodë printTemperatures që shtyp të gjitha temperaturat.*/
/*
#include <iostream>
#include <vector>
using namespace std;

class TemperatureTracker{
    private:
    vector<int> Temperatures = {};
    public:

    void addTemperature() {
        int temperature;
        while (true)
        {
            cout << "Shtojeni nje temperature ne mes te -100 dhe 100 grade celcius: " << endl;
            cin >> temperature;

            if((temperature <= 100) && (temperature >= -100)){
                Temperatures.push_back(temperature);
                break;
            } else {
                cout << "Provoni perseri: " << endl;
            }
        }
    }

    int maxTemperature() {
        int max = Temperatures[0];
        for (int i = 0; i < Temperatures.size(); i++)
        {
            if(Temperatures.at(i) > max) {
                max = Temperatures.at(i);
            }
        }
        
        return max;
    }

    void printTemperatures() {
        for (int i = 0; i < Temperatures.size(); i++)
        {
            cout << (i + 1) << ". " << Temperatures.at(i) << endl;
        }
    }
};

int main() {
    TemperatureTracker TT;

    TT.addTemperature();
    TT.addTemperature();
    TT.addTemperature();
    TT.addTemperature();
    cout << "Temperatura maksimale eshte: " << TT.maxTemperature() << endl;
    TT.printTemperatures();

    return 0;
}*/

/*
7. [7 pikë] Të shkruhet një program në C++ për menaxhimin e orareve të fluturimeve.

a. [1 pikë] Të definohet një klasë FlightSchedule që përmban një vektor departureTimes ku secili
 element përfaqëson orën e nisjes së një fluturimi në formatin 24-orësh.

b. [1 pikë] Të shtohet një metodë addDepartureTime që pranon një parametër (int hour) dhe e shton atë në vektor vetëm nëse
 është në intervalin [0, 23].

c. [3 pikë] Të shtohet një metodë findNextDeparture që:
   - pranon si parametër orën aktuale (int currentTime)
   - gjen dhe kthen orën më të afërt të nisjes që është më e madhe se currentTime
   - nëse nuk ekziston një e tillë:
        - të shtypet "Nuk ka më fluturime sot"
        - të kthehet -1

d. [2 pikë] Të shtohet një metodë printSchedule që:
   - shtyp të gjitha oraret e nisjeve
   - nëse currentTime >= 18:
        - të thërrasë findNextDeparture
        - dhe të shtypë rezultatin në formën:
          "Fluturimi i ardhshëm niset në: X"
        - ose mesazhin përkatës nëse nuk ka*/
/*
#include <iostream>
#include <vector>
using namespace std;

class FlightSchedule{
    private:
    vector<int> departureTimes = {};
    public:

    void addDepartureTime(int hour) {
        while(true){
            cout << "Vendose nje shume ketu: " << endl;
            cin >> hour;

            if ((hour <= 23) && (hour >= 0))
            {
                departureTimes.push_back(hour);
                break;
            } else {
                cout << "Mos bo ksi gabime! " << endl;
                continue;
            }
        }
    }

    int findNextDeparture(int currentTime) {
        int koha = 24;
        for (int i = 0; i < departureTimes.size(); i++)
        {
            if ((departureTimes.at(i) < koha) && (departureTimes.at(i) > currentTime))
            {
                koha = departureTimes.at(i);
            }
        }

        if(koha == 24) {
            cout << "Nuk ka autobusa ma na falni" << endl;
            return -1;
        } else {
            return koha;
        }
    }

    void printSchedule(int currentTime) {
        for (int i = 0; i < departureTimes.size(); i++)
        {
            cout << departureTimes.at(i) << endl;
        }

        if (currentTime >= 18) 
        {
            int time = findNextDeparture(currentTime);

            if(time != -1) {
                cout << "Autobusi niset edhe: " << findNextDeparture(currentTime) << endl;
            }
        }
    }
};

int main() {
    int ora;//int hour//

    FlightSchedule fs;

    fs.addDepartureTime(ora);
    fs.addDepartureTime(ora);
    fs.addDepartureTime(ora);
    fs.addDepartureTime(ora);
    
    int tryIt = fs.findNextDeparture(17);

    if (tryIt != -1)
    {
        cout << "Nisja behet ne: " << fs.findNextDeparture(17);
    }    

    fs.printSchedule(17);

    return 0;
}*/

/*
8. [8 pikë] Të shkruhet një program në C++ për menaxhimin e orareve të autobusëve.

a. [1 pikë] Klasa BusSchedule me vector<int> departureTimes.

b. [1 pikë] addDepartureTime(int hour).

c. [3 pikë] findNextDeparture(int currentTime).

d. [2 pikë] printSchedule(int currentTime).

e. [1 pikë BONUS] Të shtohet një metodë:
   int countDeparturesAfter(int currentTime);

   që kthen sa autobusa nisen pas currentTime.*/


/*1. [3 pikë] Duke përdorur stack, shkruani një program që:
- merr një string (p.sh. "hello")
- e printon të përmbysur duke përdorur stack
*/
/*
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> name = {};
    string emri;
    cout << "Qysh e keni emirn: " << endl;
    cin >> emri;

    for (int i = 0; i < emri.length(); i++)
    {
        name.push(emri[i]);
    }

    while(!name.empty()) {
        cout << name.top();
        name.pop();
    }
    return 0;
}*/

/*
2. [3 pikë] Duke përdorur queue, shkruani një program që:
- shton 5 numra në queue
- i heq dhe i printon në të njëjtin rend (FIFO)*/
/*
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> shtim = {};
    shtim.push(5);
    shtim.push(10);
    shtim.push(20);
    shtim.push(40);
    shtim.push(80);

    while(!shtim.empty()) {
        cout << shtim.front() << endl;
        shtim.pop();
    }
    return 0;
}*/

/*
3. [4 pikë] Duke përdorur priority_queue, shkruani një program që:
- shton 5 numra
- printon numrin më të madh
- pastaj e largon atë dhe printon numrin tjetër më të madh*/

/*
#include <iostream>
#include <iomanip>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> shtime = {};

    shtime.push(10);
    shtime.push(20);
    shtime.push(30);
    shtime.push(50);
    shtime.push(70);

    int ma_i_madhi = shtime.top();
    cout << "Numri ma i madh eshte: " << ma_i_madhi << endl;
    shtime.pop();

    int i_dyti = shtime.top();
    cout << "Numri i dyte ma i madhe eshte: " << i_dyti << endl;
    shtime.pop();
    
    return 0;
}*/

/*
6. [6 pikë] Menaxhimi i kerkesave ne sistemet kompjuterike
a. [2 pikë] Shkruani një klasë RequestManager që përdor anëtarin priority_queue<int> për të trajtuar kërkesat e
ndryshme bazuar në prioritetin e tyre.
b. [2 pikë] Shkruani metodën addRequest, e cila merr një numër të plotë si prioritetin e kërkesës dhe e shton atë
në queue.
c. [2 pikë] Shkruani metodën processRequest, e cila largon dhe kthen kërkesën me prioritetin më të lartë nga
radha.*/
/*
#include <iostream>
#include <queue>
using namespace std;

class RequestManager {
    private:
    priority_queue<int> prioritet = {};
    public:

    void addRequest(int numer) {
        prioritet.push(numer);
    }

    int processRequest() {
        int the_highest = prioritet.top();
        prioritet.pop();

        return the_highest;
    }
};

int main() {
    RequestManager RM;

    RM.addRequest(7);
    RM.addRequest(9);
    RM.addRequest(20);
    RM.addRequest(40);
    RM.addRequest(100);

    cout << "Numri me i larte eshte: " << RM.processRequest();
    return 0;
}*/

/*
a. Të definohet funksioni krijoStack, i cili pranon 3 parametra dhe kthen si rezultat një stack me numra të plotë. 
Lista e parametrave duhet të ketë: një numër të plotë a, një numër të plotë b dhe një numër të plotë c.

b. Funksioni i definuar ka për detyrë ta krijoj një stack dhe ta mbush me "a" vlera që lexohen nga tastiera, 
të cilat janë mes vlerave të "b" dhe "c"

c. Në rast se numri i lexuar nuk është mes parametrave b dhe c, të përsëritet leximi.

d. Funksioni në fund duhet të kthej stack-un e krijuar përmes komandës return.

e. Brenda funksionit main, të thirret funksioni krijoStack me argumentet e nevojshme.

f. Brenda funksionit main, të printohen dy anëtarët e parë që janë brenda stack-ut.

a. Të definohet funksioni stackEdges, i cili pranon si parametër një strukturë stack me numra të plotë dhe 
një numër të plotë si referencë, kurse tipi kthyes është numër i plotë.

b. Funksioni i definuar në pikën a, ka për detyrë që përmes komandës return të kthej anëtarin e fundit në stack, 
kurse përmes parametrit referent anëtarin e parë në stack.

c. Brenda funksionit main, të thirret funksioni stackEdges me argumentet e nevojshme.

d. Brenda funksionit main, të printohen vlerat që kthen si rezultat funksioni stackEdges.*/
/*
#include <iostream>
#include <stack>
using namespace std;

stack<int> krijoStack(int a, int b, int c) {
    stack<int> the_Stack;
    int numer;

    for (int i = 0; i < a; i++) {
        do {
            cout << "Vendoseni nje numer: ";
            cin >> numer;
        } while (numer < b || numer > c);

        the_Stack.push(numer);
    }

    return the_Stack;
}

int main() {
    stack<int> s = krijoStack(10, 100, 200);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}*/

//Binary Search//
/*

int binarySearch(vector<int> v, int left, int right, int value) {
    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (v.at(middle) == value) {
            return middle;
        }

        if (value > v.at(middle)) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}
a) What is the best-case time complexity of the binary search algorithm?

b) For the vector {2, 5, 8, 12, 16, 23, 38}, how many iterations does the while loop execute in the worst case?

c) Trace the execution of the algorithm step-by-step when searching for the value 16, showing left, right, and middle at each step.

d) Write the main function that initializes the vector, calls binarySearch, and prints the result.

e) What does the function return if the searched value is not in the vector, and why?
                                    Pergjigjet
a)Best-Case Time complexity is O(1) whilst worst is O(n);
b)O(n)
c)Idk

d)
#include <vector>
#include <iostream>

int main() {
vector<int> v = {};
int left;
int right;
int value;
int func_val;

if(binarySearch(v,left,right,value) == value){
cout << "The middle is: " << binarySearch(v,left,right,value) << endl;
} else {
 cout << "The result is: " << binarySearch(v,left,right,value) << endl;
}
}

e)It returns -1 because it cant find it;
*/

