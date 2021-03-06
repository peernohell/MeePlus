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

#ifndef MEEPLUS_PEOPLEINFORMATIONMODEL_H_
#define MEEPLUS_PEOPLEINFORMATIONMODEL_H_

#include "core/ListModel.h"

class MPPersonInformation;

class MPPeopleInformationModel : public MPListModel
{
Q_OBJECT
public:
    MPPeopleInformationModel(QObject *parent = 0);
    ~MPPeopleInformationModel();

    MPPersonInformation *find(const QString &id) const;
    MPPersonInformation *row(const int &row);
    MPPersonInformation *takeRow(const int &row);

public slots:
    void appendInformation(MPPersonInformation *information);
};

#endif // MEEPLUS_PEOPLEINFORMATIONMODEL_H_
