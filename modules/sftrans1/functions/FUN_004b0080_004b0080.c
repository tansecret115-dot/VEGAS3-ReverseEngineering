/* Module: sftrans1.dll
   Function: FUN_004b0080
   Address: 004b0080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004b0080(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = GetDlgItem((HWND)param_1[0xc],300);
  if (pHVar1 == param_4) {
    iVar2 = FUN_004c4710(param_2,param_3,param_4,0x41,0x1999);
    *(double *)(param_1 + 0x14) = (double)iVar2 * _DAT_005624e8 * _DAT_0055f640;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x12f);
  if (pHVar1 == param_4) {
    iVar2 = FUN_004c4710(param_2,param_3,param_4,0x41,0x1999);
    *(double *)(param_1 + 0x16) = (double)iVar2 * _DAT_00557d68 * _DAT_0055f640;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x136);
  if (pHVar1 == param_4) {
    iVar2 = FUN_004c4710(param_2,param_3,param_4,0x41,0x1999);
    *(double *)(param_1 + 0x18) = (double)iVar2 * _DAT_0055f640;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


