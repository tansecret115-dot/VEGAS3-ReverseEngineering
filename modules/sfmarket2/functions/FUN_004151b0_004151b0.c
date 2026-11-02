/* Module: sfmarket2.dll
   Function: FUN_004151b0
   Address: 004151b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004151b0(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x200] == 1) && (iVar1 = *param_1, iVar1 != 0)) && (*(int *)(iVar1 + 4) != 0)) {
    iVar1 = FUN_0041d330(iVar1);
    if (-1 < iVar1) {
      return 1;
    }
  }
  return 0;
}


