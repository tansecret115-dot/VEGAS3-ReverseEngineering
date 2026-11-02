/* Module: vegas30k.dll
   Function: FUN_01194d80
   Address: 01194d80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_01194d80(int param_1,undefined4 param_2,undefined4 param_3,int param_4,float *param_5)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  undefined8 uVar12;
  uint local_24;
  uint local_20;
  float local_18;
  uint local_14 [5];
  
  uVar8 = 0;
  local_24 = 0x80004001;
  if (*(short *)(param_1 + 0x4fa) != 0) {
    pfVar6 = param_5;
    do {
      *(undefined4 *)((param_4 - (int)param_5) + (int)pfVar6) = 0;
      *pfVar6 = 0.0;
      uVar8 = uVar8 + 1;
      pfVar6 = pfVar6 + 1;
    } while (uVar8 < *(ushort *)(param_1 + 0x4fa));
  }
  if (*(int *)(param_1 + 0x7c4) == 0) {
    return 1;
  }
  param_2 = *(double **)(param_1 + 0x4fc);
  param_3 = 0;
  uVar12 = ftol();
  iVar10 = (int)((ulonglong)uVar12 >> 0x20);
  uVar8 = (uint)uVar12;
  uVar4 = (uint)*(ushort *)(param_1 + 0x4fa);
  if (uVar4 != 0) {
    pfVar9 = &local_18;
    pfVar6 = (float *)(param_1 + 0x7e4);
    do {
      *pfVar9 = 0.0;
      pfVar9[1] = 0.0;
      pfVar9[2] = 0.0;
      if (*(int *)(param_1 + 0x40) == 0) {
        if ((*(int *)(param_1 + 0x7c0) == 0) || (iVar5 = *(int *)(param_1 + 0x7ac), iVar5 == 0))
        goto LAB_01194e8d;
        if ((iVar10 <= *(int *)(iVar5 + 0x24)) &&
           ((iVar10 < *(int *)(iVar5 + 0x24) || (uVar8 < *(uint *)(iVar5 + 0x20)))))
        goto LAB_01194e8d;
      }
      else {
        if ((*(int *)(param_1 + 0x7c0) != 0) && (iVar5 = *(int *)(param_1 + 0x7ac), iVar5 != 0)) {
          if ((iVar10 < *(int *)(iVar5 + 0x24)) ||
             ((iVar10 <= *(int *)(iVar5 + 0x24) && (uVar8 <= *(uint *)(iVar5 + 0x20)))))
          goto LAB_01194ea5;
        }
LAB_01194e8d:
        *pfVar9 = *pfVar6;
        pfVar9[1] = pfVar6[1];
        pfVar9[2] = pfVar6[2];
      }
LAB_01194ea5:
      pfVar6 = pfVar6 + 3;
      pfVar9 = pfVar9 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c8));
  iVar5 = *(int *)(*(int *)(param_1 + 0x7ac) + 0x24);
  if ((iVar10 <= iVar5) &&
     (((iVar10 < iVar5 || (uVar8 <= *(uint *)(*(int *)(param_1 + 0x7ac) + 0x20))) &&
      (*(int *)(param_1 + 0x7e0) != 0)))) {
    iVar5 = *(int *)(param_1 + 0x7c0);
    while ((iVar5 != 0 && (*(int *)(*(int *)(param_1 + 0x7ac) + 0x28) == 0))) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x7ac) + 0x30);
      *(int *)(param_1 + 0x7ac) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x7a8);
      }
      iVar5 = *(int *)(param_1 + 0x7c0) + -1;
      *(int *)(param_1 + 0x7c0) = iVar5;
    }
    *(int *)(param_1 + 0x7e0) = *(int *)(param_1 + 0x7e0) + -1;
  }
  iVar5 = *(int *)(param_1 + 0x7c0);
  if (*(int *)(param_1 + 0x40) == 0) {
    while ((iVar5 != 0 && (*(int *)(*(int *)(param_1 + 0x7ac) + 0x2c) != 0))) {
      iVar5 = *(int *)(param_1 + 0x7c0) + -1;
      *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(*(int *)(param_1 + 0x7ac) + 0x30);
      *(int *)(param_1 + 0x7c0) = iVar5;
    }
    iVar5 = *(int *)(param_1 + 0x7c0);
    while ((((iVar5 != 0 && (iVar5 = *(int *)(param_1 + 0x7ac), iVar5 != 0)) &&
            (*(int *)(iVar5 + 0x2c) == 0)) &&
           ((*(int *)(iVar5 + 0x24) <= iVar10 &&
            ((*(int *)(iVar5 + 0x24) < iVar10 || (*(uint *)(iVar5 + 0x20) <= uVar8))))))) {
      uVar4 = (uint)*(ushort *)(param_1 + 0x4fa);
      if (uVar4 != 0) {
        pfVar6 = (float *)(iVar5 + 4);
        pfVar9 = &local_18;
        iVar5 = -iVar5;
        param_2 = (double *)((int)&local_18 + iVar5);
        do {
          fVar11 = *pfVar6;
          if ((int)*pfVar6 <= (int)*pfVar9) {
            fVar11 = *pfVar9;
          }
          *pfVar9 = fVar11;
          pfVar9 = pfVar9 + 3;
          *(float *)((int)param_2 + (int)pfVar6) = pfVar6[1];
          pfVar1 = pfVar6 + 2;
          puVar2 = (uint *)((int)local_14 + iVar5 + (int)pfVar6);
          pfVar6 = pfVar6 + 3;
          uVar4 = uVar4 - 1;
          *(uint *)((int)&local_20 + iVar5 + (int)pfVar6) = *puVar2 | (uint)*pfVar1;
        } while (uVar4 != 0);
      }
      local_24 = 0;
      iVar5 = *(int *)(param_1 + 0x7c0) + -1;
      *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(*(int *)(param_1 + 0x7ac) + 0x30);
      *(int *)(param_1 + 0x7c0) = iVar5;
    }
  }
  else {
    while ((iVar5 != 0 && (*(int *)(*(int *)(param_1 + 0x7ac) + 0x2c) == 0))) {
      iVar5 = *(int *)(param_1 + 0x7c0) + -1;
      *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(*(int *)(param_1 + 0x7ac) + 0x30);
      *(int *)(param_1 + 0x7c0) = iVar5;
    }
    iVar5 = *(int *)(param_1 + 0x7c0);
    while ((((iVar5 != 0 && (iVar5 = *(int *)(param_1 + 0x7ac), iVar5 != 0)) &&
            (iVar10 <= *(int *)(iVar5 + 0x24))) &&
           ((iVar10 < *(int *)(iVar5 + 0x24) || (uVar8 <= *(uint *)(iVar5 + 0x20)))))) {
      if ((*(int *)(iVar5 + 0x2c) != 0) &&
         (local_24 = (uint)*(ushort *)(param_1 + 0x4fa), local_24 != 0)) {
        pfVar9 = &local_18;
        iVar7 = -iVar5;
        pfVar6 = (float *)(iVar5 + 4);
        param_2 = (double *)((int)&local_18 + iVar7);
        do {
          if (*pfVar6 <= *pfVar9) {
            fVar11 = *pfVar9;
          }
          else {
            fVar11 = *pfVar6;
          }
          fVar3 = pfVar6[1];
          *pfVar9 = fVar11;
          *(float *)((int)param_2 + (int)pfVar6) = fVar3;
          pfVar1 = pfVar6 + 2;
          puVar2 = (uint *)((int)local_14 + iVar7 + (int)pfVar6);
          pfVar6 = pfVar6 + 3;
          *(uint *)((int)&local_20 + iVar7 + (int)pfVar6) = *puVar2 | (uint)*pfVar1;
          pfVar9 = pfVar9 + 3;
          local_24 = local_24 - 1;
        } while (local_24 != 0);
      }
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      local_24 = 0;
      iVar5 = *(int *)(param_1 + 0x7c0) + -1;
      *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(*(int *)(param_1 + 0x7ac) + 0x30);
      *(int *)(param_1 + 0x7c0) = iVar5;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c8));
  local_20 = 0;
  if (*(short *)(param_1 + 0x4fa) != 0) {
    param_2 = (double *)(param_1 + 0x6d0);
    param_4 = param_4 - (int)param_5;
    pfVar6 = &local_18;
    pfVar9 = (float *)(param_1 + 0x7e4);
    do {
      if (((float)_DAT_011ea8c8 <= *pfVar6) || (*pfVar6 <= (float)_DAT_011ea8c0)) {
        fVar11 = (float)*param_2 * *pfVar6;
      }
      else {
        fVar11 = (float)_DAT_011db3f0;
      }
      fVar3 = pfVar6[2];
      *(float *)(param_4 + (int)param_5) = fVar11;
      *param_5 = fVar3;
      param_5 = param_5 + 1;
      *pfVar9 = *pfVar6;
      pfVar9[1] = pfVar6[1];
      param_2 = param_2 + 1;
      pfVar9[2] = pfVar6[2];
      local_20 = local_20 + 1;
      pfVar6 = pfVar6 + 3;
      pfVar9 = pfVar9 + 3;
    } while (local_20 < *(ushort *)(param_1 + 0x4fa));
  }
  return local_24;
}


