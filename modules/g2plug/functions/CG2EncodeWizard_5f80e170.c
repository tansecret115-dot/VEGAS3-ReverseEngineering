/* Module: g2plug.dll
   Function: CG2EncodeWizard
   Address: 5f80e170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CG2EncodeWizard::CG2EncodeWizard(struct HWND__ *,int) */

void __thiscall CG2EncodeWizard::CG2EncodeWizard(CG2EncodeWizard *this,HWND__ *param_1,int param_2)

{
                    /* 0xe170  2  ??0CG2EncodeWizard@@QAE@PAUHWND__@@H@Z */
  *(HWND__ **)(this + 0x67c) = param_1;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x680) = 0;
  *(undefined4 *)(this + 0x688) = 0;
  *(int *)(this + 0x684) = param_2;
  return;
}


