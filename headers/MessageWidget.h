#ifndef MESSAGEWIDGET_H
#define MESSAGEWIDGET_H
#pragma once

#include <QWidget>
#include <QListWidgetItem>
#include <QTextLayout>
#include <QTextBrowser>
#include <QVBoxLayout>
#include <QMenu>

#include "HistoryParser.h"
#include "CodeWidget.h"

namespace Ui
{
	class MessageWidget;
}

class MessageWidget : public QWidget
{
	Q_OBJECT

public:
	explicit MessageWidget(QListWidgetItem *item = nullptr,
												 HistoryParser::Message message = {},
												 quint8 chatIndex = 0, quint8 index = 0);
	~MessageWidget();

	void resize();
	HistoryParser::Message getMessage();

	qint8 getIndex() const;
	qint8 getChatIndex() const;
	void setIndex(qint8 index);
	void setChatIndex(qint8 chatIndex);

protected:
	void resizeEvent(QResizeEvent *event) override;

private:
	Ui::MessageWidget *m_ui;
	QListWidgetItem *m_item;
	HistoryParser::Message m_message;
	QList<CodeWidget *> m_codeWidgets;
	QList<float> m_textWidth;
	quint16 m_width;
	qint16 m_height;
	QList<QTextBrowser *> m_textBrowsers;
	QVBoxLayout* m_layout;
	struct Border
	{
		quint8 topLeft = 0;
		quint8 topRight = 0;
		quint8 bottomLeft = 0;
		quint8 bottomRight = 0;
	};
	QMenu *m_menu;
	qint8 m_chatIndex;
	qint8 m_index;

	void selection(QString pattern);
	QSize getSizeTextBrowser(QTextBrowser *textBrowser, quint8 index);
	void createText();
	bool isMaxWidth();
	void setBorder(QWidget *widget, Border border);
	void contextMenuEvent(QContextMenuEvent *event) override;
	void actionDeleteClicked();

signals:
	void selfDelete(MessageWidget *self);
	void resizeFinished();
};

#endif // MESSAGEWIDGET_H
