/* Module: sfppack1.dll
   Function: FUN_5ce00bba
   Address: 5ce00bba
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ce00bba(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  return *(undefined4 *)(param_1 + 0xc);
}


