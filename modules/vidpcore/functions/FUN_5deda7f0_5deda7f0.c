/* Module: vidpcore.dll
   Function: FUN_5deda7f0
   Address: 5deda7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_5deda7f0(LPCSTR param_1)

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


