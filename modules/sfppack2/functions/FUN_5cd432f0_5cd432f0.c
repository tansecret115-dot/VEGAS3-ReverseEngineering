/* Module: sfppack2.dll
   Function: FUN_5cd432f0
   Address: 5cd432f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cd432f0(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x200] == 1) && (iVar1 = *param_1, iVar1 != 0)) && (*(int *)(iVar1 + 4) != 0)) {
    iVar1 = FUN_5cd4af20(iVar1);
    if (-1 < iVar1) {
      return 1;
    }
  }
  return 0;
}


