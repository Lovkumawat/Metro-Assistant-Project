#include <iostream>
#include <fstream>
#include <vector>
#include <conio.h>
using namespace std;

char u[15], ps[11], r1 = 201, r2 = 200, r3 = 188, r4 = 187, r5 = 205, r6 = 186, r7 = 220,
                    r8 = 202, r9 = 204, r10 = 203, r11 = 206, r12 = 185;

vector<pair<string, int>> stationDegrees = {
    {"welcome", 1},
    {"seelampur", 1},
    {"shastri park", 3},
    {"kashmere gate", 6},
    {"tis hazari", 3},
    {"pulbangash", 3},
    {"pratap nagar", 3},
    {"shastri nagar", 3},
    {"inderlok", 4},
    {"kanhaiya nagar", 3},
    {"netaji subhash place", 3},
    {"rithala", 2},
    {"madipur", 2},
    {"shivaji park", 3},
    {"punjabi bagh", 3},
    {"ashok park", 4},
    {"sat guru ram singh marg", 3},
    {"kirti nagar", 5},
    {"shadipur", 3},
    {"keshav puram", 3},
    {"patel nagar", 3},
    {"rajender place", 3},
    {"karol bagh", 4},
    {"rajiv chowk", 5},
    {"barakhamba road", 3},
    {"mandi house", 4},
    {"pragati maiden", 2},
    {"inderprastha", 3},
    {"yamuna bank", 3},
    {"vishwavidalaya", 2},
    {"vidhan sabha", 3},
    {"civil lines", 3},
    {"chandni chowk", 3},
    {"chawri bazar", 3},
    {"new delhi", 3},
    {"patel chowk", 3},
    {"central secretariat", 4},
    {"udyog bhawan", 2},
    {"lok kalyan marg", 3},
    {"jor bagh", 2},
    {"lal qila", 2},
    {"jama masjid", 2},
    {"delhi gate", 2},
    {"ito", 2},
    {"janptah", 2},
    {"khan market", 3},
    {"jl nehru stadium", 2},
    {"jangpura", 2},
    {"rajouri garden", 3},
    {"ramesh nagar", 3},
    {"moti nagar", 3}};
void exit();
void displayFunctions();
void showmap();
void home();
void cheapest();
void fastest();
void addStation();
bool havelHakimi(vector<int> &sequence);
void feasibilitycheck();

#include "setup.h"

int main()
{

    getReady();
    home();
    system("cls");
    exit();

    return 0;
}

