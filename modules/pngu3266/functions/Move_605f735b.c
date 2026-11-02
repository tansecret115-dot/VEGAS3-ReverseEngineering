/* Module: pngu3266.dll
   Function: Move
   Address: 605f735b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::Move(class CPNxPoint const &) */

void __thiscall CPNWindow::Move(CPNWindow *this,CPNxPoint *param_1)

{
  HWND__ *hWnd;
  HWND pHVar1;
  CPNWindow *local_c;
  CPNWindow *local_8;
  
                    /* 0x735b  1570  ?Move@CPNWindow@@UAEXABVCPNxPoint@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    local_c = this;
    local_8 = this;
    hWnd = GetHWND(this);
    if ((((byte)this[10] & 0x10) != 0) && (*(CPNWindow **)(this + 0x48) != (CPNWindow *)0x0)) {
      this = *(CPNWindow **)(this + 0x48);
    }
    local_c = *(CPNWindow **)param_1;
    local_8 = *(CPNWindow **)(param_1 + 4);
    pHVar1 = ::GetParent(hWnd);
    if (pHVar1 != (HWND)0x0) {
      MapToCoordinateSystem(this,(CPNxPoint *)&local_c);
    }
    SetWindowPos(hWnd,(HWND)0x0,(int)local_c,(int)local_8,0,0,0x15);
  }
  else {
    *(undefined4 *)(this + 0x60) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 4);
  }
  return;
}


