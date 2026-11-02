/* Module: rmbe3260.dll
   Function: FUN_66051370
   Address: 66051370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66051370(int param_1)

{
  undefined1 local_28 [20];
  undefined4 local_14;
  
  if (-1 < *(int *)(param_1 + 8)) {
    fstat(*(int *)(param_1 + 8),local_28);
    return local_14;
  }
  return 0;
}


