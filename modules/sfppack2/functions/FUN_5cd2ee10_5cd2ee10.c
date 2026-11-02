/* Module: sfppack2.dll
   Function: FUN_5cd2ee10
   Address: 5cd2ee10
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_5cd2ee10(LPCSTR param_1)

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


