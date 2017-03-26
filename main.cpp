#include <QApplication>
#include <QPushButton>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    // UTF-8 Encoding
       QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
       QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
       QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    QPushButton bouton("Ô Magnifique ! Avec QtextCodec, on arrive à intégrer les accents avec Qt très simplement");
    bouton.show();

    return app.exec();
}
