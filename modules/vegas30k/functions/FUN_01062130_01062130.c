/* Module: vegas30k.dll
   Function: FUN_01062130
   Address: 01062130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01062130(int param_1,int param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char local_5;
  
  iVar2 = param_2;
  if (param_5 == 1) {
    cVar6 = *param_3;
    cVar4 = param_3[1];
    if (1 < param_4) {
      param_4 = param_4 + -1;
      do {
        cVar5 = param_3[2];
        if (cVar5 <= cVar6) {
          cVar6 = cVar5;
        }
        if (cVar4 <= param_3[3]) {
          cVar4 = param_3[3];
        }
        param_4 = param_4 + -1;
        param_3 = param_3 + 2;
      } while (param_4 != 0);
    }
    *(char *)(param_2 + param_1 * 2) = cVar6;
    *(char *)(param_2 + 1 + param_1 * 2) = cVar4;
    return param_1 + 1;
  }
  if (param_5 != 2) {
    if (0 < param_5) {
      param_2 = param_5;
      pcVar9 = (char *)(iVar2 + param_1 * 2);
      pcVar8 = param_3 + param_5 * 2;
      pcVar7 = param_3;
      do {
        cVar6 = *pcVar7;
        cVar4 = pcVar8[param_5 * -2 + 1];
        if (1 < param_4) {
          param_3 = (char *)(param_4 + -1);
          pcVar3 = pcVar8;
          do {
            if (*pcVar3 <= cVar6) {
              cVar6 = *pcVar3;
            }
            if (cVar4 <= pcVar3[1]) {
              cVar4 = pcVar3[1];
            }
            pcVar3 = pcVar3 + param_5 * 2;
            param_3 = (char *)((int)param_3 + -1);
          } while (param_3 != (char *)0x0);
        }
        *pcVar9 = cVar6;
        pcVar9[1] = cVar4;
        pcVar7 = pcVar7 + 2;
        pcVar8 = pcVar8 + 2;
        pcVar9 = pcVar9 + 2;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    return param_1 + param_5;
  }
  cVar6 = *param_3;
  cVar4 = param_3[1];
  local_5 = param_3[2];
  cVar5 = param_3[3];
  if (1 < param_4) {
    param_4 = param_4 + -1;
    do {
      cVar1 = param_3[4];
      if (cVar1 <= cVar6) {
        cVar6 = cVar1;
      }
      if (cVar4 <= param_3[5]) {
        cVar4 = param_3[5];
      }
      if (param_3[6] <= local_5) {
        local_5 = param_3[6];
      }
      if (cVar5 <= param_3[7]) {
        cVar5 = param_3[7];
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 4;
    } while (param_4 != 0);
  }
  *(char *)(param_2 + param_1 * 2) = cVar6;
  *(char *)(param_2 + 1 + param_1 * 2) = cVar4;
  *(char *)(param_2 + 2 + param_1 * 2) = local_5;
  *(char *)(param_2 + 3 + param_1 * 2) = cVar5;
  return param_1 + 2;
}


