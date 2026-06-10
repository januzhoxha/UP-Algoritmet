/*
Kërkesa: Shkruaj një funksion që pranon një string dhe përdor një stack<char> për t'i kthyer shkronjat mbrapsht.
*/
/*
#include <iostream>
#include <iomanip>
#include <stack>
using namespace std;

void function(stack<char> mrapsht, string mrapsht1, int n) {
    for(int i = n - 1; i >= 0; i--) {
        mrapsht.push_back(mrapsht1.at(i));
        cout << mrapsht1.at(i);
    }
}

int main() {
    stack<char> mrapsht = {};
    string mrapsht1 = "FIEK";

    int count = mrapsht1.length();

    function(mrapsht, mrapsht1, count);

    return 0;
}*/

/*
Kërkesa: Shkruaj një funksion që kontrollon nëse kllapat në një tekst janë të hapura dhe të mbyllura saktë.
Për thjeshtësi, po supozojmë që kemi vetëm kllapa të rrumbullakta ( dhe ).*/
/*
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool kontrollaKllapave(string teksti) {
    stack<char> s;

    for (int i = 0; i < teksti.length(); i++) {
        char karakteri = teksti.at(i);
        if (karakteri == '(') {
            s.push(karakteri);
        } 
        else if (karakteri == ')') {
            if (s.empty()) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string shprehja1 = "Aura Monster()(()"; 
    string shprehja2 = "(Aura) Monster (())"; 

    if (kontrollaKllapave(shprehja1)) {
        cout << "Shprehja 1: Kllapat po pershtaten!" << endl;
    } else {
        cout << "Shprehja 1: Kllapat nuk po pershtaten!" << endl;
    }

    if (kontrollaKllapave(shprehja2)) {
        cout << "Shprehja 2: Kllapat po pershtaten!" << endl;
    } else {
        cout << "Shprehja 2: Kllapat nuk po pershtaten!" << endl;
    }

    return 0;
}

*/

/*
4. [7 pikë] Të shkruhet një program me funksionin main sipas kërkesave në vijim:
a. [2] Të deklarohet një strukturë stack e cila mund të ruajë numra jo të plotë. Të deklarohet një variabël e cila
mund të ruajë numra të plotë me emrin n dhe e cila inicializohet me vlerë nga tastiera. Për aq sa është vlera e
variablës n, të shtohen n numra të lexuar nga tastiera brenda stack-ut.
b. [3] Pas shtimit të anëtarëve në stack, të largohen vlera për aq sa është vlera e anëtarit të fundit të shtuar në të.
Në rast se vlera e tejkalon numrin e vlerave të stack, të largohen gjysma e vlerave që gjenden brenda stack-ut.
c. [2] Në fund të shtypet numri i anëtarëve të mbetur.*/
/*
#include <iostream>
#include <iomanip>
#include <stack>
#include <cmath>
using namespace std;

int main() {
    stack<double> numrat;
    int n;
    int numer;

    cout << "Jepe nje vlere per n: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter a number: " << endl;
        cin >> numer;
        numrat.push(numer);
    }

    int numri = numrat.top();
    int saMeULargu = 0;
    
    if(numri > numrat.size()) {
        saMeULargu = numrat.size() / 2;
    } else {
        saMeULargu = (int) numri;
    }

    for (int i = 0; i < saMeULargu; i++)
    {
        if (!numrat.empty())
        {
            numrat.pop();
        }   
    }
    
    return 0;
}
*/

/*
a. [2 pikë] Të deklarohet një strukturë stack e cila mund të ruajë numra të plotë (int). Të lexohet nga tastiera një 
numër $n$. Për aq sa është vlera e variablës $n$, të shtohen $n$ numra të gjeneruar automatikisht nga ky ekuacion brenda 
loop-it:$$\text{vlera} = i \times 3$$(ku $i$ fillon nga $0$ deri në $n-1$).b. [3 pikë] Pas mbushjes së stack-ut,
të kontrollohet elementi që gjendet në fund të stack-ut (elementi i parë që ka hyrë, që në këtë rast do të jetë $0$).
Nëse numri i elementeve aktuale në stack është numër çift, të fshihen të gjitha elementet nga stack-u përveç atij që është 
në majë (top()).Nëse numri i elementeve është tek, të fshihet vetëm elementi në majë (top()).
c. [2 pikë] Në fund, të shtypet numri i anëtarëve që kanë mbetur në stack dhe vlera që ndodhet aktualisht në majë 
(nëse stack-u nuk është zbrazur komplet).*/
/*
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> numrat;
    int numerimet;
    int vlerat;

    cout << "Sa numra po don me i shti: ";
    cin >> numerimet;

    for (int i = 0; i < numerimet; i++) {
        vlerat = i * 3;
        numrat.push(vlerat);
    }

    if (!numrat.empty()) {
        int majaOrigjinale = numrat.top(); 
        
        if (numrat.size() % 2 == 0) {
            while (!numrat.empty()) {
                numrat.pop();
            }
            numrat.push(majaOrigjinale);
        } 
        else {
            numrat.pop();
        }
    }

    cout << "------------------------------------" << endl;
    cout << "Numri i anetareve te mbetur: " << numrat.size() << endl;
    
    if (!numrat.empty()) {
        cout << "Vlera ne maje aktualisht: " << numrat.top() << endl;
    } else {
        cout << "Stack-u eshte komplet i zbrazet!" << endl;
    }

    return 0;
}
*/

