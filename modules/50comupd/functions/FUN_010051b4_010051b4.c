/* Module: 50comupd.exe
   Function: FUN_010051b4
   Address: 010051b4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010051b4(char *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  cVar1 = *param_1;
  while ((cVar1 != '\0' &&
         ((((cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\r')) ||
          (((cVar1 == '\n' || (cVar1 == '\v')) || (cVar1 == '\f'))))))) {
    iVar3 = iVar4 + 1;
    iVar4 = iVar4 + 1;
    cVar1 = param_1[iVar3];
  }
  if (param_1[iVar4] == '\0') {
    uVar2 = 0;
  }
  else {
    iVar3 = lstrlenA(param_1 + iVar4);
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) break;
      cVar1 = (param_1 + iVar4)[iVar3];
    } while (((cVar1 == ' ') || (cVar1 == '\t')) ||
            ((cVar1 == '\r' || (((cVar1 == '\n' || (cVar1 == '\v')) || (cVar1 == '\f'))))));
    param_1[iVar3 + iVar4 + 1] = '\0';
    *param_2 = iVar4;
    uVar2 = 1;
  }
  return uVar2;
}


