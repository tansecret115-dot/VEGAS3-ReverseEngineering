/* Module: qt4plug.dll
   Function: FUN_5f5233a0
   Address: 5f5233a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f5233a0(void *this,uint param_1,LRESULT param_2)

{
  HWND hWnd;
  WPARAM WVar1;
  LPSTR pCVar2;
  
  hWnd = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d6);
  if (hWnd != (HWND)0x0) {
    if (param_2 == 0) {
      WVar1 = SendMessageA(hWnd,0x147,0,0);
      if (WVar1 != 0xffffffff) {
        param_2 = SendMessageA(hWnd,0x150,WVar1,0);
      }
    }
    SendMessageA(hWnd,0x14b,0,0);
    pCVar2 = FUN_5f527a90(DAT_5f5a4158,0x1b0);
    WVar1 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
    SendMessageA(hWnd,0x151,WVar1,1);
    SendMessageA(hWnd,0x14e,WVar1,0);
    if ((param_1 & 0x800) != 0) {
      pCVar2 = FUN_5f527a90(DAT_5f5a4158,0x1b1);
      WVar1 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
      SendMessageA(hWnd,0x151,WVar1,2);
      if (param_2 == 2) {
        SendMessageA(hWnd,0x14e,WVar1,0);
      }
    }
  }
  return 1;
}


