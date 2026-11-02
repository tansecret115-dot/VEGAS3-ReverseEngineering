/* Module: rmme3260.dll
   Function: FUN_662323e0
   Address: 662323e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662323e0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_66231310(*(void **)(param_1 + 0xc),(uint)(param_2 == 0));
    return 0;
  }
  FUN_662313e0(*(void **)(param_1 + 0xc),(uint)(param_2 == 0));
  return 0;
}


