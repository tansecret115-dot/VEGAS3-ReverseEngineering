/* Module: pncrt.dll
   Function: FUN_7800f390
   Address: 7800f390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7800f390(uint param_1,int param_2,FILE *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_7800f340(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


