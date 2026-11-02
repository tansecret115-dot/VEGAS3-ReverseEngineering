/* Module: aifplug.dll
   Function: FUN_5fbd6e20
   Address: 5fbd6e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd6e20(int param_1)

{
  uint uVar1;
  
  if (*(HWND *)(param_1 + 0x10) == (HWND)0x0) {
    return 0x8000ffff;
  }
  uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x10),-0x14);
  SetWindowLongA(*(HWND *)(param_1 + 0x10),-0x14,uVar1 & 0xfffeffff);
  FUN_5fbd70e0();
  DestroyWindow(*(HWND *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 0;
}


