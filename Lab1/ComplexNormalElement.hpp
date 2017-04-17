#pragma once
#include "SimpleNormalElement.hpp"
#include "ComplexElement.hpp"

class ComplexNormalElement : public ComplexElement {
protected:
public:
	ComplexNormalElement() : ComplexElement() {}
	ComplexNormalElement(SimpleNormalElement& el) : ComplexElement(el) {}
};