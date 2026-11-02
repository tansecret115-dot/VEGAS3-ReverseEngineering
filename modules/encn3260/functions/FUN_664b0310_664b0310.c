/* Module: encn3260.dll
   Function: FUN_664b0310
   Address: 664b0310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664b0310(void *this,char *param_1)

{
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_664f05c4;
  }
  FUN_664bb5e0((int *)((int)this + 0x48),param_1);
  if (*(int *)(*(int *)((int)this + 0x48) + -8) == 0) {
    FUN_664b0790(this);
  }
  else if (*(int *)this != 0) {
    FUN_664b0760(this);
    InvalidateRect(*(HWND *)this,(RECT *)0x0,1);
    UpdateWindow(*(HWND *)this);
    return;
  }
  return;
}


