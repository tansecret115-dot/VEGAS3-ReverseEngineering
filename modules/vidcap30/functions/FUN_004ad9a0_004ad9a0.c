/* Module: vidcap30.exe
   Function: FUN_004ad9a0
   Address: 004ad9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ad9a0(int param_1)

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
    FUN_004ac5e0(param_1,1);
    ShowCaret(*(HWND *)(param_1 + 0x38));
  }
  return;
}