/*
a. [2 pikë] Të deklarohet një strukturë stack e cila mund të ruajë numra të plotë (int). Të lexohet nga tastiera një numër $n$.
Për aq sa është vlera e variablës $n$, të shtohen $n$ numra të gjeneruar automatikisht nga ky ekuacion brenda loop-it:
$$\text{vlera} = (i \times 2) + 5$$(ku $i$ fillon nga $0$ deri në $n-1$).b. [3 pikë] Pas mbushjes së stack-ut, të kontrollohet 
elementi që gjendet në majë (top()).Nëse kjo vlerë është numër i plotë që pjesëtohet me 3 pa mbetje, të fshihen vetëm 2 elementet
e para në majë të stack-ut.Përndryshe, të fshihet gjysma e elementeve aktuale të stack-ut.c. [2 pikë] Në fund, të shtypet numri
i anëtarëve që kanë mbetur në stack dhe vlera që ndodhet aktualisht në majë.*/
/*
#include <iostream>
#include <iomanip>
#include <stack>
using namespace std;

int main() {
    stack <int> numrat_e_duhura;
    int n;

    int gjysma = (double) n / 2;

    cout << "Vendose nje vlere: " << endl;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int ekuacioni = (i * 2) + 5;
        numrat_e_duhura.push(ekuacioni);
    }

    if(!numrat_e_duhura.empty()) {
        int e_fundit = numrat_e_duhura.top();

        if(e_fundit % 3 == 0) {
            for (int i = 0; i <= 2; i++)
            {
                numrat_e_duhura.pop();
            }
        } else {
            for (int i = 0; i < gjysma; i++)
            {
                numrat_e_duhura.pop();
            }
        }
    }

    cout << "Numri i anetareve te mbetur eshte: " << numrat_e_duhura.size() << endl;
    
    cout << "Vlera ne top eshte: " << numrat_e_duhura.top() << endl;

    return 0;
}*/

/*
a. [2 pikë] Të deklarohet një stack<int> biletat. Të lexohet nga tastiera numri $n$. Për aq sa është vlera e $n$, 
të shtohen $n$ numra të plotë nga tastiera brenda në stack (këta numra paraqesin kodet e biletave).
b. [3 pikë] Pas mbushjes, të krijohet një stack i dytë ndihmës me emrin biletat_VIP. 
Të bëhet shfletimi i stack-ut të parë dhe të gjitha biletat që kanë vlerë më të madhe se 100 dhe janë numra çift të zhvendosen
te biletat_VIP. Biletat e tjera që nuk e plotësojnë këtë kusht duhet të fshihen komplet nga memorie.(Kujdes: Në fund të këtij
procesi, stack-u origjinal biletat duhet të mbetet i zbrazët).
c. [2 pikë] Në fund, të shtypet numri i biletave që kanë kaluar te biletat_VIP. Nëse ky stack nuk është i zbrazët, 
të shtypet edhe kodi i biletës VIP që ndodhet në majë të tij.*/
/*
#include <iostream>
#include <iomanip>
#include <stack>
#include <cmath>
using namespace std;

int main() {
    stack<int> biletat;
    int n;
    int numrat;

    cout << "Vendose nje vlere: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Vendosi nje varg numrash: " << endl;
        cin >> numrat;
        biletat.push(numrat);
    }
    
    stack <int> biletat_VIP;

    for (int i = 0; i < n; i++)
    {
        int vlera = biletat.top();
        biletat.pop();

        if((vlera >= 100) && (vlera % 2 == 0)) {
            biletat_VIP.push(vlera);
        }
    }

    cout << "Numri i biletave qe kane kaluar ne bileta_VIP eshte: " << biletat_VIP.size() << endl;

    if(!biletat_VIP.empty()) {
        cout << "On top stands: " << biletat_VIP.top();
    }

    return 0;
}*/


/*                                    QUEUE-SECILI LLOJ                       */

/*
a. Të definohet funksioni f1, i cili nuk kthen rezultat (void). Si parametra pranon një radhë me numra të plotë queue<int> q dhe një numër të plotë si referencë me emrin rezultati.

b. Funksioni ka për detyrë të gjejë anëtarin e parë në radhë (atë që është në fillim) dhe ta ruajë atë vlerë te parametri rezultati.

c. Brenda funksionit main, të deklarohet një radhë me numra të plotë, të shtohen 3 numra brenda saj (p.sh. 10, 20, 30), dhe të deklarohet një variabël int res = 0;.

d. Të thirret funksioni f1 duke ia kaluar radhën dhe variablën res. Në fund, të printohet vlera e res.*/
/*
#include <iostream>
#include <queue>
#include <iomanip>
#include <cmath>
using namespace std;

void f1(queue<int> q, int &rezulltati) {
    rezulltati = q.front();

    cout << "Rezulltati eshte: " << rezulltati;

}

int main() {
    queue<int> q;
    int res = 0;
    q.push(10);
    q.push(20);
    q.push(30);

    f1(q, res);

    return 0;
}*/

