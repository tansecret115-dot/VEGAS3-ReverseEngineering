/* Module: vegas30k.dll
   Function: FUN_010ab4f0
   Address: 010ab4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010ab4f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HWND hWnd;
  
  FUN_010aace0(param_1,param_2,param_3,8,param_4);
  if ((*(uint *)(param_1 + 0xc) & 0x40000) != 0) {
    hWnd = *(HWND *)(param_1 + 0x38);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x30));
    }
    SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x34) | 0x40000,*(LPARAM *)(param_1 + 0x30));
  }
  return;
}


