/* Module: vegas30k.dll
   Function: FUN_010611f0
   Address: 010611f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_010611f0(undefined4 param_1,int param_2,float *param_3,int param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  short *psVar5;
  int *piVar6;
  char cVar7;
  short sVar8;
  float *pfVar9;
  float fVar10;
  int iVar11;
  
  switch(param_1) {
  case 0x11:
    if (0 < param_4) {
      psVar5 = (short *)(param_2 + 2);
      param_2 = (int)param_3 - param_2;
      do {
        sVar8 = psVar5[-1];
        if (*(short *)param_3 <= psVar5[-1]) {
          sVar8 = *(short *)param_3;
        }
        sVar2 = *(short *)((int)psVar5 + param_2);
        psVar5[-1] = sVar8;
        sVar8 = *psVar5;
        if (*psVar5 <= sVar2) {
          sVar8 = sVar2;
        }
        *psVar5 = sVar8;
        param_3 = param_3 + 1;
        psVar5 = psVar5 + 2;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return (undefined1 *)0x0;
    }
    break;
  default:
    return &DAT_80070057;
  case 0x13:
    if (0 < param_4) {
      piVar6 = (int *)(param_2 + 4);
      param_2 = (int)param_3 - param_2;
      do {
        fVar10 = (float)piVar6[-1];
        if ((int)*param_3 <= piVar6[-1]) {
          fVar10 = *param_3;
        }
        iVar3 = *(int *)((int)piVar6 + param_2);
        piVar6[-1] = (int)fVar10;
        iVar11 = *piVar6;
        if (*piVar6 <= iVar3) {
          iVar11 = iVar3;
        }
        *piVar6 = iVar11;
        param_3 = param_3 + 2;
        piVar6 = piVar6 + 2;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    break;
  case 0x20:
    if (0 < param_4) {
      pfVar9 = (float *)(param_2 + 4);
      param_2 = (int)param_3 - param_2;
      do {
        if (*param_3 <= pfVar9[-1]) {
          fVar10 = *param_3;
        }
        else {
          fVar10 = pfVar9[-1];
        }
        pfVar9[-1] = fVar10;
        if (*pfVar9 <= *(float *)((int)pfVar9 + param_2)) {
          fVar10 = *(float *)((int)pfVar9 + param_2);
        }
        else {
          fVar10 = *pfVar9;
        }
        *pfVar9 = fVar10;
        param_3 = param_3 + 2;
        pfVar9 = pfVar9 + 2;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return (undefined1 *)0x0;
    }
    break;
  case 0x31:
    if (0 < param_4) {
      pcVar4 = (char *)(param_2 + 1);
      param_2 = (int)param_3 - param_2;
      do {
        cVar7 = pcVar4[-1];
        if (*(char *)param_3 <= pcVar4[-1]) {
          cVar7 = *(char *)param_3;
        }
        cVar1 = pcVar4[param_2];
        pcVar4[-1] = cVar7;
        cVar7 = *pcVar4;
        if (*pcVar4 <= cVar1) {
          cVar7 = cVar1;
        }
        *pcVar4 = cVar7;
        param_3 = (float *)((int)param_3 + 2);
        pcVar4 = pcVar4 + 2;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return (undefined1 *)0x0;
    }
  }
  return (undefined1 *)0x0;
}


