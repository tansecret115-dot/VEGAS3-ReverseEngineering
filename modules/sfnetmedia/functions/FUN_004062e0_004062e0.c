/* Module: sfnetmedia.dll
   Function: FUN_004062e0
   Address: 004062e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004062e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  *(int *)(param_1 + 4) = iVar1;
  return 0;
}


