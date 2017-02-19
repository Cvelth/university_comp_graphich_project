#pragma once

class AbstractElement {
public:
	virtual size_t getSize() const abstract;
	virtual size_t getNumber() const abstract;
	virtual size_t getElementsNumber() const abstract;
};