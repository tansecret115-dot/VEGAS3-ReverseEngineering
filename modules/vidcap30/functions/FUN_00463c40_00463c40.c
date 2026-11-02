/* Module: vidcap30.exe
   Function: FUN_00463c40
   Address: 00463c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463c40(HWND param_1)

{
  HWND pHVar1;
  HWND hWnd;
  LRESULT LVar2;
  BOOL bEnable;
  
  pHVar1 = GetDlgItem(param_1,0xe8e);
  hWnd = GetDlgItem(param_1,0xe7d);
  FUN_00463a50(pHVar1,hWnd);
  LVar2 = SendMessageA(hWnd,0x18b,0,0);
  if (LVar2 == 1) {
    bEnable = 0;
    pHVar1 = GetDlgItem(param_1,0xe7e);
    EnableWindow(pHVar1,bEnable);
  }
  FUN_00463770(param_1,hWnd,0);
  return;
}


