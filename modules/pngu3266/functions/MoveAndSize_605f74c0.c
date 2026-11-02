/* Module: pngu3266.dll
   Function: MoveAndSize
   Address: 605f74c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::MoveAndSize(struct _PNxRect const &) */

void __thiscall CPNWindow::MoveAndSize(CPNWindow *this,_PNxRect *param_1)

{
  BOOL BVar1;
  CPNWindow *this_00;
  WINDOWPLACEMENT local_40;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x74c0  1573  ?MoveAndSize@CPNWindow@@UAEXABU_PNxRect@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    BVar1 = IsIconic(*(HWND *)(this + 0xc));
    if (BVar1 == 0) {
      if ((((byte)this[10] & 0x10) == 0) ||
         (this_00 = *(CPNWindow **)(this + 0x48), *(CPNWindow **)(this + 0x48) == (CPNWindow *)0x0))
      {
        this_00 = this;
      }
      local_14 = *(int *)param_1;
      local_10 = *(int *)(param_1 + 4);
      local_8 = *(int *)(param_1 + 0xc) - local_10;
      local_c = *(int *)(param_1 + 8) - local_14;
      MapToCoordinateSystem(this_00,(CPNxPoint *)&local_14);
      MapToCoordinateSystem(this_00,(CPNxSize *)&local_c);
      SetWindowPos(*(HWND *)(this + 0xc),(HWND)0x0,local_14,local_10,local_c,local_8,0x14);
    }
    else {
      memset(&local_40,0,0x2c);
      local_40.length = 0x2c;
      GetWindowPlacement(*(HWND *)(this + 0xc),&local_40);
      local_40.rcNormalPosition.left = *(LONG *)param_1;
      local_40.rcNormalPosition.top = *(LONG *)(param_1 + 4);
      local_40.rcNormalPosition.right = *(LONG *)(param_1 + 8);
      local_40.rcNormalPosition.bottom = *(LONG *)(param_1 + 0xc);
      SetWindowPlacement(*(HWND *)(this + 0xc),&local_40);
    }
  }
  else {
    *(undefined4 *)(this + 0x60) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 4);
    *(int *)(this + 0x68) = *(int *)(param_1 + 8) - *(int *)param_1;
    *(int *)(this + 0x6c) = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  }
  return;
}


