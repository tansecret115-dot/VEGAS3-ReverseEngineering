/* Module: pncrt.dll
   Function: FUN_780156a0
   Address: 780156a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780156a0(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  for (; (iVar1 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    iVar1 = *param_3 + -1;
    *param_3 = iVar1;
  }
  return;
}


