/* Module: sfcdi.dll
   Function: FUN_5bf08d70
   Address: 5bf08d70
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_5bf08d70(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_2;
  }
  do {
    if ((cVar3 != '\t') && (cVar3 != ' ')) {
      if (cVar3 == '\"') {
        param_2 = param_2 + 1;
      }
      break;
    }
    cVar3 = param_2[1];
    param_2 = param_2 + 1;
  } while (cVar3 != '\0');
  cVar3 = *param_2;
  uVar4 = 0;
  pcVar5 = param_1;
  if (cVar3 != '\0') {
    do {
      pcVar2 = param_2;
      if (cVar3 == '\"') {
        cVar3 = pcVar2[1];
        while ((param_2 = pcVar2 + 1, cVar3 != '\0' && (cVar3 != ','))) {
          cVar3 = pcVar2[2];
          pcVar2 = param_2;
        }
        if (*param_2 == ',') {
          *pcVar5 = '\0';
          return pcVar2 + 2;
        }
        goto LAB_5bf08de2;
      }
      if (cVar3 == ',') break;
      if (uVar4 < param_3 - 1U) {
        *pcVar5 = cVar3;
        pcVar5 = pcVar5 + 1;
        uVar4 = uVar4 + 1;
      }
      cVar3 = pcVar2[1];
      param_2 = pcVar2 + 1;
    } while (cVar3 != '\0');
    param_2 = pcVar2 + 1;
    while ((uVar4 != 0 && (iVar1 = uVar4 - 1, uVar4 = uVar4 - 1, param_1[iVar1] == ' '))) {
      param_1[uVar4] = '\0';
    }
  }
LAB_5bf08de2:
  *pcVar5 = '\0';
  return param_2;
}


