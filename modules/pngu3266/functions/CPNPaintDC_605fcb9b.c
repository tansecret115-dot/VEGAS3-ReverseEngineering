/* Module: pngu3266.dll
   Function: CPNPaintDC
   Address: 605fcb9b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPaintDC::CPNPaintDC(class CPNWindow *) */

CPNPaintDC * __thiscall CPNPaintDC::CPNPaintDC(CPNPaintDC *this,CPNWindow *param_1)

{
  HWND__ *pHVar1;
  CPNWindow *this_00;
  HDC hdc;
  tagPOINT local_18;
  int local_10;
  int local_c;
  HDC__ *local_8;
  
                    /* 0xcb9b  109  ??0CPNPaintDC@@QAE@PAVCPNWindow@@@Z */
  CPNDC::CPNDC((CPNDC *)this);
  local_8 = (HDC__ *)0x0;
  *(undefined ***)this = &_vftable_;
  pHVar1 = CPNWindow::GetHWND(param_1);
  if (pHVar1 == (HWND__ *)0x0) {
    this_00 = (CPNWindow *)(**(code **)(*(int *)param_1 + 0x14))();
    pHVar1 = CPNWindow::GetHWND(this_00);
    *(HWND__ **)(this + 0x1d3) = pHVar1;
    (**(code **)(*(int *)param_1 + 0x50))(&local_10);
    hdc = GetDC(*(HWND *)(this + 0x1d3));
    SetViewportOrgEx(hdc,local_10,local_c,&local_18);
  }
  else {
    pHVar1 = CPNWindow::GetHWND(param_1);
    *(HWND__ **)(this + 0x1d3) = pHVar1;
    local_8 = BeginPaint(pHVar1,(LPPAINTSTRUCT)(this + 0x1df));
  }
  CPNDC::Attach((CPNDC *)this,local_8);
  return this;
}


