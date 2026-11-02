/* Module: pngu3266.dll
   Function: SetParent
   Address: 605f92ab
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::SetParent(class CPNWindow *) */

void __thiscall CPNWindow::SetParent(CPNWindow *this,CPNWindow *param_1)

{
  CPNWindow *this_00;
  HWND hWndNewParent;
  tagRECT local_3c;
  tagRECT local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  tagPOINT local_c;
  
                    /* 0x92ab  1957  ?SetParent@CPNWindow@@UAEXPAV1@@Z */
  this_00 = *(CPNWindow **)(this + 0x48);
  if (param_1 != this_00) {
    if (param_1 != (CPNWindow *)0x0) {
      if (this_00 != (CPNWindow *)0x0) {
        RemoveChild(this_00,this);
      }
      AddChild(param_1,this);
    }
    if (*(HWND *)(this + 0xc) != (HWND)0x0) {
      GetWindowRect(*(HWND *)(this + 0xc),&local_2c);
      if (*(int *)(this + 0x48) != 0) {
        GetWindowRect(*(HWND *)(*(int *)(this + 0x48) + 0xc),&local_3c);
      }
      if (*(int *)(this + 0x48) != 0) {
        local_c.x = local_2c.left;
        local_c.y = local_2c.top;
        ::ScreenToClient(*(HWND *)(*(int *)(this + 0x48) + 0xc),&local_c);
        local_1c = local_c.x;
        local_18 = local_c.y;
        local_14 = local_2c.right - local_2c.left;
        local_10 = local_2c.bottom - local_2c.top;
      }
    }
    if ((param_1 != (CPNWindow *)0x0) && ((*(uint *)(this + 8) & 0x100000) != 0)) {
      MapToCoordinateSystem(param_1,(CPNxPoint *)&local_1c);
      MapToCoordinateSystem(param_1,(CPNxSize *)&local_14);
    }
    if (*(HWND *)(this + 0xc) != (HWND)0x0) {
      if (param_1 == (CPNWindow *)0x0) {
        hWndNewParent = (HWND)0x0;
      }
      else {
        hWndNewParent = *(HWND *)(param_1 + 0xc);
      }
      ::SetParent(*(HWND *)(this + 0xc),hWndNewParent);
      if ((param_1 != (CPNWindow *)0x0) && ((*(uint *)(this + 8) & 0x100000) != 0)) {
        SetWindowPos(*(HWND *)(this + 0xc),(HWND)0x0,local_1c,local_18,local_14,local_10,0x14);
      }
    }
    *(CPNWindow **)(this + 0x48) = param_1;
  }
  return;
}


