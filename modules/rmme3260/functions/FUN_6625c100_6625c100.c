/* Module: rmme3260.dll
   Function: FUN_6625c100
   Address: 6625c100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6625c100(int param_1)

{
  undefined1 local_28 [20];
  undefined4 local_14;
  
  if (-1 < *(int *)(param_1 + 8)) {
    fstat(*(int *)(param_1 + 8),local_28);
    return local_14;
  }
  return 0;
}


