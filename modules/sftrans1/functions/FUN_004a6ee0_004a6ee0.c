/* Module: sftrans1.dll
   Function: FUN_004a6ee0
   Address: 004a6ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a6ee0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_004c4710(param_2,param_3,param_4,1,0x10000);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x6db);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x1c) = (double)iVar1 * _DAT_00565198;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


