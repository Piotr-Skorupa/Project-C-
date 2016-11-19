# Projekt C++ 
## Komunikator "Paplanina"
### Ogólny Opis Programu:
  Komunikator "Paplanina", będzie typowym komunikatorem pokroju "Gadu-Gadu". Przy rozpoczęciu przygody z programem trzeba będzie założyć konto lub się zalogować. Po pokonaniu tego etapu , pojawi się właściwe okno komunikatora z zawartością kontaktów. Kiedy znajomy będzie dostępny, to jego nick będzie napisany zielonymi literami, w przeciwnym wypadku czerwonymi. Wygląd komuniktora będzie przypominał retro-konsolowy. Czyli czarne tło i wszystko pisane na zielono. Każdy nowy użytkownik będzie posiadał 1 kontakt o nazwie "Test", który będzie zawsze online i będzie można do niego pisać o każdej porze dnia i nocy. Niestety będzie to tylko monolog ze strony użytkownika ;) Na górze okna kontaktów będzie znajdować się przycisk "dodaj kontakt" który otwiera okno w celu dodania kontaktu poprzez wpisanie jego nazwy i zatwierdzeniu przyciskiem "ok". Poza tym będzie jeszcze przycisk zamykający program. Po kliknięcu na nazwę użytownika otworzy się okno wiadomości przedielone na pół. W górnej jego połowie bedzie przechowywana dotychczasowa rozmowa oraz przycisk zamykania okna. Natomiast w dolnej jego części będzie wyświetlany tekst, który uzytkownik na bieżąco wpisuje na klawiaturze, ale wysłany dopiero po wciśnięciu klawisza "Enter" lub wciśnięcia przycisku "Wyślij". Przy otrzymaniu wiadomości będzie pojawiał się dźwięk.
###Wykorzystane narzędzia:
  Program napisany zostanie w języku C++, z wykorzystaniem, biblioteki SFML do stworzenia graficznego interfejsu. Sieć komunikacyjna opierała się będzie na serwerze lokalnym zrobionym w SFML - Network. Do stworzenia logowania użyje bazy danych w  SQLite. 

### Harmonogram Pracy:
#### Do 12.11.2016r. :
* Stworzenie servera i clienta w sfml-network

#### Do 22.11.2016r. :
* Wstępne okno widomości
* Wstępne okno kontaktów

#### Do 10.12.2016r. :
* Wstępne okno wiadomości,
* Pierwsze próby działania programu, przy dwóch kontach ( Gotowy Prototyp )

#### Do 12.01.2017r. :
* Stworzenie logowania (wliczając bazę danych)
* Dopieszczenie graficzne
* Dodanie dźwięku wiadomości
* Sprawdzanie dostępności użytkowników
* Gotowy porojekt
* Stworzona prezentacja projektu 