/*
a. [2 pikë] Të definohet funksioni filtroRadhen, i cili nuk kthen rezultat (void). 
Si parametra pranon një radhë me numra të plotë queue<int> q dhe një radhë tjetër si referencë queue<int> &rezultati.

b. [3 pikë] Funksioni ka për detyrë të shfletojë radhën q. 
Të gjithë numrat që janë më të mëdhenj se 0 duhet të shtohen tek radha rezultati, 
ndërsa numrat negativë ose zero duhet të injorohen (të fshihen). Çfarëdo modifikimi në radhën q nuk duhet të reflektohet në main.

c. [2 pikë] Në funksionin main të deklarohet një radhë dhe të mbushet me vlerat: {12, -5, 0, 8, -3, 25}.
Të thirret funksioni filtroRadhen duke ia kaluar këtë radhë dhe një radhë të re të zbrazët q_filtri. 
Në fund, të printohen me cout të gjitha elementet e mbetura te q_filtri duke i nxjerrë një nga një.*/
/*
#include <iostream>
#include <queue>

using namespace std;

void filtroRadhen(queue<int> q, queue<int> &rezultati) {
    while (!q.empty()) {
        int vlera = q.front();
        q.pop();

        if (vlera > 0) {
            rezultati.push(vlera);
        }
    }
}

int main() {
    queue<int> vlerat_origjinale;
    queue<int> q_filtri;

    vlerat_origjinale.push(12);
    vlerat_origjinale.push(-5);
    vlerat_origjinale.push(0);
    vlerat_origjinale.push(8);
    vlerat_origjinale.push(-3);
    vlerat_origjinale.push(25);

    filtroRadhen(vlerat_origjinale, q_filtri);

    while (!q_filtri.empty()) {
        cout << q_filtri.front() << " ";
        q_filtri.pop();
    }
    
    cout << endl;

    return 0;
}*/

/*
a. [2 pikë] Të definohet funksioni gjejCift, i cili nuk kthen rezultat (void). 
Si parametra pranon një radhë me numra të plotë queue<int> q dhe një radhë tjetër si referencë queue<int> &rezultati.

b. [3 pikë] Funksioni ka për detyrë të shfletojë radhën q. 
Të gjithë numrat që janë çift dhe më të mëdhenj se 10 duhet të shtohen tek radha rezultati. 
Numrat e tjerë të injorohen. Modifikimet në q nuk duhet të ndikojnë në main.

c. [2 pikë] Në funksionin main të deklarohet një radhë dhe të mbushet me vlerat: {4, 12, 7, 22, 10, 30}.
Të thirret funksioni gjejCift duke ia kaluar këtë radhë dhe një radhë të re të zbrazët q_cift.
Në fund, të printohen me cout të gjitha elementet e q_cift duke i nxjerrë një nga një me loop.*/

/*
#include <iostream>
#include <iomanip>
#include <cmath>
#include <queue>
using namespace std;

void gjejCift(queue<int> q, queue<int>&rezultati) {
    while(!q.empty()) {
        int vlera = q.front();
        q.pop();

        if ((vlera > 10) && (vlera % 2 == 0)) 
        {
            rezultati.push(vlera);
        }
    }
}

int main() {
    queue<int> radhe;

    radhe.push(4);
    radhe.push(12);
    radhe.push(7);
    radhe.push(22);
    radhe.push(10);
    radhe.push(30);
    
    queue <int> q_cift;

    gjejCift(radhe, q_cift);

    while(!q_cift.empty()) {
        cout << q_cift.front() << endl;
        q_cift.pop();
    }
    
    return 0;
}*/


/*
5. [7 pikë] Të definohet klasa QueueProcessor sipas kërkesave në vijim:
a. [2] Klasa duhet të ketë si anëtar privat një rresht me numra të plotë. Në pjesën publike duhet të ketë një
konstruktor me një parametër të tipit int. Vlera e parametrit të konstruktorit duhet të shtohet në rreshtin që
gjendet brenda klasës.
b. [3] Klasa duhet të ketë metodën add, e cila pranon si parametra dy numra të plotë. Parametri i parë paraqet
numrin që duhet të shtohet në rresht, kurse parametri i dytë paraqet se sa herë duhet të shtohet ai numër në
rresht. Pas shtimit, metoda duhet të kthejë si rezultat numrin e anëtarëve që gjenden në rresht.
c. [2] Klasa të ketë metodën process , e cila nuk pranon parametra dhe nuk kthen rezultat. Metoda duhet që të
largojë një anëtar nga rreshti. Në rastin kur rreshti mbetet i zbrazët, duhet të shtojë numrin 1 në rresht.*/
/*
#include <iostream>
#include <iomanip>
#include <queue>
#include <cmath>
using namespace std;

class QueueProcessor {
private:
    queue<int> numra;

public:
    QueueProcessor(int parameter) {
        numra.push(parameter);
    }

    int add(int numri, int saHere) {
        for (int i = 0; i < saHere; i++) {
            numra.push(numri);
        }
        return numra.size();
    }

    void process() {
        if (!numra.empty()) {
            numra.pop();
        }
        
        if (numra.empty()) {
            numra.push(1);
        }
    }
};

int main() {
    return 0;
}*/


