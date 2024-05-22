// level1.h
#ifndef LEVEL1_H
#define LEVEL1_H

#include <QWidget>

class Level1 : public QWidget {
    Q_OBJECT
public:
    explicit Level1(QWidget *parent = nullptr);
    ~Level1();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    bool m_showBlackSquare;
};

#endif // LEVEL1_H
