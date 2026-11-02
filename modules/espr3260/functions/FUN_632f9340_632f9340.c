/* Module: espr3260.dll
   Function: FUN_632f9340
   Address: 632f9340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_632f9340(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


