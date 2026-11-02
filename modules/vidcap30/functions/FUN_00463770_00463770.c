/* Module: vidcap30.exe
   Function: FUN_00463770
   Address: 00463770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463770(HWND param_1,HWND param_2)

{
  LRESULT LVar1;
  HWND pHVar2;
  HWND hWnd;
  LRESULT LVar3;
  
  LVar1 = SendMessageA(param_2,0x188,0,0);
  pHVar2 = GetDlgItem(param_1,0xe81);
  hWnd = GetDlgItem(param_1,0xe82);
  if (LVar1 == -1) {
    EnableWindow(pHVar2,0);
    EnableWindow(hWnd,0);
    pHVar2 = GetFocus();
    if (pHVar2 == (HWND)0x0) {
      SetFocus(param_2);
    }
  }
  else {
    LVar3 = SendMessageA(param_2,0x18b,0,0);
    EnableWindow(pHVar2,(uint)(LVar1 != 0));
    EnableWindow(hWnd,(uint)(LVar1 != LVar3 + -1));
    pHVar2 = GetFocus();
    if (pHVar2 == (HWND)0x0) {
      SetFocus(param_2);
      return;
    }
  }
  return;
}


