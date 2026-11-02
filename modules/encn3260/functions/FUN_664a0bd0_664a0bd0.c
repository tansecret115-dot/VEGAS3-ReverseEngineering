/* Module: encn3260.dll
   Function: FUN_664a0bd0
   Address: 664a0bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664a0bd0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  GetWindowRect(*(HWND *)((int)this + 0xf1),&local_1c);
  local_c = local_1c.right - local_1c.left;
  local_8 = local_1c.bottom - local_1c.top;
  uVar1 = ftol();
  uVar2 = ftol();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


