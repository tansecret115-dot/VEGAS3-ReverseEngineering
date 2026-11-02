/* Module: vidpcore.dll
   Function: FUN_5dead6d0
   Address: 5dead6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dead6d0(int param_1)

{
  HWND hWnd;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      hWnd = *(HWND *)(param_1 + 4);
      if (hWnd == (HWND)0x0) {
        hWnd = GetParent(*(HWND *)(param_1 + 0x38));
      }
      SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x3c) | 0x10000,*(LPARAM *)(param_1 + 0x38));
    }
    FUN_5deac310(param_1,1);
    ShowCaret(*(HWND *)(param_1 + 0x38));
  }
  return;
}


