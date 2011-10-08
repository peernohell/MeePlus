/****************************************************************************
* MeePlus - Google+ client for Harmattan
* Copyright (C) 2011 Tadej Novak <tadej@tano.si>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/

#ifndef MEEPLUS_LOCALEMANAGER_H_
#define MEEPLUS_LOCALEMANAGER_H_

#include <QtCore/QString>
#include <QtCore/QTranslator>

class MPLocaleManager
{
public:
	MPLocaleManager();
	~MPLocaleManager();

	static QString language(const QString &locale);
	static QStringList loadTranslations();

	void setLocale();

private:
	QTranslator *_translator;
};

#endif // MEEPLUS_LOCALEMANAGER_H_