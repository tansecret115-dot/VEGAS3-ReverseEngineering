/* Module: erv23260.dll
   Function: FUN_637fd250
   Address: 637fd250
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_637fd250(int param_1)

{
  return *(int *)(param_1 + 0xc) + (*(int *)(param_1 + 8) * 0x1fffffff + *(int *)(param_1 + 4)) * 8;
}


