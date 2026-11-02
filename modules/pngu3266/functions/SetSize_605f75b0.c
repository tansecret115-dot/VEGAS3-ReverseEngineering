/* Module: pngu3266.dll
   Function: SetSize
   Address: 605f75b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::SetSize(class CPNxSize const &) */

void __thiscall CPNWindow::SetSize(CPNWindow *this,CPNxSize *param_1)

{
  CPNWindow *this_00;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  HWND__ *local_8;
  
                    /* 0x75b0  2002  ?SetSize@CPNWindow@@UAEXABVCPNxSize@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    local_8 = GetHWND(this);
    if ((((byte)this[10] & 0x10) == 0) ||
       (this_00 = *(CPNWindow **)(this + 0x48), *(CPNWindow **)(this + 0x48) == (CPNWindow *)0x0)) {
      this_00 = this;
    }
    local_10 = *(int *)param_1;
    local_c = *(int *)(param_1 + 4);
    MapToCoordinateSystem(this_00,(CPNxSize *)&local_10);
    XPNWindow::GetWindowRect((XPNWindow *)this,(CPNxRect *)&local_20);
    if ((local_18 - local_20 != *(int *)param_1) || (local_14 - local_1c != *(int *)(param_1 + 4)))
    {
      SetWindowPos(local_8,(HWND)0x0,0,0,local_10,local_c,0x16);
    }
  }
  else {
    *(undefined4 *)(this + 0x68) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 4);
  }
  return;
}


