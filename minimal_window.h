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
    explicit minimal_window(QWidget* parent = nullptr);
    ~minimal_window();

private slots:
    void on_pushButton_clicked();
    void changeColor();

private:
    Ui::minimal_window* ui;
};

#endif // MINIMAL_WINDOW_H
