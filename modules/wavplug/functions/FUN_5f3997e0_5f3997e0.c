/* Module: wavplug.dll
   Function: FUN_5f3997e0
   Address: 5f3997e0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_5f3997e0(LPCSTR param_1)

{
  char cVar1;
  LPCSTR pCVar2;
  
  cVar1 = *param_1;
  pCVar2 = param_1;
  while (cVar1 != '\0') {
    if ((cVar1 == ':') || (cVar1 == '\\')) {
      pCVar2 = param_1 + 1;
    }
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  }
  return pCVar2;
}


