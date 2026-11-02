/* Module: sftrans1.dll
   Function: FUN_004ab120
   Address: 004ab120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ab120(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_004c4710(param_2,param_3,param_4,1,0xffff);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x420);
  if (param_4 == pHVar2) {
    param_1[0xf8] = (int)(((float)iVar1 + (float)iVar1) * _DAT_0055c070);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x434);
  if (param_4 == pHVar2) {
    param_1[0xf9] = (int)((float)iVar1 * _DAT_0055c070);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x42d);
  if (param_4 == pHVar2) {
    param_1[0xfa] = (int)((float)iVar1 * _DAT_0055c070);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x422);
  if (param_4 == pHVar2) {
    param_1[0xfc] = (int)((float)iVar1 * _DAT_0055c070);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x432);
  if (param_4 == pHVar2) {
    param_1[0xfb] = (int)((float)(iVar1 * 2) * _DAT_0055c070 - (float)_DAT_00555908);
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


