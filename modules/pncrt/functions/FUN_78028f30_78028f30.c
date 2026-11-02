/* Module: pncrt.dll
   Function: FUN_78028f30
   Address: 78028f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78028f30(uint param_1,int param_2,FILE *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_78028f00(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


