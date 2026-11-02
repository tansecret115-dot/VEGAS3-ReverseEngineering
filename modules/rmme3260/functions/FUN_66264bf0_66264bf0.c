/* Module: rmme3260.dll
   Function: FUN_66264bf0
   Address: 66264bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66264bf0(int param_1)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 8)) {
    FUN_66264bf0(*(int *)(param_1 + 4));
  }
  return;
}


