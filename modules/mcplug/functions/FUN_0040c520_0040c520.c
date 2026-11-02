/* Module: mcplug.dll
   Function: FUN_0040c520
   Address: 0040c520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c520(int param_1)

{
  uint uVar1;
  
  if (*(HWND *)(param_1 + 0x10) == (HWND)0x0) {
    return 0x8000ffff;
  }
  uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x10),-0x14);
  SetWindowLongA(*(HWND *)(param_1 + 0x10),-0x14,uVar1 & 0xfffeffff);
  FUN_0040c770();
  DestroyWindow(*(HWND *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 0;
}


