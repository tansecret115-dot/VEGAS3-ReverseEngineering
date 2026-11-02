/* Module: vidcap30.exe
   Function: FUN_004d0ed0
   Address: 004d0ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d0ed0(int param_1)

{
  if (*(HWND *)(param_1 + 0x84) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(HWND *)(param_1 + 0x9c) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(HWND *)(param_1 + 0xb0) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0xb0));
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  return;
}


