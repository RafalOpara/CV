#include <iostream>
#include <string>
#include <vector>
#include <conio.h.>


void Menu();
void Start();
void Select();
void End();

void All();
void About_me();
void Experience();
void Education();
void Skills();
void Contact();
void Back_to_select();

void Menu()
{
	;
}

void Start()
{
		char st=0;
		do
		{
			st = _getch();
			switch (st)
			{
			case '1':
				Select();
				break;
			case'2':
				End();
			}
		} while (st != 27);
}

void Select()
{
		char choose=0;
		
			std::cout << std::endl;
			std::cout << "0.Mo�esz wybra� jedn� z poni�szych opcji lub wybrac '0' aby porusza� si� po poszczeg�lnych wyborach przy pomocy strza�ek" << std::endl;
			std::cout << "1.Kr�rko o mnie :)" << std::endl;
			std::cout << "2.Do�wiadczenie zawodowe" << std::endl;
			std::cout << "3.Wykszta�cenie" << std::endl;
			std::cout << "4.Umiej�tno�ci dodatkowe" << std::endl;
			std::cout << "5.Kontakt" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "6.Naci�nij Escape aby zamkn�c program" << std::endl;

			do
		{
			choose = _getch();
			switch (choose)
			{
			case'0':
				All();
				break;
			case'1':
				About_me();
				Back_to_select();
				break;
			case'2':
				Experience();
				Back_to_select();
				break;
			case'3':
				Education();
				Back_to_select();
				break;
			case'4':
				Skills();
				Back_to_select();
				break;
			case'5':
				Contact();
				Back_to_select();
				break;
			}
		} while (choose != 27);
}

