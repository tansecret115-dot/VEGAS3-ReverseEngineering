/* Module: vegas30k.dll
   Function: FUN_010614e0
   Address: 010614e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010614e0(char *param_1,int param_2,int param_3,int param_4,char *param_5,int param_6,
                 int param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char local_5;
  
  pcVar6 = param_5;
  if (param_7 == 1) {
    param_4 = param_2 - param_4;
    cVar1 = '\0';
    cVar3 = '\0';
    if (param_6 != 0) {
      do {
        param_6 = param_6 + -1;
        param_4 = param_4 - param_3;
        if (*param_5 <= cVar1) {
          cVar1 = *param_5;
        }
        if (cVar3 <= param_5[1]) {
          cVar3 = param_5[1];
        }
        param_5 = param_5 + 2;
        if ((param_4 < 0) || (param_6 < 1)) {
          *param_1 = cVar1;
          param_1[1] = cVar3;
          param_4 = param_4 + param_2;
          param_1 = param_1 + 2;
          cVar1 = '\0';
          cVar3 = '\0';
        }
      } while (param_6 != 0);
      return;
    }
  }
  else if (param_7 == 2) {
    param_4 = param_2 - param_4;
    cVar2 = '\0';
    cVar1 = '\0';
    cVar3 = '\0';
    local_5 = '\0';
    if (param_6 != 0) {
      param_1 = param_1 + 2;
      do {
        param_6 = param_6 + -1;
        param_4 = param_4 - param_3;
        if (*param_5 <= cVar2) {
          cVar2 = *param_5;
        }
        if (cVar1 <= param_5[1]) {
          cVar1 = param_5[1];
        }
        if (param_5[2] <= cVar3) {
          cVar3 = param_5[2];
        }
        if (local_5 <= param_5[3]) {
          local_5 = param_5[3];
        }
        param_5 = param_5 + 4;
        if ((param_4 < 0) || (param_6 < 1)) {
          param_1[-2] = cVar2;
          param_1[1] = local_5;
          param_1[-1] = cVar1;
          *param_1 = cVar3;
          param_4 = param_4 + param_2;
          param_1 = param_1 + 4;
          cVar2 = '\0';
          cVar1 = '\0';
          cVar3 = '\0';
          local_5 = '\0';
        }
      } while (param_6 != 0);
      return;
    }
  }
  else if (0 < param_7) {
    param_5 = (char *)param_7;
    do {
      cVar1 = '\0';
      cVar3 = '\0';
      iVar8 = param_2 - param_4;
      pcVar5 = pcVar6;
      pcVar7 = param_1;
      iVar4 = param_2;
      while (iVar4 != 0) {
        iVar4 = iVar4 + -1;
        iVar8 = iVar8 - param_3;
        if (*pcVar5 <= cVar1) {
          cVar1 = *pcVar5;
        }
        if (cVar3 <= pcVar5[1]) {
          cVar3 = pcVar5[1];
        }
        pcVar5 = pcVar5 + param_7 * 2;
        if ((iVar8 < 0) || (iVar4 < 1)) {
          *pcVar7 = cVar1;
          pcVar7[1] = cVar3;
          iVar8 = iVar8 + param_2;
          pcVar7 = pcVar7 + param_7 * 2;
          cVar1 = '\0';
          cVar3 = '\0';
        }
      }
      pcVar6 = pcVar6 + 2;
      param_1 = param_1 + 2;
      param_5 = (char *)((int)param_5 + -1);
    } while (param_5 != (char *)0x0);
  }
  return;
}


