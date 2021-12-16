//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button_Sleep;
	TButton *Button_LogOff;
	TButton *Button_Restart;
	TButton *Button_Shutdown;
	TImage *Image_Shutdown;
	TImage *Image_Restart;
	TImage *Image_LogOff;
	TImage *Image_Sleep;
	void __fastcall Button_SleepClick(TObject *Sender);
	void __fastcall Button_LogOffClick(TObject *Sender);
	void __fastcall Button_ShutdownClick(TObject *Sender);
	void __fastcall Button_RestartClick(TObject *Sender);
	void __fastcall Image_ShutdownClick(TObject *Sender);
	void __fastcall Image_RestartClick(TObject *Sender);
	void __fastcall Image_LogOffClick(TObject *Sender);
	void __fastcall Image_SleepClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
