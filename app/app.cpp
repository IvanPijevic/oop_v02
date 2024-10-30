#include "app.h"

namespace vsite::oop::v2
{
	color::color(double red, double green, double blue) 
	{
		m_red = red;
		m_green = green;
		m_blue = blue;
	}

	double color::get_red() const 
	{
		return m_red;
	}

	double color::get_green() const 
	{
		return m_green;
	}

	double color::get_blue() const 
	{
		return m_blue;
	}

	void color::set_red(double c) 
	{
		m_red = std::clamp(c, 0.0, 1.0);
	}

	void color::set_green(double c) 
	{
		m_green = std::clamp(c, 0.0, 1.0);
	}

	void color::set_blue(double c) 
	{
		m_blue = std::clamp(c, 0.0, 1.0);
	}

	double color::get_luminance() const 
	{
		return m_red * 0.2126 + m_green * 0.7152 + m_blue * 0.0722;
	}

	uint32_t color::get_color_ref() const
	{
		return RGB(m_red * 255, m_green * 255, m_blue * 255);
	}

	std::string color::to_hex(int broj)
	{
		return std::format("{:X}", broj);
	}
} // namespace
