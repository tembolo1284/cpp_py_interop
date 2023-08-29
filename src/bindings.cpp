#include <pybind11/pybind11.h>
#include "../include/options_pricing.hpp"
#include "../include/monte_carlo_pricing.hpp"
#include "../include/finite_difference_pricing.hpp"

namespace py = pybind11;

PYBIND11_MODULE(options_pricing, m) {
    m.doc() = "Options pricing module using Strategy Pattern";

    py::class_<PricingStrategy>(m, "PricingStrategy");

    py::class_<MonteCarloPricing, PricingStrategy>(m, "MonteCarloPricing")
        .def(py::init<>())
        .def("calculate_option_price", &MonteCarloPricing::calculateOptionPrice);

    py::class_<FiniteDifferencePricing, PricingStrategy>(m, "FiniteDifferencePricing")
        .def(py::init<>())
        .def("calculate_option_price", &FiniteDifferencePricing::calculateOptionPrice);
}

