/* Module: vidcap30.exe
   Function: FUN_0049f5e0
   Address: 0049f5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049f5e0(LPSTR param_1,CHAR *param_2)

{
  char cVar1;
  LPSTR pCVar2;
  LPSTR pCVar3;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    do {
      if (cVar1 != '*') {
        pCVar2 = CharNextA(param_1);
        for (pCVar3 = param_1; pCVar3 != pCVar2; pCVar3 = pCVar3 + 1) {
          *param_2 = *pCVar3;
          param_2 = param_2 + 1;
        }
      }
      param_1 = CharNextA(param_1);
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    *param_2 = '\0';
    return;
  }
  *param_2 = '\0';
  return;
}


