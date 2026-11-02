/* Module: cook3260.dll
   Function: FUN_633a50f0
   Address: 633a50f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_633a50f0(float *param_1,float *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  float local_5c [2];
  int aiStack_54 [8];
  int local_34 [10];
  int *local_c;
  int local_8;
  
  piVar4 = param_3;
  pfVar3 = param_2;
  piVar7 = local_34;
  param_2 = (float *)0xa;
  pfVar8 = param_1;
  do {
    iVar5 = ((int)(*pfVar8 / param_1[8]) >> 0x17) + -0x7f;
    iVar5 = iVar5 - (iVar5 >> 0x1f);
    *piVar7 = iVar5;
    if (4 < iVar5) {
      *piVar7 = 4;
    }
    if (*piVar7 < -7) {
      *piVar7 = -7;
    }
    pfVar8 = pfVar8 + 1;
    piVar7 = piVar7 + 1;
    param_2 = (float *)((int)param_2 + -1);
  } while (param_2 != (float *)0x0);
  iVar5 = 10;
  pfVar8 = pfVar3;
  pfVar9 = local_5c;
  do {
    fVar1 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    iVar6 = ((int)(fVar1 / pfVar3[8]) >> 0x17) + -0x7f;
    iVar5 = iVar5 + -1;
    *pfVar9 = (float)(iVar6 - (iVar6 >> 0x1f));
    pfVar9 = pfVar9 + 1;
  } while (iVar5 != 0);
  local_c = local_34 + 1;
  param_2 = local_5c;
  *param_3 = 0;
  param_1 = (float *)0x0;
  local_8 = 0;
  do {
    param_2 = param_2 + 1;
    iVar5 = local_c[-1];
    iVar6 = *local_c;
    if ((((iVar5 < iVar6) &&
         (param_3 = *(int **)((int)local_34 + local_8 + 8), iVar6 < (int)param_3)) ||
        ((param_3 = *(int **)((int)local_34 + local_8 + 8), iVar6 - (int)param_3 < -1 &&
         (iVar5 < (int)param_3)))) &&
       (((int)param_2[-1] < *(int *)((int)aiStack_54 + local_8) &&
        ((int)*param_2 <= *(int *)((int)aiStack_54 + local_8))))) {
      iVar2 = *piVar4;
      if ((iVar2 == 0) || (piVar4[iVar2 + 8] != (iVar6 + iVar5) / 2)) {
        *piVar4 = iVar2 + 1;
      }
      piVar4[*piVar4] = (int)param_1;
      piVar4[*piVar4 + 8] = (iVar6 + iVar5) / 2;
    }
    if (*piVar4 == 8) break;
    if ((((iVar6 < iVar5) && ((int)param_3 <= iVar6)) &&
        (*(int *)((int)aiStack_54 + local_8) < (int)param_2[-1])) &&
       (*(int *)((int)aiStack_54 + local_8) <= (int)*param_2)) {
      iVar2 = *piVar4;
      if ((iVar2 == 0) || (piVar4[iVar2 + 8] != (iVar6 + iVar5) / 2)) {
        *piVar4 = iVar2 + 1;
      }
      piVar4[*piVar4] = (int)param_1;
      piVar4[*piVar4 + 8] = (iVar6 + iVar5) / 2;
    }
    if (*piVar4 == 8) break;
    local_8 = local_8 + 4;
    param_1 = (float *)((int)param_1 + 1);
    local_c = local_c + 1;
  } while (local_8 < 0x20);
  iVar5 = *piVar4;
  while ((iVar5 != 0 && (piVar4[*piVar4 + 8] == 0))) {
    iVar5 = *piVar4 + -1;
    *piVar4 = iVar5;
  }
  return;
}


