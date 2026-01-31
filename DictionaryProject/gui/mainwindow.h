#pragma once
#include <QMainWindow>
#include "../src/dictionary.h"
#include "../src/file_manager.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAdd();
    void onSearch();
    void onDelete();

private:
    Dictionary dictionary;
    QString dataPath = "../data/dictionary.txt";

    // UI elements
    QLineEdit *wordInput;
    QLineEdit *meaningInput;
    QTextEdit *outputArea;

    void setupUI();
    void saveToFile();
};
