/* Module: pngu3266.dll
   Function: GetClientRect
   Address: 605f6d6f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::GetClientRect(class CPNxRect &)const  */

void __thiscall CPNWindow::GetClientRect(CPNWindow *this,CPNxRect *param_1)

{
  BOOL BVar1;
  HMENU pHVar2;
  tagRECT local_20;
  int local_10;
  int local_c;
  DWORD local_8;
  
                    /* 0x6d6f  1133  ?GetClientRect@CPNWindow@@UBEXAAVCPNxRect@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    BVar1 = IsIconic(*(HWND *)(this + 0xc));
    if (BVar1 == 0) {
      ::GetClientRect(*(HWND *)(this + 0xc),&local_20);
      *(LONG *)param_1 = local_20.left;
      *(LONG *)(param_1 + 4) = local_20.top;
      *(LONG *)(param_1 + 8) = local_20.right;
    }
    else {
      local_8 = GetWindowLongA(*(HWND *)(this + 0xc),-0x10);
      pHVar2 = ::GetMenu(*(HWND *)(this + 0xc));
      local_20.right = 0x32;
      local_20.bottom = 0x32;
      local_20.left = 0;
      local_20.top = 0;
      local_10 = 0;
      local_c = 0;
      (**(code **)(*(int *)this + 0x38))(&local_10);
      AdjustWindowRect(&local_20,local_8,(uint)(pHVar2 != (HMENU)0x0));
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      *(int *)(param_1 + 8) = (local_10 - local_20.right) + 0x32 + local_20.left;
      local_20.bottom = (local_c - local_20.bottom) + 0x32 + local_20.top;
    }
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x68);
    local_20.bottom = *(LONG *)(this + 0x6c);
  }
  *(LONG *)(param_1 + 0xc) = local_20.bottom;
  return;
}


