/* Module: pngu3266.dll
   Function: CPNWindowDC
   Address: 605fbbf3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNWindowDC::CPNWindowDC(class CPNWindow *) */

CPNWindowDC * __thiscall CPNWindowDC::CPNWindowDC(CPNWindowDC *this,CPNWindow *param_1)

{
  HWND__ *pHVar1;
  HDC pHVar2;
  
                    /* 0xbbf3  162  ??0CPNWindowDC@@QAE@PAVCPNWindow@@@Z */
  CPNDC::CPNDC((CPNDC *)this);
  *(undefined ***)this = &_vftable_;
  if (param_1 != (CPNWindow *)0x0) {
    pHVar1 = CPNWindow::GetHWND(param_1);
    *(HWND__ **)(this + 0x1df) = pHVar1;
  }
  pHVar2 = GetWindowDC(*(HWND *)(this + 0x1df));
  *(HDC *)(this + 0x1cf) = pHVar2;
  XPNDC::SetupDefaultTools((XPNDC *)this);
  return this;
}


