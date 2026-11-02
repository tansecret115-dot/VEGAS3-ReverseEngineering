/* Module: vidcap30.exe
   Function: FUN_00463bd0
   Address: 00463bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463bd0(HWND param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  HWND hWnd;
  LRESULT bEnable;
  BOOL bEnable_00;
  
  pHVar1 = GetDlgItem(param_1,0xe8e);
  pHVar2 = GetDlgItem(param_1,0xe7d);
  FUN_00463a50(pHVar2,pHVar1);
  bEnable_00 = 1;
  hWnd = GetDlgItem(param_1,0xe7e);
  EnableWindow(hWnd,bEnable_00);
  bEnable = SendMessageA(pHVar1,0x18b,0,0);
  if (bEnable == 0) {
    pHVar1 = GetDlgItem(param_1,0xe3b);
    EnableWindow(pHVar1,bEnable);
  }
  FUN_00463770(param_1,pHVar2,0);
  return;
}


