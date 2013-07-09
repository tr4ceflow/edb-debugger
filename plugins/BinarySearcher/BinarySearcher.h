/*
Copyright (C) 2006 - 2013 Evan Teran
                          eteran@alum.rit.edu

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef STRINGSEARCHER_20060430_H_
#define STRINGSEARCHER_20060430_H_

#include "IPlugin.h"

class QMenu;
class QDialog;

class BinarySearcher : public QObject, public IPlugin {
	Q_OBJECT
	Q_INTERFACES(IPlugin)
#if QT_VERSION >= 0x050000
	Q_PLUGIN_METADATA(IID "edb.IPlugin/1.0")
#endif
	Q_CLASSINFO("author", "Evan Teran")
	Q_CLASSINFO("url", "http://www.codef00.com")

public:
	BinarySearcher();
	virtual ~BinarySearcher();

public:
	virtual QMenu *menu(QWidget *parent = 0);
	virtual QList<QAction *> stack_context_menu();

public Q_SLOTS:
	void show_menu();
	void mnuStackFindASCII();

private:
	QMenu *menu_;
};

#endif
