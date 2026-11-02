/* Module: sftrans1.dll
   Function: FUN_0045f000
   Address: 0045f000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0045f000(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x56e);
  if (param_4 == pHVar1) {
    iVar2 = FUN_004c4710(param_2,param_3,param_4,0x41,0x1999);
    param_1[0x15] = (int)((float)iVar2 * _DAT_0055c070);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x570);
  if (param_4 == pHVar1) {
    iVar2 = FUN_004c4710(param_2,param_3,param_4,0x41,0x1999);
    param_1[0x16] = (int)((float)iVar2 * _DAT_0055c070);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x568);
  if (param_4 == pHVar1) {
    iVar2 = FUN_004c4710(param_2,param_3,param_4,1,1000);
    param_1[0x13] = (int)((float)iVar2 * _DAT_0055d648);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x574);
  if (param_4 == pHVar1) {
    iVar2 = FUN_004c4710(param_2,param_3,param_4,1,0x32);
    param_1[0x1d] = (int)((float)iVar2 * _DAT_0055e6c8);
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


