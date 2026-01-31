#include "mainwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUI();
    FileManager::load(dataPath.toStdString(), dictionary);
}

MainWindow::~MainWindow() {
    FileManager::save(dataPath.toStdString(), dictionary);
}

void MainWindow::setupUI() {
    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout();

    wordInput = new QLineEdit();
    meaningInput = new QLineEdit();
    outputArea = new QTextEdit();
    outputArea->setReadOnly(true);

    layout->addWidget(new QLabel("Word:"));
    layout->addWidget(wordInput);

    layout->addWidget(new QLabel("Meaning:"));
    layout->addWidget(meaningInput);

    QHBoxLayout *btns = new QHBoxLayout();
    QPushButton *addBtn = new QPushButton("Add");
    QPushButton *searchBtn = new QPushButton("Search");
    QPushButton *deleteBtn = new QPushButton("Delete");

    btns->addWidget(addBtn);
    btns->addWidget(searchBtn);
    btns->addWidget(deleteBtn);

    layout->addLayout(btns);
    layout->addWidget(outputArea);

    connect(addBtn, &QPushButton::clicked, this, &MainWindow::onAdd);
    connect(searchBtn, &QPushButton::clicked, this, &MainWindow::onSearch);
    connect(deleteBtn, &QPushButton::clicked, this, &MainWindow::onDelete);

    central->setLayout(layout);
    setCentralWidget(central);
}

void MainWindow::onAdd() {
    std::string word = wordInput->text().toStdString();
    std::string meaning = meaningInput->text().toStdString();

    dictionary.insert(word, meaning);
    saveToFile();
    outputArea->setText("Added!");
}

void MainWindow::onSearch() {
    std::string word = wordInput->text().toStdString();
    std::string meaning;

    if (dictionary.search(word, meaning)) {
        outputArea->setText(QString::fromStdString(meaning));
    } else {
        outputArea->setText("Not found.");
    }
}

void MainWindow::onDelete() {
    std::string word = wordInput->text().toStdString();
    if (dictionary.remove(word)) {
        saveToFile();
        outputArea->setText("Deleted!");
    } else {
        outputArea->setText("Word not found.");
    }
}

void MainWindow::saveToFile() {
    FileManager::save(dataPath.toStdString(), dictionary);
}
