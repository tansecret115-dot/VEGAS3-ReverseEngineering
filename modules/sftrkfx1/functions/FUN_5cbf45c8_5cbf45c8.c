/* Module: sftrkfx1.dll
   Function: FUN_5cbf45c8
   Address: 5cbf45c8
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbf45c8(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((HWND)param_1[5] == (HWND)0x0) {
    uVar1 = 0x8000ffff;
  }
  else {
    uVar2 = GetWindowLongA((HWND)param_1[5],-0x14);
    SetWindowLongA((HWND)param_1[5],-0x14,uVar2 & 0xfffeffff);
    (**(code **)(*param_1 + 0x44))();
    DestroyWindow((HWND)param_1[5]);
    param_1[5] = 0;
    uVar1 = 0;
  }
  return uVar1;
}


