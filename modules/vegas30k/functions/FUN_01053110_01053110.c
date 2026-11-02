/* Module: vegas30k.dll
   Function: FUN_01053110
   Address: 01053110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01053110(int param_1)

{
  HWND hWnd;
  HWND hWnd_00;
  int lParam;
  HWND pHVar1;
  LRESULT LVar2;
  WPARAM WVar3;
  LPARAM LVar4;
  
  pHVar1 = GetFocus();
  hWnd = *(HWND *)(param_1 + 0x1c);
  hWnd_00 = *(HWND *)(param_1 + 0x18);
  if (pHVar1 == hWnd) {
    LVar2 = SendMessageA(hWnd,0x1032,0,0);
    if (LVar2 != 0) {
      if (LVar2 == 1) {
        LVar4 = 2;
      }
      else {
        LVar4 = 1;
      }
      WVar3 = SendMessageA(hWnd,0x100c,0xffffffff,LVar4);
      SendMessageA(hWnd,0x1017,WVar3,0);
      return;
    }
  }
  else if (pHVar1 == hWnd_00) {
    lParam = *(int *)(param_1 + 0x6fc);
    if (lParam != 0) {
      *(undefined4 *)(param_1 + 0x6fc) = 0;
      SendMessageA(hWnd_00,0x110e,0,lParam);
      return;
    }
    LVar2 = SendMessageA(hWnd_00,0x110a,9,0);
    if (LVar2 != 0) {
      SendMessageA(hWnd_00,0x110e,0,LVar2);
      return;
    }
  }
  else {
    LVar2 = SendMessageA(hWnd,0x1032,0,0);
    if (LVar2 != 0) {
      SetFocus(hWnd);
      if (LVar2 == 1) {
        LVar4 = 2;
      }
      else {
        LVar4 = 1;
      }
      WVar3 = SendMessageA(hWnd,0x100c,0xffffffff,LVar4);
      SendMessageA(hWnd,0x1017,WVar3,0);
      return;
    }
    SetFocus(hWnd_00);
    LVar2 = SendMessageA(hWnd_00,0x110a,9,0);
    if (LVar2 != 0) {
      SendMessageA(hWnd_00,0x110e,0,LVar2);
    }
  }
  return;
}


