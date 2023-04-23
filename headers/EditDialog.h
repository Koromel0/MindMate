#ifndef EDITDIALOG_H
#define EDITDIALOG_H
#pragma once

#include <QDialog>
#include <QAbstractButton>

namespace Ui
{
	class EditDialog;
}

class EditDialog : public QDialog
{
	Q_OBJECT

public:
	explicit EditDialog(QWidget *parent = nullptr, QString question = 0);
	explicit EditDialog(QWidget *parent, QString question, QString textEditLine);
	~EditDialog();

private:
	Ui::EditDialog *m_ui;

	void buttonAccepted();

signals:
	void textChanged(QString text);
};

#endif // EDITDIALOG_H
