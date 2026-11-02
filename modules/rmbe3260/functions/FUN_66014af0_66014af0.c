/* Module: rmbe3260.dll
   Function: FUN_66014af0
   Address: 66014af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66014af0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return 0x80004003;
  }
  *(int *)(param_1 + 8) = param_2;
  return 0;
}


