/* Module: vidpcore.dll
   Function: FUN_5de98e80
   Address: 5de98e80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de98e80(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x5a8);
  if (param_4 == pHVar1) {
    iVar2 = FUN_5deb35b0(param_2,param_3,param_4,1,5);
    param_1[0x15] = (int)((float)iVar2 * _DAT_5df2f2e0 * _DAT_5df224a8);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x5a9);
  if (param_4 == pHVar1) {
    iVar2 = FUN_5deb35b0(param_2,param_3,param_4,1,5);
    param_1[0x16] = (int)((float)iVar2 * _DAT_5df2f2e4 * _DAT_5df224a8);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x5aa);
  if (param_4 == pHVar1) {
    iVar2 = FUN_5deb35b0(param_2,param_3,param_4,1,1);
    param_1[0x1c] = iVar2;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x5ab);
  if (param_4 == pHVar1) {
    iVar2 = FUN_5deb35b0(param_2,param_3,param_4,1,1);
    param_1[0x1d] = iVar2;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x5b4);
  if (param_4 == pHVar1) {
    iVar2 = FUN_5deb35b0(param_2,param_3,param_4,1,5);
    param_1[0x21] = (int)((float)iVar2 * _DAT_5df2f2e8 * _DAT_5df224a8);
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


