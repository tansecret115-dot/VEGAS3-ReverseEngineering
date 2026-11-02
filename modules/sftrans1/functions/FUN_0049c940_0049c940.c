/* Module: sftrans1.dll
   Function: FUN_0049c940
   Address: 0049c940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0049c940(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  LRESULT LVar1;
  LRESULT LVar2;
  WPARAM wParam;
  
  if ((param_4 != 0) && (*(int *)(param_4 + 4) == 0x70a)) {
    if (*(int *)(param_4 + 8) == 1) {
      FUN_0049ca10(*(undefined4 *)(param_1 + 0x80));
    }
    else if (*(int *)(param_4 + 8) == 2) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_4 + 0xc);
      hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x708);
      LVar1 = SendMessageA(hWnd,0x146,0,0);
      if ((LVar1 != -1) && (wParam = 0, 0 < LVar1)) {
        do {
          LVar2 = SendMessageA(hWnd,0x150,wParam,0);
          if ((LVar2 != -1) && (LVar2 == *(int *)(param_1 + 0x80))) {
            SendMessageA(hWnd,0x14e,wParam,0);
            break;
          }
          wParam = wParam + 1;
        } while ((int)wParam < LVar1);
      }
      FUN_0049bbd0();
      return 0;
    }
  }
  return 0;
}


