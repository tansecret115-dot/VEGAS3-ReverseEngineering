/* Module: sctplug.dll
   Function: FUN_0040f1a0
   Address: 0040f1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_0040f1a0(LPCSTR param_1)

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


