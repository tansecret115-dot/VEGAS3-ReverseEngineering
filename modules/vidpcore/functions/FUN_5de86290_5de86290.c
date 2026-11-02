/* Module: vidpcore.dll
   Function: FUN_5de86290
   Address: 5de86290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de86290(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x473);
  if (param_4 == pHVar1) {
    iVar2 = FUN_5deb35b0(param_2,param_3,param_4,1,0x32);
    param_1[0x14] = (int)((float)iVar2 * _DAT_5df2ade0);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  iVar2 = FUN_5deb35b0(param_2,param_3,param_4,1,100);
  *(double *)(param_1 + 0x16) = (double)iVar2 * _DAT_5df1f300;
  (**(code **)(*param_1 + 0x2c))(param_1);
  return 0;
}


