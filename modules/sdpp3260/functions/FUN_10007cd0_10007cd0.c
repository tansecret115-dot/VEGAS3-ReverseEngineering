/* Module: sdpp3260.dll
   Function: FUN_10007cd0
   Address: 10007cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_10007cd0(LPCSTR param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  LPCSTR pCVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = FUN_10007c10();
  if (iVar2 == 0) {
    pcVar3 = strstr(param_1,param_2);
    return pcVar3;
  }
  uVar5 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  do {
    bVar6 = true;
    iVar2 = ~uVar5 - 1;
    pCVar4 = param_1;
    pcVar3 = param_2;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pCVar4 == *pcVar3;
      pCVar4 = pCVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar6);
    if (bVar6) {
      for (pCVar4 = param_1; pCVar4 < param_1 + (~uVar5 - 1); pCVar4 = FUN_10007c30(pCVar4)) {
      }
      if (pCVar4 == param_1 + (~uVar5 - 1)) {
        return param_1;
      }
    }
    param_1 = FUN_10007c30(param_1);
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
  } while( true );
}