/*
a. [2 pikë] Të definohet klasa QueueManager. Klasa duhet të ketë si anëtar privat një rresht me numra të plotë (queue<int> rreshti)
. Në pjesën publike duhet të ketë një konstruktor me një parametër të tipit int. Vlera e këtij parametri duhet të shtohet 
(të bëhet push) brenda rreshtit të klasës.

b. [3 pikë] Klasa duhet të ketë metodën multiInsert, e cila pranon dy parametra: int vlera dhe int heret.
Metoda duhet ta shtojë numrin vlera në rresht saktësisht aq herë sa thotë parametri heret.
Në fund, metoda duhet të kthejë si rezultat vlerën që ndodhet në fillim të rreshtit (front()).

c. [2 pikë] Klasa të ketë metodën clean, e cila nuk pranon parametra dhe nuk kthen rezultat (void).
Metoda duhet të largojë dy elemente nga rreshti (nëse ka elemente). 
Nëse pas këtij veprimi rreshti mbetet i zbrazët, metoda duhet ta shtojë numrin 99 automatikisht në rresht.*/
/*
#include <iostream>
#include <iomanip>
#include <queue>
#include <cmath>
using namespace std;

class QueueManager {
    private:
    queue<int> rreshti;
    public:
    QueueManager(int parameter){
        rreshti.push(parameter);
    }

    int multiInsert(int vlera, int heret) {
        for (int i = 0; i < heret; i++)
        {
            rreshti.push(vlera);
        }

        return rreshti.front();
    }

    void clean() {
        for (int i = 0; i < 2; i++) {
            if (!rreshti.empty()) {
                rreshti.pop();
            }
        }

        if(rreshti.empty()) {
            rreshti.push(99);
        }
    }
};

int main() {
    return 0;
}*/

/*
a. [2 pikë] Të definohet klasa PriorityManager.
Klasa duhet të ketë si anëtar privat një radhë me prioritet me numra të plotë (priority_queue<int> pq). 
Në pjesën publike duhet të ketë një konstruktor me një parametër të tipit int. 
Vlera e këtij parametri duhet të shtohet (të bëhet push) brenda radhës me prioritet të klasës.

b. [3 pikë] Klasa duhet të ketë metodën insertAndCheck, e cila pranon si parametër një numër të plotë int vlera. 
Metoda duhet ta shtojë këtë vlerë në pq. 
Pas shtimit, metoda duhet të kthejë si rezultat vlerën që ndodhet aktualisht në majë të radhës me prioritet. 
(Kujdes: te priority_queue përdoret .top() për ta parë elementin në majë, e jo .front()).

c. [2 pikë] Klasa të ketë metodën removeMax, e cila nuk pranon parametra dhe nuk kthen rezultat (void). 
Metoda duhet të largojë elementin me prioritetin më të lartë (atë në majë). 
Kujdes: fshirja duhet të bëhet vetëm nëse radha nuk është e zbrazët. 
Nëse pas fshirjes radha mbetet krejtësisht e zbrazët, metoda duhet të shtojë automatikisht numrin 100 në radhë.*/
/*
#include <iostream>
#include <iomanip>
#include <queue>
#include <cmath>
using namespace std;

class PriorityManager {
    private:
    priority_queue<int> pq;
    public:
    PriorityManager(int parameter) {
        pq.push(parameter);
    }

    int insertAndCheck(int vlera) {
        pq.push(vlera);
        int maja = pq.top();

        return maja;
    }

    void removeMax() {
        if(!pq.empty()) {
            pq.pop();
        }

        if(pq.size() == 0) {
            pq.push(100);
        }
    }
};

int main() {
    return 0;
}*/


/*                                  Listat e Lidhura                    */

/*
a. [0.5 pikë] Të deklarohet një listë e cila mund të ruaj numra jo të plotë

b. [1 pikë] Të lexohen 6 numra jo të plotë nga tastiera

c. [1 pikë] Përgjatë leximit të numrave, nëse numri i lexuar është në rangun 2.0 – 2.9, numri të shtohet në fund të listës, në të kundërt numri të shtohet në fillim

d. [1.5 pikë] Pas mbushjes së listës me numra, të largohen nga lista vetëm numrat që gjenden në rangun 2.0 – 2.9 dhe të printohen numrat e larguar.

e. [1 pikë] Të printohen vlerat e mbetura brenda listës.*/
/*
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> listat;
    double numri;

    for(int i = 0; i < 6; i++) {
        cout << "Jepni numrin " << i + 1 << ": ";
        cin >> numri;
        
        if(numri >= 2.0 && numri <= 2.9) {
            listat.push_back(numri);
        } else {
            listat.push_front(numri);
        }
    }
    
    cout << "\nNumrat e larguar: ";
    auto it = listat.begin();
    while (it != listat.end()) {
        if (*it >= 2.0 && *it <= 2.9) {
            cout << *it << " ";
            it = listat.erase(it);
        } else {
            it++;
        }
    }
    cout << endl;

    cout << "Vlerat e mbetura ne liste: ";
    for (auto vlerat : listat) {
        cout << vlerat << " ";
    }
    cout << endl;
    
    return 0;
}*/

