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

import QtQuick 1.1
import QtWebKit 1.0
import com.nokia.meego 1.0

import "../common"

import "../js/core.js" as MeePlusJs

Page {
    id: welcomePage
    anchors.margins: MeePlusUi.DefaultMargin
    tools: ToolBarLayout {
        id: welcomePageTools
        visible: true
        ButtonOrientation {}
        IconMenu {}
    }

    WebBrowser {
        id: login
        url: MeePlusAuth.requestUrl();

        anchors.top: header.bottom

        onTitleChanged: {
            if(MeePlusAuth.responseCode(title)) {
                login.done = true
                pageStack.pop();
            }
        }
    }

    PageHeader {
        id: header

        title: qsTr("Login")
    }
}
