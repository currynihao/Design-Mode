#include <QCoreApplication>
#include "factory.h"
#include "product.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Factory* fac = new ConcreteFactory();
    Product* p = fac->CreateProduct();
    cout << p << endl;

    return a.exec();
}
