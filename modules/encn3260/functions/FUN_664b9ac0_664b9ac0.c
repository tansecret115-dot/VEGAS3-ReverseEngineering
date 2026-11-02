/* Module: encn3260.dll
   Function: FUN_664b9ac0
   Address: 664b9ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664b9ac0(char *param_1,char *param_2,int param_3)

{
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    if (*param_2 == '\0') break;
    *param_1 = *param_2;
    param_2 = param_2 + 2;
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return;
}


