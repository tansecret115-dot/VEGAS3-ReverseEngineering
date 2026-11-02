/* Module: vegas30k.dll
   Function: FUN_01018940
   Address: 01018940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01018940(LPCSTR param_1)

{
  char cVar1;
  LPSTR pCVar2;
  LPCSTR lpsz;
  
  cVar1 = *param_1;
  lpsz = param_1;
  while (cVar1 != '\0') {
    if (cVar1 != ' ') {
      lpsz = param_1;
    }
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  }
  pCVar2 = CharNextA(lpsz);
  *pCVar2 = '\0';
  return 0;
}


