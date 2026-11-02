/* Module: pncrt.dll
   Function: FUN_78019910
   Address: 78019910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78019910(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (((4 < ~uVar2 - 1) && ((*param_1 == '\\' || (*param_1 == '/')))) &&
     ((param_1[1] == '\\' || (param_1[1] == '/')))) {
    pcVar3 = param_1 + 3;
    cVar1 = param_1[3];
    while (((cVar1 != '\0' && (cVar1 != '\\')) && (cVar1 != '/'))) {
      pcVar4 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar4;
    }
    if ((*pcVar3 != '\0') && (pcVar4 = pcVar3 + 1, pcVar3[1] != '\0')) {
      cVar1 = *pcVar4;
      while (((cVar1 != '\0' && (cVar1 != '\\')) && (cVar1 != '/'))) {
        pcVar3 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar3;
      }
      if ((*pcVar4 == '\0') || (pcVar4[1] == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}


