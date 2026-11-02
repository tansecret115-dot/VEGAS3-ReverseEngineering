/* Module: vegas30.exe
   Function: FUN_0047b0e0
   Address: 0047b0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047b1e5) */

undefined4 FUN_0047b0e0(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  SHORT SVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  float10 fVar14;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  undefined8 local_20;
  float local_18;
  int local_14;
  uint local_10;
  uint local_c;
  float local_8;
  uint local_4;
  
  iVar4 = param_1;
  puVar2 = *(undefined4 **)(param_1 + 0x54);
  if ((*(byte *)(puVar2 + 10) & 8) != 0) {
    puVar13 = (undefined8 *)0x0;
    param_3 = ((int)param_3 < 1) - 1 & param_3;
    param_4 = ((int)param_4 < 1) - 1 & param_4;
    fVar3 = (float)puVar2[6];
    if (-1 < (int)fVar3) {
      puVar13 = &local_20;
      local_20 = *(double *)(puVar2 + 4);
      local_18 = *(float *)(param_1 + 0x20);
      if (((int)local_18 <= (int)fVar3) &&
         (local_18 = (float)(*(int *)(param_1 + 0x28) + -1), (int)fVar3 <= (int)local_18)) {
        local_18 = fVar3;
      }
      iVar4 = puVar2[7];
      local_14 = *(int *)(param_1 + 0x24);
      if ((local_14 <= iVar4) && (local_14 = *(int *)(param_1 + 0x2c) + -1, iVar4 <= local_14)) {
        local_14 = iVar4;
      }
    }
    local_30 = puVar2[4];
    local_2c = puVar2[5];
    local_28 = *(uint *)(param_1 + 0x20);
    if (((int)local_28 <= (int)param_3) &&
       (local_28 = *(int *)(param_1 + 0x28) - 1, (int)param_3 <= (int)local_28)) {
      local_28 = param_3;
    }
    local_24 = *(uint *)(param_1 + 0x24);
    if (((int)local_24 <= (int)param_4) &&
       (local_24 = *(int *)(param_1 + 0x2c) - 1, (int)param_4 <= (int)local_24)) {
      local_24 = param_4;
    }
    puVar2[6] = param_3;
    puVar2[7] = param_4;
    FUN_0047bae0(*puVar2,puVar13,&local_30);
    return 1;
  }
  piVar5 = *(int **)(param_1 + 0x18);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  iVar12 = *(int *)(param_1 + 0x44);
  if ((iVar12 < 0) || (*piVar5 + -1 < iVar12)) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(piVar5[2] + iVar12 * 4);
  }
  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
    return 0;
  }
  uVar10 = **(uint **)(param_1 + 0x30);
  if (uVar10 <= (uint)puVar2[1]) {
    return 0;
  }
  iVar8 = param_3 + puVar2[2];
  iVar12 = *(int *)(iVar4 + 0x20);
  if ((*(int *)(iVar4 + 0x20) <= iVar8) &&
     (iVar12 = *(int *)(iVar4 + 0x28), iVar8 <= *(int *)(iVar4 + 0x28))) {
    iVar12 = iVar8;
  }
  iVar9 = param_4 + puVar2[3];
  iVar8 = *(int *)(iVar4 + 0x24);
  if ((*(int *)(iVar4 + 0x24) <= iVar9) &&
     (iVar8 = *(int *)(iVar4 + 0x2c), iVar9 <= *(int *)(iVar4 + 0x2c))) {
    iVar8 = iVar9;
  }
  FUN_00478480(iVar4,param_1,iVar12,iVar8,&local_10);
  local_30 = iVar12;
  local_2c = iVar8;
  SVar7 = GetKeyState(0x11);
  if ((puVar2[10] & 1) != 0) {
    FUN_00478480(iVar4,param_1,puVar2[4],puVar2[5],&local_20);
    puVar2[4] = iVar12;
    puVar2[5] = iVar8;
    iVar12 = *(int *)(iVar4 + 0x48);
    FUN_0047b600(iVar4,param_1,local_10 - (uint)local_20,
                 (local_c - local_20._4_4_) - (uint)(local_10 < (uint)local_20),
                 (double)(local_8 - local_18),1);
    iVar12 = puVar2[1] + (*(int *)(iVar4 + 0x48) - iVar12);
    puVar2[1] = iVar12;
    fVar14 = (float10)FUN_00478190(param_1,iVar12,local_10,local_c);
    local_8 = (float)fVar14;
    goto LAB_0047b4da;
  }
  if ((puVar2[10] & 4) != 0) {
    FUN_00478480(iVar4,param_1,puVar2[4],puVar2[5],&local_20);
    puVar2[5] = iVar8;
    local_10 = (uint)local_20;
    local_c = local_20._4_4_;
    if (*(int *)(iVar4 + 0x4c) == 1) {
      local_18 = *(float *)(*(int *)(iVar4 + 0x48) * 0x10 + 8 +
                           *(int *)(*(int *)(param_1 + 0x30) + 8));
    }
    iVar12 = *(int *)(iVar4 + 0x48);
    FUN_0047b600(iVar4,param_1,0,0,(double)(local_8 - local_18),SVar7 < 0);
    iVar12 = puVar2[1] + (*(int *)(iVar4 + 0x48) - iVar12);
    puVar2[1] = iVar12;
    if (1 < *(uint *)(iVar4 + 0x4c)) {
      fVar14 = (float10)FUN_00478190(param_1,iVar12,local_10,local_c);
      local_8 = (float)fVar14;
    }
    goto LAB_0047b4da;
  }
  uVar6 = puVar2[1];
  iVar12 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  if (*(float *)(param_1 + 0x20) <= local_8) {
    if (*(float *)(param_1 + 0x24) < local_8) {
      local_8 = *(float *)(param_1 + 0x24);
    }
  }
  else {
    local_8 = *(float *)(param_1 + 0x20);
  }
  *(float *)(uVar6 * 0x10 + 8 + iVar12) = local_8;
  puVar1 = (uint *)(uVar6 * 0x10 + iVar12);
  if (uVar6 != 0) {
    if ((param_2 & 4) == 0) {
      FUN_0047bba0();
    }
    uVar10 = uVar10 - 1;
    if (uVar6 < uVar10) {
      uVar11 = puVar1[-4] + 1;
      uVar10 = puVar1[-3] + (uint)(0xfffffffe < puVar1[-4]);
      if (((int)uVar10 < (int)local_c) || (((int)uVar10 <= (int)local_c && (uVar11 <= local_10)))) {
        iVar9 = (uVar6 + 1) * 0x10;
        iVar8 = *(int *)(iVar9 + iVar12);
        uVar11 = iVar8 - 1;
        uVar10 = *(int *)(iVar9 + 4 + iVar12) - (uint)(iVar8 == 0);
        if (((int)local_c < (int)uVar10) || (((int)local_c <= (int)uVar10 && (local_10 <= uVar11))))
        {
          uVar10 = local_c;
          uVar11 = local_10;
        }
      }
    }
    else {
      if (uVar6 != uVar10) goto LAB_0047b4be;
      uVar11 = puVar1[-4] + 1;
      uVar10 = puVar1[-3] + (uint)(0xfffffffe < puVar1[-4]);
      if (((((int)uVar10 < (int)local_c) || (((int)uVar10 <= (int)local_c && (uVar11 <= local_10))))
          && (uVar6 = *(uint *)(iVar4 + 0x14), uVar10 = local_c, uVar11 = local_10,
             (int)uVar6 <= (int)local_c)) &&
         (((int)uVar6 < (int)local_c || (*(uint *)(iVar4 + 0x10) < local_10)))) {
        uVar10 = uVar6;
        uVar11 = *(uint *)(iVar4 + 0x10);
      }
    }
    *puVar1 = uVar11;
    puVar1[1] = uVar10;
  }
