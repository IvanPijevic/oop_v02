#include "app.h"

int main()
{
	double red, green, blue;

	std::cin >> red >> green >> blue;

	vsite::oop::v2::color c;
	c.set_red(red);
	c.set_green(green);
	c.set_blue(blue);

	std::cout << "Crvena: " << c.get_red() << std::endl;
	std::cout << "Zelena: " << c.get_green() << std::endl;
	std::cout << "Plava: " << c.get_blue() << std::endl;

	std::cout << "Boja: " << c.get_color_ref() << std::endl;
	std::cout << "Hexadecimalni: " << c.to_hex(c.get_color_ref());
}
