/* Module: vidcap30.exe
   Function: FUN_004ad6b0
   Address: 004ad6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ad6b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  HWND hWnd;
  
  FUN_004ad200(param_1,param_2,param_3,8);
  if (*(int *)(param_1 + 0x2c) != 0) {
    hWnd = *(HWND *)(param_1 + 4);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x38));
    }
    SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x3c) | 0x40000,*(LPARAM *)(param_1 + 0x38));
  }
  return;
}