LAB_0047b4be:
  local_10 = *puVar1;
  local_c = puVar1[1];
  local_8 = (float)puVar1[2];
  local_4 = puVar1[3];
LAB_0047b4da:
  FUN_00477e00(iVar4,param_1,1);
  uVar10 = *(uint *)(iVar4 + 0x14);
  if (((int)uVar10 <= (int)local_c) &&
     (((int)uVar10 < (int)local_c || (*(uint *)(iVar4 + 0x10) <= local_10)))) {
    local_10 = *(uint *)(iVar4 + 0x10);
    local_c = uVar10;
  }
  iVar12 = *(int *)(iVar4 + 0x20);
  if (*(int *)(iVar4 + 0x38) != 0 || *(int *)(iVar4 + 0x3c) != 0) {
    local_20 = (double)(*(int *)(iVar4 + 0x28) - iVar12) *
               (double)CONCAT44((local_c - *(int *)(iVar4 + 0x34)) -
                                (uint)(local_10 < *(uint *)(iVar4 + 0x30)),
                                local_10 - *(uint *)(iVar4 + 0x30));
    __alldiv(*(undefined4 *)(iVar4 + 0x38),*(int *)(iVar4 + 0x3c),2,0);
    iVar8 = ftol();
    iVar12 = iVar12 + iVar8;
  }
  iVar8 = local_2c + 0x12;
  if ((*(byte *)(puVar2 + 10) & 5) != 0) {
    iVar8 = local_2c + 0x1a;
  }
  FUN_0047b5b0(iVar4,param_1,iVar12,iVar8,&local_10);
  FUN_00479520(iVar4);
  return 1;
}


