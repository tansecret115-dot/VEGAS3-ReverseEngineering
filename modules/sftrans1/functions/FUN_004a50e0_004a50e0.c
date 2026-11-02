/* Module: sftrans1.dll
   Function: FUN_004a50e0
   Address: 004a50e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a50e0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_004c4710(param_2,param_3,param_4,1,0x10000);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x414);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x14) = (double)iVar1 * _DAT_00557d68 * _DAT_00565198;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x415);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x16) = (double)iVar1 * _DAT_00565198;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


