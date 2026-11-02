/* Module: vidpcore.dll
   Function: FUN_5de9e320
   Address: 5de9e320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de9e320(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int lParam;
  HWND pHVar1;
  int nIDDlgItem;
  UINT Msg;
  WPARAM wParam;
  
  lParam = FUN_5deb35b0(param_2,param_3,param_4,1,0x96);
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x5c6);
  if (param_4 == pHVar1) {
    nIDDlgItem = 0x449;
    param_1[0x17] = (int)((float)lParam * _DAT_5df2fd7c * _DAT_5df2fd78 + _DAT_5df2bbe0);
  }
  else {
    pHVar1 = GetDlgItem((HWND)param_1[0xc],0x449);
    if (param_4 != pHVar1) {
      return 0;
    }
    nIDDlgItem = 0x5c6;
    param_1[0x18] = (int)((float)lParam * _DAT_5df2fd7c * _DAT_5df2fd78 + _DAT_5df2bbe0);
  }
  wParam = 0;
  Msg = 0x611;
  pHVar1 = GetDlgItem((HWND)param_1[0xc],nIDDlgItem);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  (**(code **)(*param_1 + 0x2c))(param_1);
  return 0;
}


