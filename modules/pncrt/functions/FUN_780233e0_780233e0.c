/* Module: pncrt.dll
   Function: FUN_780233e0
   Address: 780233e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_780233e0(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  cVar2 = *param_1;
  while (cVar2 == ';') {
    pcVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar3;
  }
  iVar4 = param_3 + -1;
  pcVar3 = param_1;
  if (iVar4 != 0) {
    cVar2 = *param_1;
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      if (cVar2 == '\"') {
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
        cVar2 = *pcVar1;
        while ((cVar2 != '\0' && (cVar2 != '\"'))) {
          *param_2 = cVar2;
          param_2 = param_2 + 1;
          pcVar3 = pcVar3 + 1;
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) goto LAB_78023441;
          cVar2 = *pcVar3;
        }
        if (*pcVar3 != '\0') {
          pcVar3 = pcVar3 + 1;
        }
      }
      else {
        *param_2 = cVar2;
        param_2 = param_2 + 1;
        pcVar3 = pcVar3 + 1;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
LAB_78023441:
          *param_2 = '\0';
          return 0;
        }
      }
      cVar2 = *pcVar3;
    }
    if (*pcVar3 == ';') {
      do {
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 == ';');
      *param_2 = '\0';
      return -(uint)(param_1 != pcVar3) & (uint)pcVar3;
    }
  }
  *param_2 = '\0';
  return -(uint)(param_1 != pcVar3) & (uint)pcVar3;
}


