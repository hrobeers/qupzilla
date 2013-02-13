/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2013  David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#include "qztoolstest.h"
#include "formcompletertest.h"
#include "cookiestest.h"
#include "downloadstest.h"

#include <QtTest/QtTest>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTEST_DISABLE_KEYPAD_NAVIGATION;

    QzToolsTest qzToolsTest;
    QTest::qExec(&qzToolsTest, argc, argv);

    FormCompleterTest formCompleterTest;
    QTest::qExec(&formCompleterTest, argc, argv);

    CookiesTest cookiesTest;
    QTest::qExec(&cookiesTest, argc, argv);

    DownloadsTest downloadsTest;
    QTest::qExec(&downloadsTest, argc, argv);

    return 0;
}
