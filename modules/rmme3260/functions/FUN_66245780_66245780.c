/* Module: rmme3260.dll
   Function: FUN_66245780
   Address: 66245780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66245780(void *this,char *param_1)

{
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_6627cf3c;
  }
  FUN_66250410((int *)((int)this + 0x48),param_1);
  if (*(int *)(*(int *)((int)this + 0x48) + -8) == 0) {
    FUN_66245bf0(this);
  }
  else if (*(int *)this != 0) {
    FUN_66245bc0(this);
    InvalidateRect(*(HWND *)this,(RECT *)0x0,1);
    UpdateWindow(*(HWND *)this);
    return;
  }
  return;
}


