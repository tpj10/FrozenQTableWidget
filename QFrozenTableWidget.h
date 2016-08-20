
#ifndef  __QFROZEN_TABLE_WIDGET_H__
#define __QFROZEN_TABLE_WIDGET_H__  

#include <QtGui/QApplication>
#include <QtGui/QTableWidget>
#include <QtGui/QTableWidgetItem>
#include <QtGui/QHeaderView>



class QFrozenTableWidget:public QTableWidget
{
Q_OBJECT
public:
    QFrozenTableWidget(int frozenColCnt);
    QFrozenTableWidget(int row, int col, int frozenColCnt);
protected :
    void horizontalScrollbarValueChanged(int);
protected :
    int _frozenCol;
};
#endif