/*
a. [2 pikë] Të definohet funksioni void printo(list l), i cili printon elementet brenda një liste të lidhur.

b. [5 pikë] Të definohet funksioni void modifiko, i cili pranon një listë me numra të plotë dhe një parametër tjetër të tipit karakter me emër operacioni.
Në rast se vlera e parametrit operacioni është ‘F’, të largohet elementi i cili gjendet në fillim të listës së lidhur. 
Në rast se vlera e parametrit operacioni është ‘B’, të largohet elementi i cili gjendet në fund të listës së lidhur. 
Në rastin kur vlera e parametrit operacioni është ‘R’, të ndryshojë radhitja e elementeve nga fundi në fillim.

c. [1 pikë] Brenda funksionit main, të deklarohet një listë e lidhur e cila mund të ruaj numra të plotë dhe një variabël tjetër madhësia,
që po ashtu ruan një numër të plotë.

d. [2 pikë] Të lexohet vlera e variablës madhësia nga tastiera, e cila përcakton se sa numra do të lexohen nga tastiera dhe të shtohen brenda listës së lidhur.

e. [2 pikë] Pas mbushjes së listës së lidhur me vlera të thirret për secilin nga operatorët e mundshëm funksioni modifiko, ku pas secilit modifikim thirret edhe funksioni printo.*/
/*
#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
using namespace std;

void printo(list<int> l) {
    for (auto vlerat : l) {
        cout << vlerat << " ";
    }
    cout << endl;
}

void modifiko(list<int> &numra, char operacioni) {
    if(operacioni == 'F') {
        numra.pop_front();
    } if(operacioni == 'B') {
        numra.pop_back();
    } if(operacioni == 'R') {
        numra.reverse();
    }
}

int main() {
    list<int> numra;
    int madhesia;
    int enter;
    
    cout << "Sa numra don qe te lexohen: " << endl;
    cin >> madhesia;

    for (int i = 0; i < madhesia; i++)
    {
        cout << "Enter a value: " << endl;
        cin >> enter;
        numra.push_back(madhesia);
    }
    
    cout << "Vlerat fillestare: " << endl;
    printo(numra);

    cout << "Vlera pasi te preket F: " << endl;
    modifiko(numra, 'F');
    printo(numra);

    cout << "Vlera pasi te prekt B: " << endl;
    modifiko(numra, 'B');
    printo(numra);

    cout << "Vlera pasi te preket R: " << endl;
    modifiko(numra, 'R');
    printo(numra);

    return 0;
}*/


/*
a. [2 pikë] Të definohet struktura (ose klasa) Student e cila përmban këto të dhëna: id (numër i plotë), emri (string), dhe gpa
(numër jo i plotë/double).
b. [2 pikë] Të definohet funksioni void shtoStudent(list<Student> &lista), 
i cili lexon nga tastiera të dhënat për $N$ studentë (numri $N$ përcaktohet nga përdoruesi) dhe i shton ata në fund të listës.
c. [3 pikë] Të definohet funksioni void filtroDheNdaj(list<Student> &origjinale, list<Student> &bursistet, double limiti). 
Ky funksion duhet të kalojë nëpër listën origjinale dhe:Nëse studenti e ka gpa më të madhe ose të barabartë me limiti, 
ai student duhet të hiqet nga lista origjinale dhe të shtohet në fillim të listës së re bursistet.
Nëse studenti ka gpa më të vogël se limiti, ai mbetet në listën origjinale, por id-ja e tij duhet të rritet për $+1000$ 
(si shenjë që nuk ka përfituar bursë).Kujdes: Fshirja nga lista origjinale duhet të bëhet duke përdorur iteratorë në mënyrë të
saktë pa shkaktuar runtime error.d. [1.5 pikë] Të definohet një funksion gjenperëndues (generic)
ose i thjeshtë void printoListe(const list<Student> &lista, string titulli) që printon në mënyrë të formatuar të gjithë 
studentët e një liste (id, emrin, dhe gpa).
e. [1.5 pikë] Brenda funksionit main:Të deklarohen dy listat e nevojshme.
Të thirret funksioni për mbushjen e listës origjinale.Të lexohet limiti i GPA-së nga tastiera (p.sh. 9.0).
Të thirret funksioni filtroDheNdaj.Të printohen të dyja listat përfundimtare për të parë rezultatin.*/
/*
#include <iostream>
#include <list>
#include <string>

using namespace std;

struct Student {
    int id;
    string emri;
    double gpa;
};

void shtoStudent(list<Student> &lista) {
    int n;
    cout << "Sa studente dëshironi të shtoni: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Student s;
        cout << "Jepni ID, Emrin dhe GPA për studentin " << i + 1 << ":\n";
        cin >> s.id >> s.emri >> s.gpa;
        lista.push_back(s);
    }
}

void filtroDheNdaj(list<Student> &origjinale, list<Student> &bursistet, double limiti) {
    auto it = origjinale.begin();
    
    while (it != origjinale.end()) {
        if (it->gpa >= limiti) {
            bursistet.push_front(*it);
            it = origjinale.erase(it);
        } else {
            it->id += 1000;
            it++;
        }
    }
}

void printoListe(const list<Student> &lista, string titulli) {
    cout << "\n--- " << titulli << " ---\n";
    if (lista.empty()) {
        cout << "Lista është e zbrazët.\n";
        return;
    }
    for (const auto &s : lista) {
        cout << "ID: " << s.id << " | Emri: " << s.emri << " | GPA: " << s.gpa << "\n";
    }
}

int main() {
    list<Student> origjinale;
    list<Student> bursistet;
    double limiti;

    shtoStudent(origjinale);

    cout << "\nShkruani limitin e GPA për bursë: ";
    cin >> limiti;

    filtroDheNdaj(origjinale, bursistet, limiti);

    printoListe(bursistet, "STUDENTËT BURSISET (GPA >= " + to_string(limiti).substr(0, 4) + ")");
    printoListe(origjinale, "LISTA ORIGJINALE E MODIFIKUAR");

    return 0;
}*/

