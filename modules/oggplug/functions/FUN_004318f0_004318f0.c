/* Module: oggplug.dll
   Function: FUN_004318f0
   Address: 004318f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004318f0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int *piVar4;
  void *_Dst;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  float10 fVar15;
  
  piVar6 = param_2;
  iVar9 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar9 + 0x1c);
  puVar2 = *(undefined4 **)(param_1 + 0x68);
  pfVar3 = (float *)puVar2[0xc];
  iVar13 = piVar1[0x389];
  iVar7 = *(int *)(param_1 + 0x30) - piVar1[*(int *)(param_1 + 0x28)] / 2;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x20) == -1) {
    return 0;
  }
  iVar8 = *piVar1;
  iVar11 = piVar1[1];
  if (iVar8 < iVar11) {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar11 = iVar11 / 2;
      iVar8 = iVar8 / 2;
    }
    else {
      iVar11 = (int)(iVar11 * 3 + (iVar11 * 3 >> 0x1f & 3U)) >> 2;
      iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2;
    }
    iVar8 = FUN_00436b60(param_1,iVar8 + *(int *)(param_1 + 0x30) + iVar11);
    if (iVar8 == -1) {
      return 0;
    }
    *(int *)(param_1 + 0x2c) = iVar8;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  iVar8 = piVar1[*(int *)(param_1 + 0x2c)];
  iVar11 = ((int)(piVar1[*(int *)(param_1 + 0x28)] + (piVar1[*(int *)(param_1 + 0x28)] >> 0x1f & 3U)
                 ) >> 2) + ((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2) + *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x14) < iVar8 / 2 + iVar11) {
    return 0;
  }
  FUN_00430f40((int)param_2);
  if (*(int *)(param_1 + 0x28) == 0) {
    param_2[6] = 0;
    param_2[7] = *(int *)(param_1 + 0x28);
    param_2[8] = 0;
  }
  else {
    param_2[6] = *(int *)(param_1 + 0x24);
    param_2[7] = *(int *)(param_1 + 0x28);
    param_2[8] = *(int *)(param_1 + 0x2c);
  }
  param_2[0x10] = param_1;
  param_2[0xe] = *(int *)(param_1 + 0x40);
  param_2[0xf] = *(int *)(param_1 + 0x44);
  piVar4 = (int *)param_2[0x1a];
  param_2[0xc] = *(int *)(param_1 + 0x38);
  param_2[0xd] = *(int *)(param_1 + 0x3c);
  param_2[9] = piVar1[*(int *)(param_1 + 0x28)];
  if (*pfVar3 < (float)piVar4[1]) {
    *pfVar3 = (float)piVar4[1];
  }
  fVar15 = FUN_00434c30(*pfVar3,param_1);
  *pfVar3 = (float)fVar15;
  piVar4[1] = (int)(float)fVar15;
  iVar8 = FUN_00430ed0((int)param_2,*(int *)(iVar9 + 4) << 2);
  *param_2 = iVar8;
  iVar8 = FUN_00430ed0((int)param_2,*(int *)(iVar9 + 4) << 2);
  *piVar4 = iVar8;
  param_2 = (int *)0x0;
  if (0 < *(int *)(iVar9 + 4)) {
    do {
      iVar8 = FUN_00430ed0((int)piVar6,(piVar6[9] + iVar7) * 4);
      *(int *)(*piVar4 + (int)param_2 * 4) = iVar8;
      puVar12 = *(undefined4 **)(*(int *)(param_1 + 8) + (int)param_2 * 4);
      puVar14 = *(undefined4 **)(*piVar4 + (int)param_2 * 4);
      for (uVar10 = piVar6[9] + iVar7 & 0x3fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      *(int *)(*piVar6 + (int)param_2 * 4) = *(int *)(*piVar4 + (int)param_2 * 4) + iVar7 * 4;
      param_2 = (int *)((int)param_2 + 1);
    } while ((int)param_2 < *(int *)(iVar9 + 4));
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x30))) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    piVar6[0xb] = 1;
    return 1;
  }
  iVar13 = piVar1[1] / 2 + *(int *)(iVar13 + 0x34);
  uVar10 = iVar11 - iVar13;
  if (0 < (int)uVar10) {
    FUN_004370e0((int *)*puVar2,uVar10);
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - uVar10;
    iVar7 = 0;
    if (0 < *(int *)(iVar9 + 4)) {
      do {
        _Dst = *(void **)(*(int *)(param_1 + 8) + iVar7 * 4);
        memmove(_Dst,(void *)((int)_Dst + uVar10 * 4),*(int *)(param_1 + 0x14) << 2);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar9 + 4));
    }
    uVar5 = *(uint *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = uVar5 + 1;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x30) = iVar13;
    *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (uint)(0xfffffffe < uVar5);
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar9 = *(int *)(param_1 + 0x20) - uVar10;
      *(int *)(param_1 + 0x20) = iVar9;
      if (iVar9 <= iVar13) {
        uVar10 = (iVar9 - iVar13) + uVar10;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = uVar5 + uVar10;
    *(uint *)(param_1 + 0x3c) =
         *(int *)(param_1 + 0x3c) + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar5,uVar10);
  }
  return 1;
}


