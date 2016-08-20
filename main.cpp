

#include "QFrozenTableWidget.h"


int main(int argc, char *argv[])  
{  
	QApplication a(argc, argv);  
	QTableWidget *tableWidget = new QFrozenTableWidget (5,10,2); 
	tableWidget->setWindowTitle("QTableWidget & Item");  
	tableWidget->resize(350, 200);  
	QStringList header;  
	header<<"Month"<<"Description";  
	tableWidget->setHorizontalHeaderLabels(header);  
	tableWidget->setItem(0,0,new QTableWidgetItem("Jan"));  
	tableWidget->setItem(1,0,new QTableWidgetItem("Feb"));  
	tableWidget->setItem(2,0,new QTableWidgetItem("Mar"));  

	tableWidget->setItem(0,1,new QTableWidgetItem(QIcon("images/IED.png"), "Jan's month"));  
	tableWidget->setItem(1,1,new QTableWidgetItem(QIcon("images/IED.png"), "Feb's month"));  
	tableWidget->setItem(2,1,new QTableWidgetItem(QIcon("images/IED.png"), "Mar's month"));  

	tableWidget->setItem(0,2,new QTableWidgetItem("3"));  
	tableWidget->setItem(0,3,new QTableWidgetItem("4"));  
	tableWidget->setItem(0,4,new QTableWidgetItem("5"));  
	tableWidget->setItem(0,5,new QTableWidgetItem("6"));  
	tableWidget->setItem(0,6,new QTableWidgetItem("7"));  
	tableWidget->setItem(0,7,new QTableWidgetItem("8"));  
	tableWidget->show();  

	return a.exec();  
} 
