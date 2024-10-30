#pragma once

#include <cstdint>
#include <windows.h>
#include <algorithm>
#include <string>
#include <format>
#include <iostream>

#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
	class color
	{
	public:
		color(double red = 0, double green = 0, double blue = 0);
		double get_red() const;
		double get_green() const;
		double get_blue() const;

		void set_red(double c);
		void set_green(double c);
		void set_blue(double c);

		uint32_t get_color_ref() const;
		double get_luminance() const;
		std::string to_hex(int num);

	private:
		double m_red;
		double m_green;
		double m_blue;
	};
}
