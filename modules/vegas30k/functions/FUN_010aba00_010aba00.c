/* Module: vegas30k.dll
   Function: FUN_010aba00
   Address: 010aba00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010aba00(int param_1)

{
  uint uVar1;
  HWND hWnd;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar1 | 2;
  if ((uVar1 & 0x40000) != 0) {
    hWnd = *(HWND *)(param_1 + 0x38);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x30));
    }
    SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x34) | 0x10000,*(LPARAM *)(param_1 + 0x30));
  }
  FUN_010a8470(param_1,1);
  ShowCaret(*(HWND *)(param_1 + 0x30));
  return;
}


