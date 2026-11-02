/* Module: mpegin.dll
   Function: FUN_1000fccd
   Address: 1000fccd
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000fccd(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1000fc98(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


