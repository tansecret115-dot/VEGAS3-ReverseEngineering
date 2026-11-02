/* Module: mcplugrw.dll
   Function: FUN_0041c730
   Address: 0041c730
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_0041c730(LPCSTR param_1)

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


