/* Module: vidcap30.exe
   Function: FUN_00548960
   Address: 00548960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00548960(int param_1,int param_2)

{
  *(int *)(*(int *)(param_1 + 8) + 0x24) = param_2;
  InvalidateRect(*(HWND *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x28),(RECT *)0x0,0);
  if (param_2 == 0) {
    BringWindowToTop(*(HWND *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x28));
    SetFocus(*(HWND *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x28));
  }
  return 0;
}


