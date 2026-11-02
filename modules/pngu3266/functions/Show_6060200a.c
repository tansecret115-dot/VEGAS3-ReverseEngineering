/* Module: pngu3266.dll
   Function: Show
   Address: 6060200a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNToolTip::Show(int) */

int __thiscall CPNToolTip::Show(CPNToolTip *this,int param_1)

{
  int iVar1;
  
                    /* 0x1200a  2060  ?Show@CPNToolTip@@UAEHH@Z */
  if (param_1 == 0) {
    if (*(int *)(this + 0xc) != 0) {
      iVar1 = CPNWindow::Show((CPNWindow *)this,0);
      return iVar1;
    }
  }
  else {
    SetWindowPos(*(HWND *)(this + 0xc),(HWND)0xffffffff,*(int *)(this + 0xc0),*(int *)(this + 0xc4),
                 *(int *)(this + 0xb8),*(int *)(this + 0xbc),0x50);
  }
  return 1;
}


