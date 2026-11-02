/* Module: rmme3260.dll
   Function: FUN_6623d000
   Address: 6623d000
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6623d000(int param_1)

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


