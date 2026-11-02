/* Module: sftrkfx1.dll
   Function: FUN_5cbd2620
   Address: 5cbd2620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbd2620(int param_1)

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
  FUN_5cbcf090(param_1,1);
  ShowCaret(*(HWND *)(param_1 + 0x30));
  return;
}


