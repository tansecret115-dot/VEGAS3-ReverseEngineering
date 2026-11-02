/* Module: rmto3260.dll
   Function: FUN_662f2040
   Address: 662f2040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662f2040(int param_1)

{
  undefined1 local_28 [20];
  undefined4 local_14;
  
  if (-1 < *(int *)(param_1 + 8)) {
    fstat(*(int *)(param_1 + 8),local_28);
    return local_14;
  }
  return 0;
}


