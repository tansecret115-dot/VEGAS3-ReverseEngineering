/* Module: rmto3260.dll
   Function: FUN_662f2760
   Address: 662f2760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662f2760(int param_1)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 8)) {
    FUN_662f2760(*(int *)(param_1 + 4));
  }
  return;
}


