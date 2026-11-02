/* Module: oggplug.dll
   Function: FUN_0043d250
   Address: 0043d250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_0043d250(int *param_1,int *param_2,int *param_3)

{
  float10 fVar1;
  float10 fVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  int local_14;
  int local_10;
  
  iVar6 = *(int *)(param_1[1] + 0x1c);
  piVar3 = calloc(1,0x34);
  piVar3[2] = *param_3;
  *piVar3 = *(int *)(iVar6 + *param_2 * 4) / 2;
  piVar3[1] = param_3[2];
  piVar3[4] = (int)param_3;
  if (*param_1 != 0) {
    FUN_00438640(piVar3 + 5,piVar3[1],piVar3[2]);
  }
  fVar8 = (float10)param_3[1] * (float10)_DAT_0044d71c;
  iVar6 = piVar3[1];
  fVar11 = (float10)fpatan(fVar8 * fVar8 * (float10)_DAT_0044d6e8,(float10)1);
  fVar1 = (float10)_DAT_0044d6e0;
  fVar12 = (float10)fpatan(fVar8 * (float10)_DAT_0044d6d8,(float10)1);
  fVar2 = (float10)_DAT_0044d6d0;
  fVar10 = (float10)_DAT_0044d6c8;
  pvVar4 = malloc(*piVar3 * 4 + 4);
  piVar3[3] = (int)pvVar4;
  local_10 = *piVar3;
  iVar7 = 0;
  local_14 = 0;
  if (0 < local_10) {
    do {
      fVar9 = (((float10)param_3[1] * (float10)_DAT_0044d71c) / (float10)local_10) *
              (float10)local_14;
      fVar13 = (float10)fpatan(fVar9 * fVar9 * (float10)_DAT_0044d6e8,(float10)1);
      fVar14 = (float10)fpatan(fVar9 * (float10)_DAT_0044d6d8,(float10)1);
      floor((double)((float10)(float)((float10)iVar6 /
                                     (fVar8 * fVar10 + fVar12 * fVar2 + fVar11 * fVar1)) *
                    (fVar9 * (float10)_DAT_0044d6c8 +
                    fVar14 * (float10)_DAT_0044d6d0 + fVar13 * (float10)_DAT_0044d6e0)));
      iVar5 = ftol();
      if (piVar3[1] <= iVar5) {
        iVar5 = piVar3[1];
      }
      iVar7 = local_14 + 1;
      *(int *)(piVar3[3] + -4 + iVar7 * 4) = iVar5;
      local_10 = *piVar3;
      local_14 = iVar7;
    } while (iVar7 < local_10);
  }
  *(undefined4 *)(piVar3[3] + iVar7 * 4) = 0xffffffff;
  pvVar4 = malloc(piVar3[1] << 2);
  local_10 = piVar3[1];
  piVar3[10] = (int)pvVar4;
  local_14 = 0;
  if (0 < local_10) {
    do {
      iVar6 = local_14 + 1;
      fVar10 = (float10)fcos(((float10)_DAT_0044d7c4 / (float10)local_10) * (float10)local_14);
      *(float *)(piVar3[10] + -4 + iVar6 * 4) = (float)(fVar10 + fVar10);
      local_10 = piVar3[1];
      local_14 = iVar6;
    } while (iVar6 < local_10);
  }
  return piVar3;
}


