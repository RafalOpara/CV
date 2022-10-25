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
			std::cout << "0.Mo¿esz wybraæ jedn¹ z poni¿szych opcji lub wybrac '0' aby poruszaæ siê po poszczególnych wyborach przy pomocy strza³ek" << std::endl;
			std::cout << "1.Krórko o mnie :)" << std::endl;
			std::cout << "2.Doœwiadczenie zawodowe" << std::endl;
			std::cout << "3.Wykszta³cenie" << std::endl;
			std::cout << "4.Umiejêtnoœci dodatkowe" << std::endl;
			std::cout << "5.Kontakt" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "6.Naciœnij Escape aby zamkn¹c program" << std::endl;

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
		std::cout << "Aby przejsc dalej wybierz 1 lub 2 aby cofn¹æ" << std::endl;
		std::cout << "Aby wyjœæ naciœnij Escape" << std::endl;
		int user_action = _getch();
		if (user_action == 27)
			break;

		if (user_action != '1' && user_action != '2') {
			std::cout << "Wprowadzono b³êdne polecenie";
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
	std::cout << "Witam, nazywam siê Rafa³ Opara i w przysz³oœci chcia³bym zostaæ programist¹." << std::endl;
	std::cout << "Od dziecka interesujê siê technologi¹ i wszystkim co z ni¹ zwi¹zane." << std::endl;
	std::cout << "Mimo,i¿ studia rozpoczynam dopiero teraz (rok 2022) to juz od d³u¿szego czasu wiem w jakim kierunku ." << std::endl;
	std::cout << "chcia³bym siê rozwijaæ. Sam¹ nauke programowania na w³asn¹ rêkê rozpocz¹³em juz ponad roku temu i jestem przekonany" << std::endl;
	std::cout << "¿e, jest to coœ czym chcia³bym zajmowaæ siê w przysz³oœci." << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Jestem osob¹ z natury pozytywn¹, która chêtnie siê uczy i bardzo docenia doœwiadczenie kolegów z bran¿y." << std::endl;
	std::cout << "Nie brakuje mi jednak samodzielnoœci oraz samozaparcia do poszerzania wiedzy, o czym œwiadczy samodzielna nauka" << std::endl;
	std::cout << "przez wiele miesiêcy, korzystaj¹c jedynie ze Ÿróde³ dostêpnych w internecie. " << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Mojemu przysz³emu pracodawcy zagwarantowaæ mogê sumiennoœæ w powierzonych mi obowi¹zkach oraz chêæ rozwoju w firmie." << std::endl;
	std::cout << "Chêtnie uczê siê nowych rzeczy a wyzwania nie s¹ dla mnie przeszkoda." << std::endl;

	
}
void Experience()
{
		system("cls");

		std::cout<<"04.2022 – 07.2022 [4 mies.]"<<std::endl;
		std::cout << std::endl;
		std::cout<< " Sprzedawca w salonie orange / Orange / Gdañsk" << std::endl;
		std::cout <<" Krótki opis stanowiska :" << std::endl;
		std::cout <<" Sprzeda¿ us³ug oraz urz¹dzeñ, rozmowa z klientem, rozwi¹zywanie problemów" << std::endl;
		std::cout <<" zwi¹zanych z us³ugami." << std::endl;
		std::cout <<" 11.2020 – 12.2021[1 rok 2 mies.]" << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << " 11.2020 – 12.2021[1 rok 2 mies.]" << std::endl;
		std::cout << "  Specjalista do spraw tracingu operacyjnego / DPD Polska / Gdañsk " << std::endl;
		std::cout << "  Krótki opis stanowiska :" << std::endl;
		std::cout << "Do moich obowi¹zków w poprzedniej pracy nale¿a³o m.in. :" << std::endl;
		std::cout << "  -Korespondencja z klientami oraz innymi dzia³ami" << std::endl;
		std::cout << "  - Poprawa danych w systemie dot.dorêczenia przesy³ki do adresata " << std::endl;
		std::cout << "  - Analiza raportów " << std::endl;
		std::cout << "- Kontrola procedury dorêczenia przesy³ek." << std::endl;
		std::cout << "  Dziêki moim staraniom oraz pomys³om praca w naszej firmie by³a stale" << std::endl;
		std::cout << " usprawniania."<<std::endl;

		
}
void Education()
{		
		system("cls");

		std::cout << "09.2015 – 06.2019[3 lata 10 mies.]" << std::endl;
		std::cout << std::endl;
		std::cout << "Zespó³ Szkó³ Mechanicznych i Ogólnokszta³c¹cych nr 5 w £om¿y" << std::endl;
		std::cout << "Specjalizacja : Technik teleinformatyk" << std::endl;
		std::cout << "Poziom wykszta³cenia : zawodowe" << std::endl;
		std::cout << std::endl;
		std::cout << "Dodatkowe informacje :" << std::endl;
		std::cout << "Aktualnie student pierwszego roku w Wy¿szej Szkole Bankowa w Gdañsku na" << std::endl;
		std::cout << "kierunku informatyka(Specjalizacja - programowanie)." << std::endl;

	
}
void Skills()
{
		system("cls");

	    std::cout << "-Sprawna obs³uga komputera" << std::endl;
		std::cout << "- Drobne naprawy w zakresie" << std::endl;
		std::cout << "systemu operacyjnego Windows 10" << std::endl;
		std::cout << "- Podstawowa znajomoœæ jêzyka" << std::endl;
		std::cout << "programowania C++ / html / css" << std::endl;
		std::cout << "- Zdolnoœæ analizy i wyci¹gania wniosków" << std::endl;
		std::cout << "- Dobra komunikacja z innymi ludŸmi" << std::endl;
		std::cout << "zarówno klientami jak i wspó³pracownikami" << std::endl;
		

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
		std::cout << "Miejscowoœæ :" << std::endl;
		std::cout << "Gdañsk" << std::endl;

	

}

void Back_to_select()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Aby kontynuowaæ naciœnij Enter" << std::endl;
	while (_getch() != 13);
	system("cls");
	Select();
}