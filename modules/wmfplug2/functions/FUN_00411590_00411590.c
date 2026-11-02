/* Module: wmfplug2.dll
   Function: FUN_00411590
   Address: 00411590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00411590(void *param_1)

{
  uint uVar1;
  
  if (*(HWND *)((int)param_1 + 0x10) == (HWND)0x0) {
    return 0x8000ffff;
  }
  uVar1 = GetWindowLongA(*(HWND *)((int)param_1 + 0x10),-0x14);
  SetWindowLongA(*(HWND *)((int)param_1 + 0x10),-0x14,uVar1 & 0xfffeffff);
  FUN_00411860(param_1);
  DestroyWindow(*(HWND *)((int)param_1 + 0x10));
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  return 0;
}