void End()
{
		exit(0);
}
void All()
{
	About_me();
	int current = 0;
	while (1) {
		std::cout << "Aby przejsc dalej wybierz 1 lub 2 aby cofn��" << std::endl;
		std::cout << "Aby wyj�� naci�nij Escape" << std::endl;
		int user_action = _getch();
		if (user_action == 27)
			break;

		if (user_action != '1' && user_action != '2') {
			std::cout << "Wprowadzono b��dne polecenie";
			continue;
		}

		if (user_action == '1')
		{
			current += 1;
		}
		else if (user_action == '2')
		{
			if (current == 0)
				continue;
			else
				current -= 1;
		}

		if (current > 4)
			break;

		switch (current)
		{
		case 0:
			About_me();
			break;
		case 1:
			Experience();
			break;
		case 2:
			Education();
			break;
		case 3:
			Skills();
			break;
		case 4:
			Contact();
			break;
		}
	}

	Back_to_select();
}
void About_me()
{	
	system("cls");
	std::cout << "Witam, nazywam si� Rafa� Opara i w przysz�o�ci chcia�bym zosta� programist�." << std::endl;
	std::cout << "Od dziecka interesuj� si� technologi� i wszystkim co z ni� zwi�zane." << std::endl;
	std::cout << "Mimo,i� studia rozpoczynam dopiero teraz (rok 2022) to juz od d�u�szego czasu wiem w jakim kierunku ." << std::endl;
	std::cout << "chcia�bym si� rozwija�. Sam� nauke programowania na w�asn� r�k� rozpocz��em juz ponad roku temu i jestem przekonany" << std::endl;
	std::cout << "�e, jest to co� czym chcia�bym zajmowa� si� w przysz�o�ci." << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Jestem osob� z natury pozytywn�, kt�ra ch�tnie si� uczy i bardzo docenia do�wiadczenie koleg�w z bran�y." << std::endl;
	std::cout << "Nie brakuje mi jednak samodzielno�ci oraz samozaparcia do poszerzania wiedzy, o czym �wiadczy samodzielna nauka" << std::endl;
	std::cout << "przez wiele miesi�cy, korzystaj�c jedynie ze �r�de� dost�pnych w internecie. " << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Mojemu przysz�emu pracodawcy zagwarantowa� mog� sumienno�� w powierzonych mi obowi�zkach oraz ch�� rozwoju w firmie." << std::endl;
	std::cout << "Ch�tnie ucz� si� nowych rzeczy a wyzwania nie s� dla mnie przeszkoda." << std::endl;

	
}
void Experience()
{
		system("cls");

		std::cout<<"04.2022 � 07.2022 [4 mies.]"<<std::endl;
		std::cout << std::endl;
		std::cout<< " Sprzedawca w salonie orange / Orange / Gda�sk" << std::endl;
		std::cout <<" Kr�tki opis stanowiska :" << std::endl;
		std::cout <<" Sprzeda� us�ug oraz urz�dze�, rozmowa z klientem, rozwi�zywanie problem�w" << std::endl;
		std::cout <<" zwi�zanych z us�ugami." << std::endl;
		std::cout <<" 11.2020 � 12.2021[1 rok 2 mies.]" << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << " 11.2020 � 12.2021[1 rok 2 mies.]" << std::endl;
		std::cout << "  Specjalista do spraw tracingu operacyjnego / DPD Polska / Gda�sk " << std::endl;
		std::cout << "  Kr�tki opis stanowiska :" << std::endl;
		std::cout << "Do moich obowi�zk�w w poprzedniej pracy nale�a�o m.in. :" << std::endl;
		std::cout << "  -Korespondencja z klientami oraz innymi dzia�ami" << std::endl;
		std::cout << "  - Poprawa danych w systemie dot.dor�czenia przesy�ki do adresata " << std::endl;
		std::cout << "  - Analiza raport�w " << std::endl;
		std::cout << "- Kontrola procedury dor�czenia przesy�ek." << std::endl;
		std::cout << "  Dzi�ki moim staraniom oraz pomys�om praca w naszej firmie by�a stale" << std::endl;
		std::cout << " usprawniania."<<std::endl;

		
}
void Education()
{		
		system("cls");

		std::cout << "09.2015 � 06.2019[3 lata 10 mies.]" << std::endl;
		std::cout << std::endl;
		std::cout << "Zesp� Szk� Mechanicznych i Og�lnokszta�c�cych nr 5 w �om�y" << std::endl;
		std::cout << "Specjalizacja : Technik teleinformatyk" << std::endl;
		std::cout << "Poziom wykszta�cenia : zawodowe" << std::endl;
		std::cout << std::endl;
		std::cout << "Dodatkowe informacje :" << std::endl;
		std::cout << "Aktualnie student pierwszego roku w Wy�szej Szkole Bankowa w Gda�sku na" << std::endl;
		std::cout << "kierunku informatyka(Specjalizacja - programowanie)." << std::endl;

	
}
void Skills()
{
		system("cls");

	    std::cout << "-Sprawna obs�uga komputera" << std::endl;
		std::cout << "- Drobne naprawy w zakresie" << std::endl;
		std::cout << "systemu operacyjnego Windows 10" << std::endl;
		std::cout << "- Podstawowa znajomo�� j�zyka" << std::endl;
		std::cout << "programowania C++ / html / css" << std::endl;
		std::cout << "- Zdolno�� analizy i wyci�gania wniosk�w" << std::endl;
		std::cout << "- Dobra komunikacja z innymi lud�mi" << std::endl;
		std::cout << "zar�wno klientami jak i wsp�pracownikami" << std::endl;
		

}
void Contact()
{
		system("cls");

		std::cout << "E - mail:" << std::endl;
		std::cout << "opararafal2@Wp.pl" << std::endl;
		std::cout << "Telefon :" << std::endl;
		std::cout << "579 030 927" << std::endl;
		std::cout << "Data urodzenia :" << std::endl;
		std::cout << "25.09.1999" << std::endl;
		std::cout << "Miejscowo�� :" << std::endl;
		std::cout << "Gda�sk" << std::endl;

	

}

void Back_to_select()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Aby kontynuowa� naci�nij Enter" << std::endl;
	while (_getch() != 13);
	system("cls");
	Select();
}