/* Module: sftrans1.dll
   Function: FUN_004b2c90
   Address: 004b2c90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004b2c90(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_004c4710(param_2,param_3,param_4,1,0x400);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x6f0);
  if (pHVar2 == param_4) {
    *(double *)(param_1 + 0x1e) = (double)iVar1 * _DAT_00565320;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x6f3);
  if (pHVar2 == param_4) {
    *(double *)(param_1 + 0x20) = (double)iVar1 * _DAT_00565320;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x6f7);
  if (pHVar2 == param_4) {
    *(double *)(param_1 + 0x24) = (double)iVar1 * _DAT_00565320;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x701);
  if (pHVar2 == param_4) {
    *(double *)(param_1 + 0x26) = (double)iVar1 * _DAT_00565320;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x6f9);
  if (pHVar2 == param_4) {
    *(double *)(param_1 + 0x28) = (double)iVar1 * _DAT_00565320;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x708);
  if (pHVar2 == param_4) {
    *(double *)(param_1 + 0x30) = (double)iVar1 * _DAT_00565320;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x70b);
  if (pHVar2 == param_4) {
    *(double *)(param_1 + 0x32) = (double)iVar1 * _DAT_00565320;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


