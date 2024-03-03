#include "css_tkinter.h"
#include <pybind11/pybind11.h>


PYBIND11_MODULE(css_tkinter, m)
{
	m.doc() ="";
	m.def("load_css", &css_handle::load_css);

	pybind11::class_<css_handle>(m, "css_handle")
		.def("__repr__", [](const css_handle& handle){ return "css_handle"; });
}