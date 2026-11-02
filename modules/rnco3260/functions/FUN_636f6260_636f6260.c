/* Module: rnco3260.dll
   Function: FUN_636f6260
   Address: 636f6260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f6260(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = *param_3;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


