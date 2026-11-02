/* Module: wmfplug2.dll
   Function: CEncodeWizard
   Address: 0041cb20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CEncodeWizard::CEncodeWizard(struct HWND__ *,int) */

void __thiscall CEncodeWizard::CEncodeWizard(CEncodeWizard *this,HWND__ *param_1,int param_2)

{
                    /* 0x1cb20  2  ??0CEncodeWizard@@QAE@PAUHWND__@@H@Z */
  *(HWND__ **)(this + 0x904) = param_1;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x908) = 0;
  *(undefined4 *)(this + 0x910) = 0;
  *(int *)(this + 0x90c) = param_2;
  return;
}


