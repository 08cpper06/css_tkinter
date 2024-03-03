#pragma once
#include <string>


class css_handle {
public:
	css_handle() {}
	~css_handle() {}

	static css_handle load_css(std::string _path) { return css_handle(); }
};