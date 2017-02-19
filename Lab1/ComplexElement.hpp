#pragma once
#include "AbstractElement.hpp"
#include "SimpleElement.hpp"
#include <qlist.h>

class ComplexElement : public AbstractElement {
protected:
	QList<SimpleElement> m_data;
public:
	ComplexElement() {
	}
	ComplexElement(SimpleElement& el) {
		m_data.clear();
		m_data.push_back(el);
	}

	virtual size_t getSize() const override {
		size_t res = 0;
		for (auto it : m_data)
			res += it.getSize();
		return res;
	}
	virtual size_t getNumber() const override {
		size_t res = 0;
		for (auto it : m_data)
			res += it.getNumber();
		return res;
	}
	virtual size_t getElementsNumber() const override{
		return m_data.size();
	}

	const QList<SimpleElement> & operator*() {
		return m_data;
	}
};