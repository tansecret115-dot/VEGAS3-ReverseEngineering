/* Module: vidpcore.dll
   Function: FUN_5de6a380
   Address: 5de6a380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de6a380(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int lParam;
  HWND pHVar1;
  int nIDDlgItem;
  UINT Msg;
  WPARAM wParam;
  
  lParam = FUN_5deb35b0(param_2,param_3,param_4,1,100);
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x3ee);
  if (param_4 == pHVar1) {
    nIDDlgItem = 0x599;
    *(double *)(param_1 + 0x14) = (double)lParam * _DAT_5df1f300;
  }
  else {
    pHVar1 = GetDlgItem((HWND)param_1[0xc],0x599);
    if (param_4 != pHVar1) {
      return 0;
    }
    nIDDlgItem = 0x3ee;
    *(double *)(param_1 + 0x1a) = (double)lParam * _DAT_5df1f300;
  }
  wParam = 0;
  Msg = 0x611;
  pHVar1 = GetDlgItem((HWND)param_1[0xc],nIDDlgItem);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  (**(code **)(*param_1 + 0x2c))(param_1);
  return 0;
}


