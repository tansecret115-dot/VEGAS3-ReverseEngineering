/* Module: pngu3266.dll
   Function: CPNPaintDC
   Address: 605fcb65
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPaintDC::CPNPaintDC(struct _PNxWindow const &) */

CPNPaintDC * __thiscall CPNPaintDC::CPNPaintDC(CPNPaintDC *this,_PNxWindow *param_1)

{
  HWND hWnd;
  HDC pHVar1;
  
                    /* 0xcb65  107  ??0CPNPaintDC@@QAE@ABU_PNxWindow@@@Z */
  CPNDC::CPNDC((CPNDC *)this);
  *(undefined ***)this = &_vftable_;
  hWnd = *(HWND *)param_1;
  *(HWND *)(this + 0x1d3) = hWnd;
  pHVar1 = BeginPaint(hWnd,(LPPAINTSTRUCT)(this + 0x1df));
  CPNDC::Attach((CPNDC *)this,pHVar1);
  return this;
}