/*
a. [2 pikë] Të definohet struktura Porosia e cila përmban: id (numër i plotë), produkti (string), cmimi (double), 
dhe statusi (karakter: 'P' për në pritje, 'D' për të dërguar).
b. [2 pikë] Të definohet funksioni void shtoPorosi(list<Porosia> &lista), i cili pyet përdoruesin se sa porosi dëshiron t'i
regjistrojë, i lexon ato nga tastiera dhe i shto në fund të listës.
c. [3.5 pikë] Të definohet funksioni double procesoPorosite(list<Porosia> &nePritje, list<Porosia> &teDerguara, 
double limitiCmimit). 
Ky funksion duhet të kalojë nëpër listën nePritje duke përdorur iteratorë dhe:Nëse porosia e ka çmimin më të madh se limitiCmimit, 
statusi i saj duhet të ndryshojë në 'D',
duhet të hiqet nga lista nePritje dhe të shtohet në fund të listës teDerguara.
Nëse porosia e ka çmimin më të vogël ose të barabartë me limitiCmimit, 
ajo mbetet në listën nePritje, por çmimit të saj i shtohet $+5.0$ (si kosto e transportit).
Funksioni në fund duhet të kalkulojë dhe të kthejë (return) vlerën totale të të gjitha porosive që u zhvendosën te 
lista teDerguara.
d. [1.5 pikë] Të definohet funksioni void printoPorosite(const list<Porosia> &lista, string titulli)
i cili i printon të gjitha porositë në mënyrë të formatuar.
e. [1 pikë] Brenda funksionit main:Të deklarohen listat e nevojshme.
Të thirret funksioni për mbushjen e listës së porosive në pritje.
Të lexohet limiti i çmimit nga tastiera.Të thirret funksioni procesoPorosite dhe të ruhet vlera e kthyer në një variabël totali.
Të printohen të dyja listat dhe në fund të shfaqet vlera totale e porosive të dërguara.
Kjo të ndihmon me u ushtru edhe me pjesën e kalkulimit (mbledhjes së vlerave) dhe kthimit të një rezultati nga funksioni (return).
*/
/*
#include <iostream>
#include <list>
#include <string>
using namespace std;

struct Porosia {
    int id;
    string produkti;
    double cmimi;
    char statusi;
};

void shtoPorosi(list<Porosia> &lista) {
    int n;
    cout << "Sa porosi deshironi t'i shtoni: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Porosia p;
        cout << "Jepni ID, produktin, cmimin dhe statusin (P/D) " << i + 1 << ":\n";
        cin >> p.id >> p.produkti >> p.cmimi >> p.statusi;
        lista.push_back(p);
    }
}

double procesoPorosite(list<Porosia> &nePritje, list<Porosia> &teDerguara, double limitiCmimit) {
    auto it = nePritje.begin();
    double shumaTotale = 0;

    while (it != nePritje.end()) {
        if (it->cmimi > limitiCmimit) {
            it->statusi = 'D';
            shumaTotale += it->cmimi;
            teDerguara.push_back(*it);
            it = nePritje.erase(it);
        } else {
            it->cmimi += 5.0;
            it++;
        }
    }
    return shumaTotale;
}

void printoPorosite(const list<Porosia> &lista, string titulli) {
    cout << "\n--- " << titulli << " ---\n";
    for (const auto &p : lista) {
        cout << "ID: " << p.id << " | Produkti: " << p.produkti 
             << " | Cmimi: " << p.cmimi << " | Statusi: " << p.statusi << endl;
    }
}

int main() {
    list<Porosia> nePritje;
    list<Porosia> teDerguara;
    double limiti;

    shtoPorosi(nePritje);

    cout << "\nShkruani limitin e cmimit: ";
    cin >> limiti;

    double totali = procesoPorosite(nePritje, teDerguara, limiti);

    printoPorosite(teDerguara, "POROSITE E DERGUARA");
    printoPorosite(nePritje, "POROSITE NE PRITJE (TE MODIFIKUARA)");

    cout << "\nVlera totale e porosive te derguara: " << totali << " EUR" << endl;

    return 0;
}*/

