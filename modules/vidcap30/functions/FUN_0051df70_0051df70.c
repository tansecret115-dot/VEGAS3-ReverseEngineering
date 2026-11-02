/* Module: vidcap30.exe
   Function: FUN_0051df70
   Address: 0051df70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051df70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HWND hWnd;
  
  FUN_0051d760(param_1,param_2,param_3,8,param_4);
  if ((*(uint *)(param_1 + 0xc) & 0x40000) != 0) {
    hWnd = *(HWND *)(param_1 + 0x38);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x30));
    }
    SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x34) | 0x40000,*(LPARAM *)(param_1 + 0x30));
  }
  return;
}


