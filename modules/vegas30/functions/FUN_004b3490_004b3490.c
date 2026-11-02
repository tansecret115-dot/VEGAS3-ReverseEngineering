/* Module: vegas30.exe
   Function: FUN_004b3490
   Address: 004b3490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b3490(HWND param_1,int *param_2)

{
  HWND pHVar1;
  UINT Msg;
  uint wParam;
  BOOL BVar2;
  LPARAM lParam;
  
  if (*(char *)(*param_2 + 8000) == '\0') {
    BVar2 = 0;
    pHVar1 = GetDlgItem(param_1,0x46a);
    EnableWindow(pHVar1,BVar2);
    wParam = 0;
  }
  else {
    BVar2 = 1;
    pHVar1 = GetDlgItem(param_1,0x46a);
    EnableWindow(pHVar1,BVar2);
    wParam = (uint)(*(int *)(*param_2 + 0x2070) == 0);
  }
  lParam = 0;
  Msg = 0xf1;
  pHVar1 = GetDlgItem(param_1,0x46a);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  return;
}