void displayFunctions()
{
    cout << "\n";
    for (int i = 0; i < 89; i++)
        cout << r7;
    cout << endl;
    cout << "\n    " << r1 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r4 << "          JAYPEE INSTITUTE OF INFORMATION TECHNOLOGY" << endl;
    cout << "    " << r6 << " JIIT   " << r6 << " \t            FACULTY OF COMPUTER SCIENCE \n";
    cout << "    " << r2 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r3 << "                   NOIDA,UTTAR PRADESH.\n";
    cout << "                             Accredited with Grade A by NAAC,\n";
    cout << "                           Education Department, Govt. of INDIA.\n\n";
    for (int i = 0; i < 89; i++)
        cout << r7;
    cout << endl;

    ifstream ip("home.txt");
    string m;
    while (ip.eof() == 0)
    {
        getline(ip, m);
        cout << m << endl;
    }
    ip.close();

    cout << "What would you like to do ?" << endl;
    cout << "1. Display List Of Stations" << endl;
    cout << "2. See network of Stations" << endl;
    cout << "3. Complete Map of MetroLines" << endl;
    cout << "4. Cheapest way to reach your Destination" << endl;
    cout << "5. Fastest way to reach your Destination" << endl;
    cout << "6. Feasibility of a Route" << endl;
    cout << "7. Feedback / Suggestion" << endl;
    cout << "                                             -1. Add Stations(Admin Only)" << endl
         << endl;
    cout << "Press 0 to exit" << endl
         << endl;
}
void feasibilityCheck()
{
    cout << "                    ";
    for (int i = 0; i < 50; i++)
        cout << r7;
    cout << endl;
    cout << "\n                               Feasibiltiy Check for Routes" << endl;
    cout << "                    ";
    for (int i = 0; i < 50; i++)
        cout << r7;
    cout << endl;
    vector<pair<string, int>> stationDegrees = {
        {"welcome", 1},
        {"seelampur", 1},
        {"shastri park", 3},
        {"kashmere gate", 6},
        {"tis hazari", 3},
        {"pulbangash", 3},
        {"pratap nagar", 3},
        {"shastri nagar", 3},
        {"inderlok", 4},
        {"kanhaiya nagar", 3},
        {"netaji subhash place", 3},
        {"rithala", 2},
        {"madipur", 2},
        {"shivaji park", 3},
        {"punjabi bagh", 3},
        {"ashok park", 4},
        {"sat guru ram singh marg", 3},
        {"kirti nagar", 5},
        {"shadipur", 3},
        {"keshav puram", 3},
        {"patel nagar", 3},
        {"rajender place", 3},
        {"karol bagh", 4},
        {"rajiv chowk", 5},
        {"barakhamba road", 3},
        {"mandi house", 4},
        {"pragati maiden", 2},
        {"inderprastha", 3},
        {"yamuna bank", 3},
        {"vishwavidalaya", 2},
        {"vidhan sabha", 3},
        {"civil lines", 3},
        {"chandni chowk", 3},
        {"chawri bazar", 3},
        {"new delhi", 3},
        {"patel chowk", 3},
        {"central secretariat", 4},
        {"udyog bhawan", 2},
        {"lok kalyan marg", 3},
        {"jor bagh", 2},
        {"lal qila", 2},
        {"jama masjid", 2},
        {"delhi gate", 2},
        {"ito", 2},
        {"janptah", 2},
        {"khan market", 3},
        {"jl nehru stadium", 2},
        {"jangpura", 2},
        {"rajouri garden", 3},
        {"ramesh nagar", 3},
        {"moti nagar", 3}};

R:
    cout << "\n\nEnter the number of stations in the route(-1 for back): ";
    int n;
    cin >> n;
    if (n == -1)
    {
        system("cls");
        home();
        return;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> degreeSequence;
    cout << "Enter the names of stations in the route:\n";
    for (int i = 0; i < n; ++i)
    {
        string stationName;

        getline(cin, stationName);
        auto it = find_if(stationDegrees.begin(), stationDegrees.end(), [&stationName](const pair<string, int> &p)
                          { return p.first == stationName; });
        if (it != stationDegrees.end())
        {
            degreeSequence.push_back(it->second);
        }
        else
        {
            cout << "Invalid station name: " << stationName << endl;
            goto R;
        }
    }
    bool feasible = havelHakimi(degreeSequence);
    if (feasible)
    {
        cout << "The route is feasible according to the Havel-Hakimi theorem." << endl;
    }
    else
    {
        cout << "The route is not feasible according to the Havel-Hakimi theorem." << endl;
    }
    cout << endl
         << "Press Any key to go back.....";
    getch();
    system("cls");
    home();
}

void feedback()
{
    cout << "                              ";
    for (int i = 0; i < 50; i++)
        cout << r7;
    cout << endl;
    cout << "\n                                             Feedback Submission" << endl;
    cout << "                              ";
    for (int i = 0; i < 50; i++)
        cout << r7;
    cout << endl
         << endl;

    string user_input;
    string name;
    cout << "Enter your Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter your message: ";
    // cin.ignore();
    getline(cin, user_input);

    ofstream outfile("feedback.txt", ios::app);
    if (outfile.is_open())
    {
        outfile << "\nUser Feedback from " << name << " is: " << user_input;
        outfile.close();
        cout << "Feedback received";
        getch();
    }
    else
    {
        cerr << "Unable to write to file.";
        cout << "Unable to receive Feedback ";
        getch();
        cout << "\nPress Any key to continue.....";
    }
}

void home()
{
    displayFunctions();
    cout << "Enter Your Choice : ";
    int choice;
A:
    cin >> choice;

    switch (choice)
    {

    case 0:
        break;
    case 1:
        m.displayAll();
        break;

    case 2:
        l.displayNetwork();
        break;

    case 3:
        system("cls");
        showmap();
        break;

    case 4:
        system("cls");
        cheapest();
        break;

    case 5:
        system("cls");
        fastest();
        break;

    case 6:
        system("cls");
        feasibilityCheck();
        break;

    case 7:
        system("cls");
        feedback();
        break;

    case -1:
        system("cls");
        addStation();
        break;

    default:
        system("cls");
        displayFunctions();
        cout << "Oops!!! Invalid Input.... Enter your choice again : ";
        goto A;
    }
}

void showmap()
{
    cout << "                              ";
    for (int i = 0; i < 50; i++)
        cout << r7;
    cout << endl;
    cout << "\n                                             Metro Line Network" << endl;
    cout << "                              ";
    for (int i = 0; i < 50; i++)
        cout << r7;
    cout << endl
         << endl;
    ifstream ip("map.txt");
    string m;
    while (ip.eof() == 0)
    {
        getline(ip, m);
        cout << m << endl;
    }
    ip.close();
    cout << endl
         << "------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << endl
         << "Press any key to go back...";
    getch();
    system("cls");
    home();
}

void cheapest()
{
    cout << "                    ";
    for (int i = 0; i < 50; i++)
        cout << r7;
    cout << endl;
    cout << "\n                                 Cheapest Path Finder" << endl;
    cout << "                    ";
    for (int i = 0; i < 50; i++)
        cout << r7;
    cout << endl
         << endl;

    string src, dest;
    cin.ignore();
B:
    cout << "Enter starting station ('back' to go back): ";
    string org;
    getline(cin, src);
    org = src;
    bool digit = true;
    for (int i = 0; i < src.length(); ++i)
    {
        if (src[i] < '0' || src[i] > '9')
            digit = false;
    }

    if (digit)
    {
        if (stoi(src) >= 0 && stoi(src) <= stationIdUsed)
            src = m.stationFromId[stoi(src)];
    }

    for (int i = 0; !digit && i < src.length(); ++i)
    {
        if (src[i] >= 'A' && src[i] <= 'Z')
            src[i] += 32;
    }
    if (src == "back")
    {
        system("cls");
        home();
        return;
    }
    if (!s.find(src))
    {
        system("cls");
        cout << "Invalid Starting Location" << endl
             << endl;
        goto B;
    }

C:
    cout << "Enter destination station ('back' to go back): ";
    getline(cin, dest);

    digit = true;
    for (int i = 0; i < dest.length(); ++i)
    {
        if (dest[i] < '0' || dest[i] > '9')
            digit = false;
    }

    if (digit)
    {
        if (stoi(dest) >= 0 && stoi(dest) <= stationIdUsed)
            dest = m.stationFromId[stoi(dest)];
    }

    for (int i = 0; !digit && i < dest.length(); ++i)
    {
        if (dest[i] >= 'A' && dest[i] <= 'Z')
            dest[i] += 32;
    }
    if (dest == "back")
    {
        system("cls");
        home();
        return;
    }
    if (!s.find(dest))
    {
        system("cls");

        cout << "Invalid Destination Location" << endl
             << endl;
        cout << "Enter starting location : " << org << endl;
        goto C;
    }
    system("cls");
    l.cheapestRoute(src, dest);

    cout << endl
         << endl;

    cout << "Press any key to go back... ";
    getch();
    system("cls");
    home();
}

void fastest()
{
    cout << "                    ";
    for (int i = 0; i < 50; i++)
        cout << r7;
    cout << endl;
    cout << "\n                                 Fastest Path Finder" << endl;
    cout << "                    ";
    for (int i = 0; i < 50; i++)
        cout << r7;
    cout << endl
         << endl;

    string src, dest;
    cin.ignore();
B:
    cout << "Enter starting station ('back' to go back): ";
    string org;
    getline(cin, src);
    org = src;
    bool digit = true;
    for (int i = 0; i < src.length(); ++i)
    {
        if (src[i] < '0' || src[i] > '9')
            digit = false;
    }

    if (digit)
    {
        if (stoi(src) >= 0 && stoi(src) <= stationIdUsed)
            src = m.stationFromId[stoi(src)];
    }

    for (int i = 0; !digit && i < src.length(); ++i)
    {
        if (src[i] >= 'A' && src[i] <= 'Z')
            src[i] += 32;
    }
    if (src == "back")
    {
        system("cls");
        home();
        return;
    }
    if (!s.find(src))
    {
        system("cls");
        cout << "Invalid Starting Location" << endl
             << endl;
        goto B;
    }

C:
    cout << "Enter destination station ('back' to go back): ";
    getline(cin, dest);

    digit = true;
    for (int i = 0; i < dest.length(); ++i)
    {
        if (dest[i] < '0' || dest[i] > '9')
            digit = false;
    }

    if (digit)
    {
        if (stoi(dest) >= 0 && stoi(dest) <= stationIdUsed)
            dest = m.stationFromId[stoi(dest)];
    }

    for (int i = 0; !digit && i < dest.length(); ++i)
    {
        if (dest[i] >= 'A' && dest[i] <= 'Z')
            dest[i] += 32;
    }
    if (dest == "back")
    {
        system("cls");
        home();
        return;
    }
    if (!s.find(dest))
    {
        system("cls");

        cout << "Invalid Destination Location" << endl
             << endl;
        cout << "Enter starting location : " << org << endl;
        goto C;
    }
    system("cls");
    l.ShortestRoute(src, dest);

    cout << endl
         << endl;

    cout << "Press any key to go back... ";
    getch();
    system("cls");
    home();
}

void addStation()
{
    system("cls");
    cout << "                    ";
    for (int i = 0; i < 70; i++)
        cout << r7;
    cout << endl;
    cout << "\n                               Adding New Station to Database" << endl;
    cout << "                    ";
    for (int i = 0; i < 70; i++)
        cout << r7;
    cout << endl;
    string pass;
    cout << "Enter Password ('back' to go back): ";
    char ch = 'A';

    while (ch != 13) 
    {
        ch = getch();

        if (isprint(ch))
        {
            cout << "*";
            pass.push_back(ch);
        }

        else if (ch == 8 && pass.length()) 
        {
            pass.pop_back();
            cout << ("\b \b");
        }
    }

    if (pass == "back")
    {
        system("cls");
        home();
        return;
    }
    else if (pass != "jiit62")
    {
        system("cls");
        cout << "ERROR!!!! INVALID PASSWORD ! ";
        cout << endl
             << endl;
        cout << "Press any key to go back and try again... ";
        getch();
        addStation();
        return;
    }

    system("cls");
    cout << "***Login Successful***" << endl
         << endl;

    string name;
    cout << "Enter station Name : ";
    cin.ignore();

    getline(cin, name);
    s.addStation(name);
    m.addStationId(name);

    vector<string> color;
    string temp;
    int i = 1;

    while (i)
    {
        cout << "Enter color number " << i << " (NULL to stop entering): ";
        getline(cin, temp);
        if (temp == "NULL")
            break;
        color.push_back(temp);
        i++;
    }

    c.addColors(name, color);
    i = 1;
    int c;
    double d;
    while (i)
    {
        cout << "Enter directly connected Station number " << i << " (NULL to stop entering): ";
        if (i > 1)
            cin.ignore();
        getline(cin, temp);
        if (temp == "NULL")
            break;
        cout << "Enter cost of travel : ";
        cin >> c;
        cout << "Enter distance between stations : ";
        cin >> d;
        l.addLine(name, temp, c, d);
        i++;
    }

    cout << endl;

    cout << "Adding Station";
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < 200000000; j++)
        {
        }
        cout << ".";
    }
    cout << endl
         << endl;

    cout << "Station added successfully... " << endl;
    cout << "Press any key to go back...";
    getch();
    system("cls");
    home();
}

