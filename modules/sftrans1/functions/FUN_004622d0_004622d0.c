/* Module: sftrans1.dll
   Function: FUN_004622d0
   Address: 004622d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004622d0(int param_1,undefined4 param_2,HWND param_3)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_004c4710(0x114,param_2,param_3,1,1000);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x595);
  if (param_3 == pHVar2) {
    *(float *)(*(int *)(param_1 + 8) + 0x68) = (float)iVar1 * _DAT_0055d648;
    FUN_0045fcb0();
    return 1;
  }
  return 0;
}


