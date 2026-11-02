/* Module: pngu3266.dll
   Function: MoveAndSize
   Address: 605f73d1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::MoveAndSize(struct _PNxPoint const &,struct _PNxSize
   const &) */

void __thiscall CPNWindow::MoveAndSize(CPNWindow *this,_PNxPoint *param_1,_PNxSize *param_2)

{
  BOOL BVar1;
  CPNWindow *this_00;
  WINDOWPLACEMENT local_40;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x73d1  1572  ?MoveAndSize@CPNWindow@@UAEXABU_PNxPoint@@ABU_PNxSize@@@Z */
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
      local_c = *(int *)param_2;
      local_8 = *(int *)(param_2 + 4);
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
      local_40.rcNormalPosition.right = *(int *)param_2 + local_40.rcNormalPosition.left;
      local_40.rcNormalPosition.bottom = *(int *)(param_2 + 4) + local_40.rcNormalPosition.top;
      SetWindowPlacement(*(HWND *)(this + 0xc),&local_40);
    }
  }
  else {
    *(undefined4 *)(this + 0x60) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x68) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_2 + 4);
  }
  return;
}


