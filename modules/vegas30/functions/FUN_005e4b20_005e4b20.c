/* Module: vegas30.exe
   Function: FUN_005e4b20
   Address: 005e4b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e4b20(int param_1,int param_2)

{
  if (*(HWND *)(param_1 + 0x10) == (HWND)0x0) {
    return 0x8000ffff;
  }
  if (((param_2 != 5) && (param_2 != 1)) && (param_2 != 0)) {
    return 0x80070057;
  }
  ShowWindow(*(HWND *)(param_1 + 0x10),param_2);
  InvalidateRect(*(HWND *)(param_1 + 0x10),(RECT *)0x0,1);
  return 0;
}


