/* Module: sctplug.dll
   Function: FUN_0040a630
   Address: 0040a630
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040a630(char *param_1)

{
  LPSTR lpsz;
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = -1;
  cVar1 = *param_1;
  iVar3 = 0;
  lpsz = param_1;
  if (cVar1 != '\0') {
    do {
      if (cVar1 == ' ') {
        if (iVar2 == -1) {
          iVar2 = iVar3;
        }
      }
      else {
        iVar2 = -1;
      }
      iVar3 = iVar3 + 1;
      lpsz = CharNextA(lpsz);
      cVar1 = *lpsz;
    } while (cVar1 != '\0');
    if (iVar2 != -1) {
      if (0 < iVar2) {
        do {
          param_1 = CharNextA(param_1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      *param_1 = '\0';
    }
  }
  return;
}


