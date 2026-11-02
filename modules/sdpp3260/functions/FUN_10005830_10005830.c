/* Module: sdpp3260.dll
   Function: FUN_10005830
   Address: 10005830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_10005830(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_10002800((int *)(param_1 + 0x10));
    return *puVar2;
  }
  return 0;
}


