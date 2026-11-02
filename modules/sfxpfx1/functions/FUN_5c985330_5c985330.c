/* Module: sfxpfx1.dll
   Function: FUN_5c985330
   Address: 5c985330
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c985330(char *param_1,LPSTR param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char local_104 [260];
  
  if (((param_1 == (char *)0x0) || (param_2 == (LPSTR)0x0)) || (param_3 == 0)) {
    return 0;
  }
  cVar2 = *param_1;
  pcVar3 = local_104;
  if ((cVar2 == '\\') && (param_1[1] == '\\')) {
    pcVar5 = param_1 + 2;
    pcVar3 = local_104 + 2;
    cVar2 = *pcVar5;
    while ((cVar2 != '\0' && (cVar2 != '\\'))) {
      *pcVar3 = cVar2;
      pcVar1 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar1;
    }
    cVar2 = pcVar5[1];
    *pcVar3 = '\\';
    local_104[0] = '\\';
    while ((pcVar3 = pcVar3 + 1, local_104[1] = local_104[0], cVar2 != '\0' && (cVar2 != '\\'))) {
      *pcVar3 = cVar2;
      cVar2 = pcVar5[2];
      pcVar5 = pcVar5 + 1;
    }
  }
  else {
    while ((cVar2 != '\0' && (cVar2 != '\\'))) {
      *pcVar3 = cVar2;
      pcVar5 = param_1 + 1;
      pcVar3 = pcVar3 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar5;
    }
  }
  *pcVar3 = '\\';
  pcVar3[1] = '\0';
  uVar4 = lstrlenA(local_104);
  if (param_3 <= uVar4) {
    *param_2 = '\0';
    return uVar4;
  }
  lstrcpyA(param_2,local_104);
  return uVar4;
}


