#include <QCoreApplication>
#include <icommand.h>
#include <appendcommand.h>
#include <lowercasecommand.h>
#include <uppercasecommand.h>
#include <stackcommand.h>
#include <QDebug>
#include <iostream>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int opcao;
    StackCommand cmd;
    QString doc;
    QTextStream qtin(stdin);
    do
    {
        cout << "Digite 1 para Concatenar String: " << "\n";
        cout << "Digite 2 para converter para lowecase: " << "\n";
        cout << "Digite 3 para converter para UPPERCASE: " << "\n";
        cout << "Digite 4 para redo: " << "\n";
        cout << "Digite 5 para undo: " << "\n";
        cout << "Digite 6 para sair: ";

        opcao = qtin.readLine().toInt();

        if(opcao==1)
        {
            cout << "Digite a string que deve ser adicionada: ";
                    QString tmp = qtin.readLine();
            cmd.push(new AppendCommand(&doc, tmp));
        }
        else if(opcao==2)
        {
            cmd.push(new LowerCaseCommand(&doc));
        }
        else if(opcao==3)
        {
            cmd.push(new UpperCaseCommand(&doc));
        }
        else if(opcao==4)
        {
            if(!cmd.redo())
               cout << "Nao e possivel fazer redo" << "\n";
        }
        else if(opcao==5)
        {
            if(!cmd.undo())
               cout << "Nao e possivel fazer undo" << "\n";
        }
    qDebug() << doc;
    }while(opcao!=6);


    return a.exec();
}