void exit()
{
    string m;
    ifstream ip("exit.txt");
    while (ip.eof() == 0)
    {
        getline(ip, m);
        cout << m << endl;
    }
    ip.close();
    cout << "Press any key to exit... ";
    getch();
}

// bool expandNetwork(vector<pair<string, int>> &stationDegrees)
// {
//     string stationName;
//     cout << "Enter the name of the new station: ";
//     cin >> stationName;

//     vector<int> newStationConnectivity;
//     for (const auto &station : stationDegrees)
//     {
//         int connectivity;
//         cout << "Enter the connectivity of station " << station.first << " with station " << stationName << ": ";
//         cin >> connectivity;
//         newStationConnectivity.push_back(connectivity);
//     }
//     stationDegrees.emplace_back(stationName, 0);
//     for (size_t i = 0; i < stationDegrees.size(); ++i)
//     {
//         stationDegrees.back().second += newStationConnectivity[i];
//         stationDegrees[i].second += newStationConnectivity[i];
//     }

//     vector<int> sequence;
//     for (const auto &station : stationDegrees)
//     {
//         sequence.push_back(station.second);
//     }
//     return havelHakimi(sequence);
// }

bool havelHakimi(vector<int> &sequence)
{
    sort(sequence.begin(), sequence.end(), greater<int>());
    while (!sequence.empty() && sequence.back() == 0)
    {
        sequence.pop_back();
    }
    while (!sequence.empty())
    {
        int n = sequence.size();
        int d = sequence.front();
        sequence.erase(sequence.begin());
        if (d >= n)
            return false;
        for (int i = 0; i < d; ++i)
        {
            if (sequence[i] == 0)
                return false;
            sequence[i]--;
        }
        sort(sequence.begin(), sequence.end(), greater<int>());
    }
    return true;
}
