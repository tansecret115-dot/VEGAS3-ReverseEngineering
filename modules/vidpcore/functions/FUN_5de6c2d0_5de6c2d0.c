/* Module: vidpcore.dll
   Function: FUN_5de6c2d0
   Address: 5de6c2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de6c2d0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_5deb35b0(param_2,param_3,param_4,1,10);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x3f8);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x16) = (double)iVar1 * _DAT_5df1a910;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x3f9);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x14) = (double)iVar1 * _DAT_5df1a910;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x526);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x18) = (double)iVar1 * _DAT_5df1a910;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


