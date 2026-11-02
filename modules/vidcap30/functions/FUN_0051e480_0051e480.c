/* Module: vidcap30.exe
   Function: FUN_0051e480
   Address: 0051e480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051e480(int param_1)

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
  FUN_0051aef0(param_1,1);
  ShowCaret(*(HWND *)(param_1 + 0x30));
  return;
}


