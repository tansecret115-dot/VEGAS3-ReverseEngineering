/* Module: erv33260.dll
   Function: FUN_6707d640
   Address: 6707d640
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6707d640(int param_1)

{
  return *(int *)(param_1 + 0xc) + (*(int *)(param_1 + 8) * 0x1fffffff + *(int *)(param_1 + 4)) * 8;
}


