/* Module: vidcap30.exe
   Function: FUN_004af840
   Address: 004af840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004af840(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  HWND hWnd;
  
  hWnd = *(HWND *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x28));
    }
    SendMessageA(hWnd,0x115,param_5 << 0x10 | param_4 & 0xffff,*(LPARAM *)(param_1 + 0x28));
    return;
  }
  if (hWnd == (HWND)0x0) {
    hWnd = GetParent(*(HWND *)(param_1 + 0x28));
  }
  SendMessageA(hWnd,0x114,param_5 << 0x10 | param_4 & 0xffff,*(LPARAM *)(param_1 + 0x28));
  return;
}


