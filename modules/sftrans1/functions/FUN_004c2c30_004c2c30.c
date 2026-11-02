/* Module: sftrans1.dll
   Function: FUN_004c2c30
   Address: 004c2c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c2c30(int param_1,undefined4 param_2,undefined4 param_3)

{
  HWND hWnd;
  
  FUN_004c2700(param_1,param_2,param_3,8);
  if ((*(uint *)(param_1 + 0xc) & 0x80000) != 0) {
    hWnd = *(HWND *)(param_1 + 0x30);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x28));
    }
    SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x2c) | 0x40000,*(LPARAM *)(param_1 + 0x28));
  }
  return;
}


