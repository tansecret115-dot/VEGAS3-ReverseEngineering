/* Module: vegas30.exe
   Function: FUN_005c7ff0
   Address: 005c7ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005c811a) */
/* WARNING: Removing unreachable block (ram,0x005c81c1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005c7ff0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  double dVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar9;
  int unaff_EBP;
  short sVar10;
  undefined4 *puVar11;
  float10 fVar12;
  longlong lVar13;
  double dVar14;
  undefined8 uVar15;
  longlong lVar16;
  int iStack_13c;
  undefined4 local_130;
  undefined8 local_12c;
  int local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  double local_118;
  int local_110;
  int *local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100 [64];
  
  local_108 = 0;
  local_104 = 0;
  local_118 = -1.0;
  if ((((*(int *)(param_1 + 0x50) == 0) || (*(int *)(*(int *)(param_1 + 0x50) + 0x18) == 0)) ||
      (iVar4 = FUN_005f13f0(2), iVar4 == 0)) ||
     (local_10c = *(int **)(iVar4 + 0x60), local_10c == (int *)0x0)) {
    return (float10)_DAT_00610fd8;
  }
  local_11c = (uint)*(ushort *)(*(int *)(iVar4 + 0x2c) + 2);
  local_110 = *(int *)(*(int *)(iVar4 + 0x2c) + 4);
  ftol();
  lVar13 = ftol();
  iVar8 = (int)((ulonglong)lVar13 >> 0x20);
  uVar9 = (uint)lVar13;
  iVar6 = *(int *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar14 = (double)ftol();
  local_12c = ftol();
  local_124 = *(uint *)(iVar4 + 0x50) - uVar9;
  uStack_120 = (*(int *)(iVar4 + 0x54) - iVar8) - (uint)(*(uint *)(iVar4 + 0x50) < uVar9);
  iStack_13c = iVar6;
  if (CONCAT44(uStack_120,local_124) < local_12c) {
    if (local_110 != 0) {
      ftol();
    }
    uVar15 = ftol();
    *(undefined8 *)(param_1 + 0x20) = uVar15;
    local_124 = *(uint *)(iVar4 + 0x50) - uVar9;
    uStack_120 = (*(int *)(iVar4 + 0x54) - iVar8) - (uint)(*(uint *)(iVar4 + 0x50) < uVar9);
    ftol();
    lVar16 = ftol();
    iStack_13c = extraout_EDX;
    if (CONCAT44(uStack_120,local_124) < lVar16) {
      if (local_110 == 0) {
        iStack_13c = 0;
      }
      else {
        ftol();
        iStack_13c = extraout_EDX_00;
      }
      uVar15 = ftol();
      *(undefined8 *)(param_1 + 0x20) = uVar15;
    }
    fVar12 = (float10)FUN_005c7ff0(param_1);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(int *)(param_1 + 0x24) = iVar6;
    local_118 = (double)fVar12;
    lVar16 = __allrem(lVar13 + local_12c,*(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(iVar4 + 0x54)
                     );
    lVar13 = 0;
    dVar14 = dVar3;
    local_12c = lVar16;
  }
  puVar11 = local_100;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_130 = 2;
  iVar4 = (**(code **)(*local_10c + 0x34))(local_10c,lVar13,local_12c,local_100,2,&local_130);
  if ((-1 < iVar4) && (unaff_EBP == 2)) {
    sVar7 = (short)uStack_120;
    sVar10 = uStack_120._2_2_;
    if (1 < iStack_13c * 2) {
      psVar5 = (short *)&local_11c;
      iVar4 = iStack_13c * 2 + -1;
      do {
        sVar1 = psVar5[1];
        if (sVar10 <= sVar1) {
          uStack_120 = CONCAT22(sVar1,(short)uStack_120);
          sVar10 = sVar1;
        }
        sVar1 = *psVar5;
        if (sVar1 <= sVar7) {
          uStack_120 = CONCAT22(uStack_120._2_2_,sVar1);
          sVar7 = sVar1;
        }
        psVar5 = psVar5 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar9 = (int)sVar7 >> 0x1f;
    iVar6 = ((int)sVar7 ^ uVar9) - uVar9;
    uVar9 = (int)sVar10 >> 0x1f;
    iVar4 = ((int)sVar10 ^ uVar9) - uVar9;
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    if (iVar4 != 0) {
      iVar6 = ftol();
      fVar12 = (float10)iVar6 / (float10)iVar4;
      goto LAB_005c8342;
    }
  }
  fVar12 = (float10)(double)CONCAT44(local_124,local_12c._4_4_);
LAB_005c8342:
  if ((_DAT_00610fd8 <= dVar14) && ((float10)dVar14 <= fVar12)) {
    return (float10)dVar14;
  }
  return fVar12;
}


