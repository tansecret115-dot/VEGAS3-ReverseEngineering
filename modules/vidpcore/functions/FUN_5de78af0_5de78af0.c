/* Module: vidpcore.dll
   Function: FUN_5de78af0
   Address: 5de78af0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de78af0(int *param_1,undefined4 param_2,int *param_3,HWND param_4)

{
  undefined4 *puVar1;
  int lParam;
  HWND pHVar2;
  HWND pHVar3;
  int nIDDlgItem;
  UINT Msg;
  WPARAM wParam;
  
  pHVar3 = param_4;
  lParam = FUN_5deb35b0(param_2,param_3,param_4,1,100);
  puVar1 = *(undefined4 **)param_1[2];
  param_3 = (int *)0x0;
  param_4 = (HWND)lParam;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b50,&param_3);
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x439);
  if (pHVar3 == pHVar2) {
    nIDDlgItem = 0x43b;
    param_1[0x15] = (int)((float)(int)param_4 * (float)_DAT_5df1f300);
  }
  else {
    pHVar2 = GetDlgItem((HWND)param_1[0xc],0x43b);
    if (pHVar3 != pHVar2) goto LAB_5de78ba1;
    nIDDlgItem = 0x439;
    param_1[0x16] = (int)((float)(int)param_4 * (float)_DAT_5df1f300);
  }
  wParam = 0;
  Msg = 0x611;
  pHVar3 = GetDlgItem((HWND)param_1[0xc],nIDDlgItem);
  SendMessageA(pHVar3,Msg,wParam,lParam);
  (**(code **)(*param_1 + 0x2c))(param_1);
LAB_5de78ba1:
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  return 0;
}


