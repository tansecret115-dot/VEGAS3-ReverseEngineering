/* Module: vegas30.exe
   Function: FUN_0052ff70
   Address: 0052ff70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052ff70(HWND param_1,int param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  BOOL bEnable;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xf0;
  *(undefined4 *)(param_2 + 0xb58) = 0;
  pHVar1 = GetDlgItem(param_1,0x46f);
  LVar2 = SendMessageA(pHVar1,Msg,wParam,lParam);
  if (LVar2 == 1) {
    *(undefined4 *)(param_2 + 0xb58) = 1;
  }
  bEnable = *(BOOL *)(param_2 + 0xb58);
  pHVar1 = GetDlgItem(param_1,0x43b);
  EnableWindow(pHVar1,bEnable);
  return 1;
}


