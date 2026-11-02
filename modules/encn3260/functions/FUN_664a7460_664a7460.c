/* Module: encn3260.dll
   Function: FUN_664a7460
   Address: 664a7460
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664a7460(int param_1)

{
  if (*(int *)(param_1 + 0x144) == 0) {
    while( true ) {
      param_1 = *(int *)(param_1 + 0x68);
      if (param_1 == 0) break;
      if (*(int *)(param_1 + 0x144) != 0) {
        return param_1;
      }
    }
    param_1 = 0;
  }
  return param_1;
}


