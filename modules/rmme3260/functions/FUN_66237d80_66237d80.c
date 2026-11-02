/* Module: rmme3260.dll
   Function: FUN_66237d80
   Address: 66237d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66237d80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf1) = param_2;
  FUN_66237ea0((void *)(param_1 + -0x14));
  if (*(HWND *)(param_1 + 0xfd) != (HWND)0x0) {
    ShowWindow(*(HWND *)(param_1 + 0xfd),-(uint)(*(int *)(param_1 + 0xf1) != 0) & 5);
  }
  if (*(HWND *)(param_1 + 0xdd) != (HWND)0x0) {
    ShowWindow(*(HWND *)(param_1 + 0xdd),-(uint)(*(int *)(param_1 + 0xf1) != 0) & 5);
  }
  return 0;
}


