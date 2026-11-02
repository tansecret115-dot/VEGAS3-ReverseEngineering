/* Module: encn3260.dll
   Function: FUN_6649bd50
   Address: 6649bd50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649bd50(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_6649ac90(*(void **)(param_1 + 0xc),(uint)(param_2 == 0));
    return 0;
  }
  FUN_6649ad60(*(void **)(param_1 + 0xc),(uint)(param_2 == 0));
  return 0;
}


