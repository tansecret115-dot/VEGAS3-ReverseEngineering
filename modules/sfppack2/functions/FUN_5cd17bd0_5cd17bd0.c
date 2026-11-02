/* Module: sfppack2.dll
   Function: FUN_5cd17bd0
   Address: 5cd17bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd17bd0(int param_1)

{
  uint uVar1;
  HWND hWnd;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar1 | 2;
  if ((uVar1 & 0x80000) != 0) {
    hWnd = *(HWND *)(param_1 + 0x30);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x28));
    }
    SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x2c) | 0x10000,*(LPARAM *)(param_1 + 0x28));
  }
  FUN_5cd15480(param_1,1);
  ShowCaret(*(HWND *)(param_1 + 0x28));
  return;
}


