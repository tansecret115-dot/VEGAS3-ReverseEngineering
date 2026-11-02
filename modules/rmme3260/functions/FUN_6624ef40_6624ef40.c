/* Module: rmme3260.dll
   Function: FUN_6624ef40
   Address: 6624ef40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6624ef40(char *param_1,char *param_2,int param_3)

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


