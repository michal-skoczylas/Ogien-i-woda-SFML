// level1.cpp
#include "level1.h"
#include <QPainter>

Level1::Level1(QWidget *parent) : QWidget(parent), m_showBlackSquare(false) {
    setFixedSize(400, 400); // ustal rozmiar okna
}

Level1::~Level1() {}

void Level1::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.fillRect(rect(), m_showBlackSquare ? Qt::black : Qt::white); // rysuj kwadrat
}

void Level1::showBlackSquare() {
    m_showBlackSquare = true;
    update(); // wymusza ponowne odrysowanie okna
}

void Level1::hideBlackSquare() {    m_showBlackSquare = false;
    update();
}
