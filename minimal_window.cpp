#include "minimal_window.h"
#include "ui_minimal_window.h"

#include <QPushButton>
#include <QLabel>

minimal_window::minimal_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::minimal_window)
{
    // Must be called first
    ui->setupUi(this);

    // Explicit connection
    connect(ui->pushButton, SIGNAL(released()), this, SLOT(changeColor()));
}

minimal_window::~minimal_window()
{
    delete ui;
}

// Implicit connection by name
void minimal_window::on_pushButton_clicked()
{
    ui->label->setText(tr("Hello, World!"));
}

void minimal_window::changeColor()
{
    ui->label->setStyleSheet("QLabel { color : blue; }");
}
