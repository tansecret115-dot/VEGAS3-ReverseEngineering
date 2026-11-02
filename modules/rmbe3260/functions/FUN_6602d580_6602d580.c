/* Module: rmbe3260.dll
   Function: FUN_6602d580
   Address: 6602d580
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602d580(int param_1)

{
  if (*(int *)(param_1 + 0x4c) == 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0xc))(*(int **)(param_1 + 0x48),param_1);
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  return;
}


