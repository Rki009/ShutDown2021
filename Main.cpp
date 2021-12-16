//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// #define TESTING 1


// Get the horizontal and vertical screen sizes in pixel
void GetDesktopResolution(int& horizontal, int& vertical) {
   RECT desktop;
   // Get a handle to the desktop window
   const HWND hDesktop = GetDesktopWindow();
   // Get the size of screen to the variable desktop
   GetWindowRect(hDesktop, &desktop);
   // The top left corner will have coordinates (0,0)
   // and the bottom right corner will have coordinates
   // (horizontal, vertical)
   horizontal = desktop.right;
   vertical = desktop.bottom;
}

// c:\windows\system32\shutdown /l
// c:\windows\system32\shutdown /r /t 0
// c:\windows\system32\shutdown /s /f /t 0
// rundll32.exe powrprof.dll,SetSuspendState 0,1,0


void shutdown(void) {
	// Shutdown ... NOW!
#ifdef TESTING
	ShowMessage("Shutdown");
#else
	// system("shutdown /s /t 0");
	// system("c:\\windows\\system32\\shutdown /s /f /t 0");
	system("c:\\windows\\system32\\shutdown /s /f /t 0");
	Application->MainForm->Close();
#endif
}

void restart(void) {
	// Restart  ... NOW
#ifdef TESTING
	ShowMessage("Restart");
#else
	// system("shutdown /r /t 0");
	system("c:\\windows\\system32\\shutdown /r /t 0");
	Application->MainForm->Close();
#endif
}

void logoff(void) {
	// Log Off
#ifdef TESTING
	ShowMessage("Log Off");
#else
	// system("shutdown /l");
	system("c:\\windows\\system32\\shutdown /l");
	Application->MainForm->Close();
#endif
}

void sleep(void) {
	// Sleep Mode
#ifdef TESTING
	ShowMessage("Sleep");
#else
	// system("RUNDLL32.EXE powrprof.dll,SetSuspendState 0,1,0");
	system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0");
	Application->MainForm->Close();
#endif
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {

	Form1->Height = 195;
	Form1->Width = 405;

	Form1->Color = clBlack;
	Form1->Button_Shutdown->TabOrder = 0;
	Form1->Button_Restart->TabOrder = 1;
	Form1->Button_LogOff->TabOrder = 2;
	Form1->Button_Sleep->TabOrder = 3;

	// Position = poScreenCenter;

    int horizontal = 0;
	int vertical = 0;
	GetDesktopResolution(horizontal, vertical);
	Form1->Left = horizontal/20;
	Form1->Top = vertical - (Form1->Height + (vertical/16));

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button_SleepClick(TObject *Sender) {
	sleep();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button_LogOffClick(TObject *Sender) {
    logoff();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button_ShutdownClick(TObject *Sender) {
	shutdown();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button_RestartClick(TObject *Sender) {
	restart();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image_ShutdownClick(TObject *Sender) {
	shutdown();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_RestartClick(TObject *Sender) {
	restart();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_LogOffClick(TObject *Sender) {
	logoff();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image_SleepClick(TObject *Sender) {
	sleep();
}
//---------------------------------------------------------------------------

