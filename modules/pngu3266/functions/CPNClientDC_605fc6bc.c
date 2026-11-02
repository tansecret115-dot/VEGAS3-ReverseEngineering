/* Module: pngu3266.dll
   Function: CPNClientDC
   Address: 605fc6bc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNClientDC::CPNClientDC(class CPNWindow *) */

CPNClientDC * __thiscall CPNClientDC::CPNClientDC(CPNClientDC *this,CPNWindow *param_1)

{
  HWND__ *pHVar1;
  HDC pHVar2;
  
                    /* 0xc6bc  27  ??0CPNClientDC@@QAE@PAVCPNWindow@@@Z */
  CPNDC::CPNDC((CPNDC *)this);
  *(undefined ***)this = &_vftable_;
  if (param_1 != (CPNWindow *)0x0) {
    pHVar1 = CPNWindow::GetHWND(param_1);
    *(HWND__ **)(this + 0x1df) = pHVar1;
  }
  pHVar2 = GetDC(*(HWND *)(this + 0x1df));
  *(HDC *)(this + 0x1cf) = pHVar2;
  XPNDC::SetupDefaultTools((XPNDC *)this);
  return this;
}


