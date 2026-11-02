/* Module: vegas30.exe
   Function: FUN_00607800
   Address: 00607800
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00607800(char *param_1,LPSTR param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  char local_104 [260];
  
  if (((param_1 == (char *)0x0) || (param_2 == (LPSTR)0x0)) || (param_3 == 0)) {
    return 0;
  }
  cVar2 = *param_1;
  pcVar3 = local_104;
  if ((cVar2 == '\\') && (param_1[1] == '\\')) {
    param_1 = param_1 + 2;
    pcVar3 = local_104 + 2;
    cVar2 = *param_1;
    while ((cVar2 != '\0' && (cVar2 != '\\'))) {
      *pcVar3 = cVar2;
      pcVar1 = param_1 + 1;
      pcVar3 = pcVar3 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
    cVar2 = param_1[1];
    *pcVar3 = '\\';
    local_104[0] = '\\';
    while ((pcVar3 = pcVar3 + 1, local_104[1] = local_104[0], cVar2 != '\0' && (cVar2 != '\\'))) {
      *pcVar3 = cVar2;
      cVar2 = param_1[2];
      param_1 = param_1 + 1;
    }
  }
  else {
    while ((cVar2 != '\0' && (cVar2 != '\\'))) {
      *pcVar3 = cVar2;
      pcVar1 = param_1 + 1;
      pcVar3 = pcVar3 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
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


