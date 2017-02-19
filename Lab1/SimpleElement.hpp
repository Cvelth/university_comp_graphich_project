#pragma once
#include "AbstractElement.hpp"
#include "Point.hpp"
#include <qlist.h>

class SimpleElement : public AbstractElement {
protected:
	QList<Point> m_data;
public:
	virtual size_t getSize() const override {
		return m_data.size() * Point::dimentions();
	}
	virtual size_t getNumber() const override {
		return m_data.size();
	}
	virtual size_t getElementsNumber() const override {
		return 1;
	}

	QList<Point>& operator*() {
		return m_data;
	}
};