/* Module: pncrt.dll
   Function: FUN_78023f50
   Address: 78023f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78023f50(uint param_1,int param_2,int *param_3)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_78023f30(param_1,param_3);
  } while (*param_3 != -1);
  return;
}


