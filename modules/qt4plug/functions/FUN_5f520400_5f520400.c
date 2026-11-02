/* Module: qt4plug.dll
   Function: FUN_5f520400
   Address: 5f520400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f520400(int param_1)

{
  uint uVar1;
  
  if (*(HWND *)(param_1 + 0x10) == (HWND)0x0) {
    return 0x8000ffff;
  }
  uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x10),-0x14);
  SetWindowLongA(*(HWND *)(param_1 + 0x10),-0x14,uVar1 & 0xfffeffff);
  FUN_5f520820();
  DestroyWindow(*(HWND *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 0;
}


