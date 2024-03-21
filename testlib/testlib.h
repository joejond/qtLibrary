//#ifndef TESTLIB_H
//#define TESTLIB_H

#include <QMainWindow>
#include <QWidget>

#if defined MAKE_TEST_LIB
    #define TestLib Q_DECL_EXPORT
#else
    #define TestLib Q_DECL_IMPORT
#endif

class TestLib : public QMainWindow
{
    Q_OBJECT

public:
    TestLib(QWidget *parent = nullptr);
    ~TestLib();
};
//#endif // TESTLIB_H
