#ifndef MINIMAL_WINDOW_H
#define MINIMAL_WINDOW_H

#include <QMainWindow>

namespace Ui {
class minimal_window;
}

class minimal_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit minimal_window(QWidget *parent = 0);
    ~minimal_window();

private:
    Ui::minimal_window *ui;
};

#endif // MINIMAL_WINDOW_H
