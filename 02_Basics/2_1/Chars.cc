#include <iostream>

int main()
{
    char letter_a = 'A'; /* char ist 8bit und kann auch Integer speichern. Ist eigentlicht für Charakter
                            Hinterlegt ist aber auch der Dezimalwert der ASCII Tabelle (daher 65, wenn man über das
                             A hovert) */

    std::cout << letter_a << std::endl;
    std::cout << (int)letter_a << std::endl;

    char letter_a2 = letter_a + 3;

    std::cout << letter_a2 << std::endl;
    std::cout << (int)letter_a2 << std::endl;

    return 0;
}
