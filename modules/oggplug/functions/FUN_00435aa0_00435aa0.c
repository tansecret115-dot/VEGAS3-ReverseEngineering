/* Module: oggplug.dll
   Function: FUN_00435aa0
   Address: 00435aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_00435aa0(int *param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  int local_1c;
  float *local_18;
  int local_c;
  int local_8;
  float local_4;
  
  iVar11 = param_1[2];
  iVar2 = *param_1;
  iVar5 = 0;
  puVar3 = *(undefined4 **)(iVar11 + 0x28);
  piVar9 = *(int **)(iVar11 + 0x24);
  iVar7 = *(int *)(iVar11 + 0x2c);
  local_1c = 0;
  if (puVar3 != (undefined4 *)0x0) {
    local_8 = 0;
    if (0 < iVar2) {
      local_4 = (float)(param_3 * 4);
      local_18 = param_2 + (iVar2 + -1) * param_3;
      local_c = iVar2;
      do {
        iVar5 = 0;
        if (0 < puVar3[3] + -1) {
          pfVar6 = (float *)*puVar3;
          do {
            if (*local_18 < *pfVar6) break;
            iVar5 = iVar5 + 1;
            pfVar6 = pfVar6 + 1;
          } while (iVar5 < puVar3[3] + -1);
        }
        iVar5 = *(int *)(puVar3[1] + iVar5 * 4) + puVar3[2] * local_8;
        local_18 = local_18 + -param_3;
        local_c = local_c + -1;
        local_8 = iVar5;
      } while (local_c != 0);
    }
    if (0 < *(int *)(*(int *)(iVar11 + 8) + iVar5 * 4)) {
      return iVar5;
    }
  }
  if (iVar7 != 0) {
    local_8 = -1;
    local_18 = (float *)0x0;
    if (*(int *)(iVar11 + 0x1c) == 0) {
      iVar5 = 0;
      if (0 < iVar2) {
        local_4 = (float)(param_3 * 4);
        do {
          iVar10 = ftol();
          if ((iVar10 < 0) || (*(int *)(iVar7 + 8) <= iVar10)) break;
          local_18 = (float *)(*(int *)(*(int *)(iVar7 + 0x10) + iVar10 * 4) +
                              *(int *)(iVar7 + 0xc) * (int)local_18);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
    }
    else {
      iVar5 = 0;
      iVar10 = 1;
      if (0 < iVar2) {
        do {
          local_4 = (float)ftol();
          if (((int)local_4 < 0) || (*(int *)(iVar7 + 8) <= (int)local_4)) break;
          local_18 = (float *)((int)local_18 +
                              *(int *)(*(int *)(iVar7 + 0x10) + (int)local_4 * 4) * iVar10);
          iVar10 = iVar10 * *(int *)(iVar7 + 0xc);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
    }
    if ((iVar5 == iVar2) &&
       (iVar5 = *(int *)(*(int *)(iVar7 + 0x20) + (int)local_18 * 4), iVar5 != 0)) {
      iVar11 = 0;
      piVar9 = (int *)(*(int *)(iVar7 + 0x18) +
                      *(int *)(*(int *)(iVar7 + 0x1c) + (int)local_18 * 4) * 4);
      if (0 < iVar5) {
        do {
          fVar12 = FUN_00435e40(iVar2,(float *)(param_1[3] + *piVar9 * iVar2 * 4),param_2,param_3);
          if ((local_8 == -1) || (fVar12 < (float10)local_4)) {
            local_8 = *piVar9;
            local_4 = (float)fVar12;
          }
          iVar11 = iVar11 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar11 < *(int *)(*(int *)(iVar7 + 0x20) + (int)local_18 * 4));
      }
      return local_8;
    }
  }
  if (piVar9 == (int *)0x0) {
    iVar7 = 0;
    local_8 = -1;
    pfVar6 = (float *)param_1[3];
    if (0 < param_1[1]) {
      do {
        if ((0 < *(int *)(*(int *)(iVar11 + 8) + iVar7 * 4)) &&
           ((fVar12 = FUN_00435e40(iVar2,pfVar6,param_2,param_3), local_8 == -1 ||
            (fVar12 < (float10)local_4)))) {
          local_4 = (float)fVar12;
          local_8 = iVar7;
        }
        pfVar6 = pfVar6 + iVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_1[1]);
    }
    return local_8;
  }
  do {
    pfVar6 = (float *)(param_1[3] + *(int *)(piVar9[3] + local_1c * 4) * 4);
    if (iVar2 < 1) {
LAB_00435d9e:
      iVar11 = *(int *)(piVar9[1] + local_1c * 4);
    }
    else {
      iVar7 = (param_1[3] + *(int *)(piVar9[2] + local_1c * 4) * 4) - (int)pfVar6;
      pfVar8 = param_2;
      iVar11 = iVar2;
      fVar4 = _DAT_0044d6f0;
      do {
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + param_3;
        iVar11 = iVar11 + -1;
        fVar4 = fVar4 + (*(float *)(iVar7 + -4 + (int)(pfVar6 + 1)) - *pfVar6) *
                        (fVar1 - (*pfVar6 + *(float *)(iVar7 + (int)pfVar6)) * (float)_DAT_00447a78)
        ;
        pfVar6 = pfVar6 + 1;
      } while (iVar11 != 0);
      if (fVar4 <= _DAT_0044d6f0) goto LAB_00435d9e;
      iVar11 = *(int *)(*piVar9 + local_1c * 4);
    }
    local_1c = -iVar11;
    if (local_1c < 1) {
      return iVar11;
    }
  } while( true );
}


