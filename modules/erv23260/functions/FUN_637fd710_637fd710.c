/* Module: erv23260.dll
   Function: FUN_637fd710
   Address: 637fd710
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637fd710(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}


