/*
Napraviti jednostavan program za prevođenje reči sa engleskog na srpski jezik.
Nakon unosa reči sa standardnog ulaza, ispisuje se prevod (ukoliko unesena reč postoji u rečniku). 

Uneti 3 engleske reči i njihove prevode na srpski.
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, string> recnik = {{"computer", "racunar"}, {"mouse", "mis"}, {"keyboard", "tastatura"}};
	string rec;
	
	while (getline(cin, rec)) {
		cout << recnik[rec] << endl;
	}
	
    return 0;
}












