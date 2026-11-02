/* Module: oggplug.dll
   Function: FUN_00431c60
   Address: 00431c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00431c60(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_14;
  
  iVar8 = *(int *)(param_1 + 4);
  iVar16 = *(int *)(param_1 + 0x30);
  piVar1 = *(int **)(iVar8 + 0x1c);
  if ((piVar1[1] / 2 < iVar16) && (iVar4 = *(int *)(param_1 + 0x18), 0x2000 < iVar4)) {
    iVar17 = iVar16 - piVar1[1] / 2;
    if (iVar4 < iVar17) {
      iVar17 = iVar4;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar17;
    *(int *)(param_1 + 0x30) = iVar16 - iVar17;
    *(int *)(param_1 + 0x18) = iVar4 - iVar17;
    if ((iVar17 != 0) && (iVar16 = 0, 0 < *(int *)(iVar8 + 4))) {
      do {
        pvVar5 = *(void **)(*(int *)(param_1 + 8) + iVar16 * 4);
        memmove(pvVar5,(void *)((int)pvVar5 + iVar17 * 4),*(int *)(param_1 + 0x14) << 2);
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(iVar8 + 4));
    }
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
  iVar16 = param_2[7];
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(int *)(param_1 + 0x28) = iVar16;
  uVar14 = param_2[0x16];
  uVar7 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = uVar7 + uVar14;
  uVar2 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x4c) =
       *(int *)(param_1 + 0x4c) + ((int)uVar14 >> 0x1f) + (uint)CARRY4(uVar7,uVar14);
  uVar14 = param_2[0x17];
  *(uint *)(param_1 + 0x50) = uVar2 + uVar14;
  uVar7 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + ((int)uVar14 >> 0x1f) + (uint)CARRY4(uVar2,uVar14);
  uVar14 = param_2[0x18];
  *(uint *)(param_1 + 0x58) = uVar7 + uVar14;
  uVar2 = *(uint *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x5c) =
       *(int *)(param_1 + 0x5c) + ((int)uVar14 >> 0x1f) + (uint)CARRY4(uVar7,uVar14);
  uVar14 = param_2[0x19];
  *(uint *)(param_1 + 0x60) = uVar2 + uVar14;
  *(uint *)(param_1 + 100) =
       *(int *)(param_1 + 100) + ((int)uVar14 >> 0x1f) + (uint)CARRY4(uVar2,uVar14);
  if ((*(uint *)(param_1 + 0x40) + 1 != param_2[0xe]) ||
     (*(int *)(param_1 + 0x44) + (uint)(0xfffffffe < *(uint *)(param_1 + 0x40)) != param_2[0xf])) {
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  }
  *(int *)(param_1 + 0x40) = param_2[0xe];
  *(int *)(param_1 + 0x44) = param_2[0xf];
  iVar16 = piVar1[*(int *)(param_1 + 0x28)];
  iVar9 = ((int)(piVar1[*(int *)(param_1 + 0x24)] + (piVar1[*(int *)(param_1 + 0x24)] >> 0x1f & 3U))
          >> 2) + ((int)(iVar16 + (iVar16 >> 0x1f & 3U)) >> 2) + *(int *)(param_1 + 0x30);
  iVar4 = iVar9 - iVar16 / 2;
  iVar17 = iVar4 + iVar16;
  if (*(int *)(param_1 + 0x10) < iVar17) {
    iVar18 = 0;
    *(int *)(param_1 + 0x10) = piVar1[1] + iVar17;
    if (0 < *(int *)(iVar8 + 4)) {
      do {
        pvVar5 = realloc(*(void **)(*(int *)(param_1 + 8) + iVar18 * 4),
                         *(int *)(param_1 + 0x10) << 2);
        *(void **)(*(int *)(param_1 + 8) + iVar18 * 4) = pvVar5;
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(iVar8 + 4));
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar19 = 0;
    iVar18 = *piVar1 / 2;
  }
  else {
    if (*(int *)(param_1 + 0x28) != 1) {
      return 0xffffffff;
    }
    iVar18 = piVar1[*(int *)(param_1 + 0x24)];
    iVar19 = ((int)(piVar1[1] + (piVar1[1] >> 0x1f & 3U)) >> 2) -
             ((int)(iVar18 + (iVar18 >> 0x1f & 3U)) >> 2);
    iVar18 = iVar18 / 2 + iVar19;
  }
  iVar15 = 0;
  if (0 < *(int *)(iVar8 + 4)) {
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 8) + iVar15 * 4) + iVar4 * 4;
      iVar3 = *(int *)(*param_2 + iVar15 * 4);
      iVar11 = iVar19;
      if (iVar19 < iVar18) {
        iVar13 = iVar18 - iVar19;
        iVar11 = iVar13 + iVar19;
        pfVar10 = (float *)(iVar6 + iVar19 * 4);
        do {
          iVar13 = iVar13 + -1;
          *pfVar10 = *(float *)((int)pfVar10 + (iVar3 - iVar6)) + *pfVar10;
          pfVar10 = pfVar10 + 1;
        } while (iVar13 != 0);
      }
      if (iVar11 < iVar16) {
        local_14 = iVar16 - iVar11;
        puVar12 = (undefined4 *)(iVar6 + iVar11 * 4);
        do {
          *puVar12 = *(undefined4 *)((int)puVar12 + (iVar3 - iVar6));
          local_14 = local_14 + -1;
          puVar12 = puVar12 + 1;
        } while (local_14 != 0);
      }
      FUN_00432360();
      DAT_00516388 = DAT_00516388 + 1;
      FUN_00432360();
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(iVar8 + 4));
  }
  if (*(int *)(param_1 + 0x18) == -1) {
    *(int *)(param_1 + 0x18) = iVar9;
  }
  uVar14 = *(uint *)(param_1 + 0x38);
  if ((uVar14 & *(uint *)(param_1 + 0x3c)) == 0xffffffff) {
    uVar14 = param_2[0xd];
    if ((param_2[0xc] & uVar14) == 0xffffffff) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      goto LAB_00432013;
    }
    *(int *)(param_1 + 0x38) = param_2[0xc];
  }
  else {
    uVar7 = iVar9 - *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x38) = uVar7 + uVar14;
    *(uint *)(param_1 + 0x3c) =
         ((int)uVar7 >> 0x1f) + *(uint *)(param_1 + 0x3c) + (uint)CARRY4(uVar7,uVar14);
    uVar14 = param_2[0xc];
    uVar7 = param_2[0xd];
    if ((uVar14 & uVar7) == 0xffffffff) goto LAB_00432013;
    uVar2 = *(uint *)(param_1 + 0x3c);
    if ((*(uint *)(param_1 + 0x38) == uVar14) && (uVar2 == uVar7)) goto LAB_00432013;
    if (((int)uVar7 <= (int)uVar2) &&
       (((int)uVar7 < (int)uVar2 || (uVar14 < *(uint *)(param_1 + 0x38))))) {
      iVar8 = *(int *)(param_1 + 0x38) - param_2[0xc];
      if (param_2[0xb] == 0) {
        if (((param_2[0xe] == 1) && (param_2[0xf] == 0)) &&
           (iVar8 = *(int *)(param_1 + 0x18) + iVar8, *(int *)(param_1 + 0x18) = iVar8,
           iVar9 < iVar8)) {
          *(int *)(param_1 + 0x18) = iVar9;
        }
      }
      else {
        iVar9 = iVar9 - iVar8;
      }
    }
    *(int *)(param_1 + 0x38) = param_2[0xc];
    uVar14 = param_2[0xd];
  }
  *(uint *)(param_1 + 0x3c) = uVar14;
LAB_00432013:
  *(int *)(param_1 + 0x30) = iVar9;
  *(int *)(param_1 + 0x14) = iVar17;
  if (param_2[0xb] != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return 0;
}


