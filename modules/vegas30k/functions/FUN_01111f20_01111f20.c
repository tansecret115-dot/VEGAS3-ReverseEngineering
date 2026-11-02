/* Module: vegas30k.dll
   Function: FUN_01111f20
   Address: 01111f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01111f20(int param_1)

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
    FUN_01110b60(param_1,1);
    ShowCaret(*(HWND *)(param_1 + 0x38));
  }
  return;
}


