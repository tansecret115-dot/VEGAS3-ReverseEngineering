/* Module: qt4plug.dll
   Function: FUN_5f5232a0
   Address: 5f5232a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f5232a0(void *this,uint param_1,LRESULT param_2)

{
  bool bVar1;
  HWND hWnd;
  WPARAM WVar2;
  
  hWnd = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d5);
  if (hWnd != (HWND)0x0) {
    if (param_2 == 0) {
      WVar2 = SendMessageA(hWnd,0x147,0,0);
      if (WVar2 != 0xffffffff) {
        param_2 = SendMessageA(hWnd,0x150,WVar2,0);
      }
    }
    SendMessageA(hWnd,0x14b,0,0);
    bVar1 = false;
    if ((param_1 & 0x300) != 0) {
      WVar2 = SendMessageA(hWnd,0x143,0,0x5f596ea4);
      SendMessageA(hWnd,0x151,WVar2,8);
      if (param_2 == 8) {
        SendMessageA(hWnd,0x14e,WVar2,0);
        bVar1 = true;
      }
    }
    if ((param_1 & 0x400) != 0) {
      WVar2 = SendMessageA(hWnd,0x143,0,0x5f596ea0);
      SendMessageA(hWnd,0x151,WVar2,0x10);
      if (param_2 == 0x10) {
        SendMessageA(hWnd,0x14e,WVar2,0);
        return 1;
      }
    }
    if (!bVar1) {
      SendMessageA(hWnd,0x14e,0,0);
    }
  }
  return 1;
}


