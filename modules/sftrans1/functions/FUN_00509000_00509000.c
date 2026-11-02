/* Module: sftrans1.dll
   Function: FUN_00509000
   Address: 00509000
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_00509000(LPCSTR param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    if ((cVar1 == ':') || (cVar1 == '\\')) {
      pcVar2 = param_1 + 1;
    }
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  }
  return pcVar2;
}