/*
1. [8 pikë] Të shkruhet programi sipas kërkesave në vijim:
a. [1 pikë] Të definohet funksioni organizeList, që pranon si parametër një listë të lidhur me numra të plotë mainList dhe një numër
të plotë threshold, kurse tipi kthyes i funksionit është void.
b. [3 pikë] Funksioni ka për detyrë të organizojë listën sipas rregullave të mëposhtme: të gjitha vlerat që janë më të vogla se
threshold duhet të vendosen në fillim të listës, ndërsa vlerat që janë më të mëdha ose të barabarta me threshold duhet të vendosen
në fund. Gjithashtu, funksioni duhet të heqë të gjitha duplikatet që gjenden në listë. Çdo ndryshim që i ndodh listës duhet të
pasqyrohet në funksionin main.
c. [1 pikë] Brenda funksionit main, të deklarohet një listë e lidhur e dyfishtë brenda së cilës duhet të shtohen 6 numra sipas dëshirës
(duke përfshirë disa duplikate).
d. [1 pikë] Brenda funksionit main, të lexohet një numër i plotë nga tastiera i cili do të përdoret si threshold. Të thirret funksioni
organizeList me argumentet e nevojshme për listën e definuar dhe threshold-in e lexuar.
e. [2 pikë] Të shtypet lista para dhe pas thirrjes së funksionit organizeList për të parë ndryshimet.*/
/*
#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

void organizeList(list<int>&mainList, int threshold) {
    for (auto it = mainList.begin(); it != mainList.end(); it++)
    {
        if(it < threshold) {
            mainList.push_front(it);
        } else() {
            mainList.push_back(it);
        }
    }

    mainList.unique();
}

int main() {
    list<int> mainLista;

    mainLista.insert(1);
    mainLista.insert(1);
    mainLista.insert(10);
    mainLista.insert(20);
    mainLista.insert(5);
    mainLista.insert(30);

    for (auto vlerat : mainLista)
    {
        cout << vlerat << endl;
    }

    organizeList(mainLista, 5);
    for (auto pas : mainLista)
    {
        cout << pas << endl;
    }
    
    return 0;
}*/

/*
Të shkruhet programi sipas kërkesave në vijim:

a. Të deklarohet një unordered_map ku çelësi është int (ID e studentit) dhe vlera është string (emri i studentit).

b. Të regjistrohen të paktën 3 studentë duke caktuar ID dhe emër për secilin.

c. Të shtypen të gjithë studentët me ID-të dhe emrat përkatës.

d. Të mundësohet që përdoruesi të kërkojë një ID nga tastiera dhe të shfaqet emri i studentit nëse ekziston, përndryshe të shfaqet mesazh që nuk u gjet.
*/
/*
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<int, string> Studentat;
    int id;

    Studentat.insert({12345, "Januz"});
    Studentat.insert({123124, "Anis"});
    Studentat.insert({53242, "Amogus"});

    for (auto it = Studentat.begin(); it != Studentat.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    cout << "Enter an ID you wanna search for: " << endl;
    cin >> id;

    bool uGjet = false; 
    for (auto it = Studentat.begin(); it != Studentat.end(); it++) {
        if (id == it->first) {
            cout << "Emri i cilit korrespondon me ID-ne: " << it->first << " eshte: " << it->second << endl;
            uGjet = true;
            break;
        }
    }

    if (!uGjet) {
        cout << "Studenti nuk u gjet!" << endl;
    }

    return 0;
}*/

/*
Të shkruhet programi sipas kërkesave në vijim:

a. Të deklarohet një unordered_map që ruan çifte ku çelësi është string (emri) dhe vlera është int (nota).

b. Të lexohen 5 çifte (emër dhe notë) nga tastiera dhe të shtohen në unordered_map.

c. Pas leximit, të kontrollohet nëse ekziston studenti me emrin "Arber" dhe të shfaqet nota e tij nëse ekziston, përndryshe të shfaqet një mesazh që nuk ekziston.

d. Të printohen të gjithë studentët me notë më të madhe ose të barabartë me 9.

e. Të fshihet nga map studenti me emrin "Erisa" nëse ekziston.

f. Të printohen të gjitha çiftet (emër, notë) që kanë mbetur në unordered_map pas fshirjes.*/
/*
#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> studenti;
    string name;
    int nota;

    while(studenti.size() != 5) {
        cout << "Enter a name: " << endl;
        cin >> name;

        cout << "Enter a grade: " << endl;
        cin >> nota;
        
        studenti.insert({name, nota});
    }

    bool isFalse = false;


    for(auto it = studenti.begin(); it != studenti.end(); it++) {
        if(it->first == "Arber") {
            isFalse = true;
            cout << "Nota e Arberit eshte: " << it->second;
            break;
        }
    }

    if(isFalse == false) {
        cout << "Arberi nuk ekziston ne databaze!" << endl;
    } 

    for (auto it = studenti.begin(); it != studenti.end(); it++)
    {
        if (it->second >= 9) 
        {
            cout << it->first << " " << endl;
        }
    }

    studenti.erase("Erisa");

    for(auto it = studenti.begin(); it != studenti.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}*/

/*
Te numrohet sa here paraqitet secila fjale ne varg.

Të shkruhet programi sipas kërkesave në vijim:

a. Të deklarohet një unordered_map ku çelësi është string (fjala) dhe vlera është int (numri i paraqitjeve të saj).

b. Të jepet një varg fjalësh të paracaktuara në program (p.sh. {"molle", "dardhe", "molle", "qershi", "molle", "dardhe"}).

c. Për secilën fjalë në varg, të rritet numëruesi përkatës në unordered_map.

d. Të printohen të gjitha fjalët bashkë me sa herë janë paraqitur.*/

