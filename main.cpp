#include <QCoreApplication>
#include <QDebug>
#include <fcml>
class Test
{
    FCML_PROPERTY_ASSIGN(int, Value)
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test t;
    t.setValue(15);
    qDebug() << t.getValue();
    return a.exec();
}
