/* Module: vidpcore.dll
   Function: FUN_5de97500
   Address: 5de97500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de97500(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_5deb35b0(param_2,param_3,param_4,1,100);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x59b);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x14) = (double)iVar1 * _DAT_5df1f300;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