/*
#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string,int> fjalet;
}
*/
/*
Të shkruhet programi i cili numëron se sa studentë kanë marrë secilën notë (p.sh. sa studentë kanë marrë 10, sa kanë marrë 9, etj.).

a. Të deklarohet një unordered_map<int, int> ku çelësi është nota (int) dhe vlera është numri i studentëve që e kanë atë notë (int).

b. Të jepet një varg me nota të paracaktuara në program: {10, 8, 9, 10, 7, 9, 10, 8}.

c. Të kalohet nëpër varg dhe të rritet numëruesi në map për secilën notë.

d. Të printohen të gjitha notat e paraqitura dhe numri i studentëve për secilën.*/
/*
#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    unordered_map<int,int> studentat;

    vector<int> notat = {10,8,9,10,7,9,10,8};

    for(int nota : notat ) {
        studentat[nota]++;
    }

    for (auto it = studentat.begin(); it != studentat.end(); it++)
    {
        cout << "Nota: " << it->first << " eshte paraqitur: " << it->second << " here!" << endl;
    }
    
    return 0;
}*/

/*
Të shkruhet programi sipas kërkesave në vijim:

a. Të deklarohet një unordered_map që mund të ruajë emrat e kontakteve (string) si çelësa dhe numrat e telefonit (string) si vlera

b. Të lexohen 6 kontakte dhe numrat e tyre nga tastiera

c. Të modifikohen numrat e telefonit për të gjitha kontaktet që fillojnë me '04' duke shtuar prefixin '+383' në fillim dhe të printohen kontaktet e modifikuara
*/
/*
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<string, string> kontaktet;
    string emri, numri;

    for (int i = 0; i < 6; i++) {
        cout << "Shkruaj emrin " << i + 1 << ": ";
        cin >> emri;
        cout << "Shkruaj numrin e telefonit: ";
        cin >> numri;
        kontaktet[emri] = numri;
        cout << "----------------------" << endl;
    }

    for (auto it = kontaktet.begin(); it != kontaktet.end(); it++) {
        if (it->second.length() >= 2 && it->second.substr(0, 2) == "04") {
            // Ia shtojmë +383 në fillim të numrit aktual
            it->second = "+383" + it->second;
        }
    }

    cout << "\n=== LISTA E KONTAKTEVE ===" << endl;
    for (auto it = kontaktet.begin(); it != kontaktet.end(); it++) {
        cout << "Emri: " << it->first << " | Numri: " << it->second << endl; 
    }
    
    return 0;
}
*/


/*
a. Të deklarohet një unordered_map ku çelësi është emri i produktit (string), ndërsa vlera është çmimi i tij (double).

b. Të lexohen nga tastiera emrat dhe çmimet për 5 produkte.

c. Dyqani ka vendosur të bëjë një zbritje prej 10% për të gjitha produktet që e kanë çmimin më të lartë se 100 euro. Të modifikohen çmimet në map për këto produkte.

d. Të printohet lista përfundimtare e produkteve dhe çmimeve të tyre të reja.*/
/*
#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    unordered_map<string,double> produkti;
    string emri;
    int cmimet;
    double zbritja;

    for (int i = 0; i < 5; i++)
    {
        cout << "Vendose emrin e produktit: " << endl;
        cin >> emri;

        cout << "Vendose cmimin e produktit: " << endl;
        cin >> cmimet;

        produkti[emri] = cmimet;
    }

    for (auto it = produkti.begin(); it != produkti.end(); it++)
    {
        if(it->second > 100) {
            produkti[it->first] = it->second - (it->second * 0.1);
        }
    }
    
    
    for (auto it = produkti.begin(); it != produkti.end(); it++)
    {
        cout << "Emri i produktit: " << it->first << ", Cmimi i tij:  " << it->second << endl; 
    }

    return 0;
}*/

/*
a. Të deklarohet një unordered_map<string, vector<string>>. Çelësi është Emri i Grupit (p.sh. "Grupi1", "Grupi2"), ndërsa vlera është një vector me emrat e studentëve që i përkasin atij grupi.

b. Shto manualisht (pa tastierë, direkt në kod) këto të dhëna:

Në "Grupi1" shto studentët: "Agoni", "Blerta"

Në "Grupi2" shto studentët: "Dioni", "Era", "Fisniku"

c. Shkruaj një pjesë kodi që kontrollon nëse "Grupi2" ka më shumë se 2 studentë. Nëse po, të printohet mesazhi: "Grupi 2 eshte i mbingarkuar!".

d. Të printohen të gjitha grupet dhe për secilin grup të listohen emrat e studentëve që janë brenda tij.*/
/*
#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    unordered_map<string,vector<string>> studentat;

    studentat.insert({"Grupi 1",{"Agoni", "Blerta"}});
    studentat.insert({"Grupi 2", {"Dioni", "Era", "Fisniku"}});

    for (auto it = studentat.begin(); it != studentat.end(); it++)
    {
        if(it->first == "Grupi 2") {
            if(it->second.size() > 2) {
                cout << "Grupi 2 eshte i mbingarkuar!" << endl;
            }
        }
    }

    for (auto it = studentat.begin(); it != studentat.end(); it++)
    {
        cout << "Emri i grupit: " << it->first << "\n Emri i studentave: "  <<endl;
        for (const string& studenti : it->second)
        {
            cout << studenti << ", ";
        }
        
    }
    return 0;
}*/

