/* Module: sfpagepeel.dll
   Function: FUN_0041d3b0
   Address: 0041d3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041d3b0(byte *param_1,int param_2,int param_3)

{
  HWND hWnd;
  
  FUN_0041cf00(param_1,param_2,param_3,8);
  if (*(int *)(param_1 + 0x2c) != 0) {
    hWnd = *(HWND *)(param_1 + 4);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x38));
    }
    SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x3c) | 0x40000,*(LPARAM *)(param_1 + 0x38));
  }
  return;
}


