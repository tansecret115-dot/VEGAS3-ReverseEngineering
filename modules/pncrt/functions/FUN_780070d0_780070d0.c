/* Module: pncrt.dll
   Function: FUN_780070d0
   Address: 780070d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780070d0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  
  for (; (param_3 != 0 && (cVar1 = *param_2, *param_1 = cVar1, cVar1 != '\0'));
      param_2 = param_2 + 1) {
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return;
}


