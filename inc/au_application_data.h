/* 
 * This file is part of the AppUpdate (https://github.com/DEWETRON/AppUpdate)
 * Copyright (c) DEWETRON GmbH 2020.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <QObject>
#include <QStringList>

 /**
  * Application main model
  */
class AuApplicationData : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QStringList bla
                READ getBla
                NOTIFY blaChanged)

public:
    AuApplicationData();
    ~AuApplicationData();

    QStringList getBla();

Q_SIGNALS:
    void blaChanged();

private:
    QStringList m_bla;
};

