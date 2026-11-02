/* Module: sfpublish.dll
   Function: FUN_004061f0
   Address: 004061f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004061f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  *(int *)(param_1 + 4) = iVar1;
  return 0;
}


