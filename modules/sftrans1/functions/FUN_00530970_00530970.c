/* Module: sftrans1.dll
   Function: FUN_00530970
   Address: 00530970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00530970(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x200] == 1) && (*param_1 != 0)) && (*(int *)(*param_1 + 4) != 0)) {
    iVar1 = FUN_00538570();
    if (-1 < iVar1) {
      return 1;
    }
  }
  return 0;
}


