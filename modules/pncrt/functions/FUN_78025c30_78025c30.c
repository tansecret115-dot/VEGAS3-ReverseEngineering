/* Module: pncrt.dll
   Function: FUN_78025c30
   Address: 78025c30
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_78025c30(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0xffffffff;
  iVar5 = 0;
  pcVar2 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = malloc(~uVar4);
  if (pcVar2 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar3 = pcVar2;
    while (cVar1 != '\0') {
      if (cVar1 == '\"') {
        iVar5 = iVar5 + 1;
      }
      else {
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      }
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    if (iVar5 != 0) {
      *pcVar3 = '\0';
      return pcVar2;
    }
    free(pcVar2);
  }
  return (char *)0x0;
}


