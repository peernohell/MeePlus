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

#include <QtCore/QDebug>
#include <QtGui/QApplication>
#include <QtDeclarative/QDeclarativeContext>

#include "qmlapplicationviewer.h"

#include "core/Constants.h"
#include "core/Authentication.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QmlApplicationViewer viewer;
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);

    viewer.rootContext()->setContextProperty("MeePlusCommon", MeePlus::Constants::common());
    viewer.rootContext()->setContextProperty("MeePlusUi", MeePlus::Constants::ui());

    MPAuthentication *auth = new MPAuthentication();
    viewer.rootContext()->setContextProperty("MeePlusAuth", auth);

    viewer.setMainQmlFile(QLatin1String("qml/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
