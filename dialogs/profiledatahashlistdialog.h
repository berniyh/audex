/* AUDEX CDDA EXTRACTOR
 * Copyright (C) 2007-2015 Marco Nelles (audex@maniatek.com)
 * <http://userbase.kde.org/Audex>
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
 */

#ifndef PROFILEDATAHASHLISTDIALOG_H
#define PROFILEDATAHASHLISTDIALOG_H

#include <QWidget>

#include <KDebug>
#include <KDialog>

#include "simplepatternwizarddialog.h"

#include "ui_profiledatahashlistwidgetUI.h"

class ProfileDataHashlistDialog : public KDialog {

  Q_OBJECT

public:
  ProfileDataHashlistDialog(const QString& pattern, const QString& format, QWidget *parent = 0);
  ~ProfileDataHashlistDialog();

  QString format;
  QString pattern;

protected slots:
  virtual void slotButtonClicked(int button);

  void pattern_wizard();

private slots:
  void trigger_changed();

private:
  Ui::ProfileDataHashlistWidgetUI ui;

  bool save();

};

#endif
