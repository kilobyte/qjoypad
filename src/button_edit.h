#ifndef QJOYPAD_BUTTON_EDIT_H
#define QJOYPAD_BUTTON_EDIT_H

#include <QPushButton>
#include <QCheckBox>
#include <QDialogButtonBox>

//we need to edit a Button
#include "button.h"


//to get a new key for the button.
#include "keycode.h"

class ButtonEdit : public QDialog {
	Q_OBJECT
	public:
		ButtonEdit(Button* butt);
		void show();
	protected slots:
		void accept();
	protected:
		Button *button;
		KeyButton *btnKey;
		QCheckBox *chkSticky, *chkRapid;
};


#endif
