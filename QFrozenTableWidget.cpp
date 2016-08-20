
#include <stdio.h>
#include <QFrozenTableWidget.h>

QFrozenTableWidget::QFrozenTableWidget(int frozenColCnt):QTableWidget()
{
    _frozenCol = frozenColCnt;
}
QFrozenTableWidget::QFrozenTableWidget(int row, int col, int frozenColCnt):QTableWidget(row,col)
{
    _frozenCol = frozenColCnt;
}

void QFrozenTableWidget::horizontalScrollbarValueChanged(int)
{
    QHeaderView * header = horizontalHeader();
    QScrollBar * bar = horizontalScrollBar();
    QAbstractSlider* p = (QAbstractSlider*) bar;
    for (int i = 0 ; i < header->count(); i++) 
        header->moveSection(header->visualIndex(i),header->count() - 1 );

    for (int i = 0 ; i < p->value(); i++) 
        header->moveSection(i + _frozenCol ,0);

}

