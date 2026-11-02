/* Module: sftrans1.dll
   Function: FUN_00463740
   Address: 00463740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00463740(int param_1,undefined4 param_2,HWND param_3)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_004c4710(0x114,param_2,param_3,0x41,0x1999);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x598);
  if (param_3 == pHVar2) {
    *(double *)(*(int *)(param_1 + 8) + 0x80) = (double)iVar1 * _DAT_0055f640;
    FUN_0045fcb0();
    return 1;
  }
  return 0;
}


