/* Module: encn3260.dll
   Function: FUN_66490e20
   Address: 66490e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66490e20(void *this,int *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  void *pvVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte local_3e;
  byte local_3c;
  byte bStack_3b;
  byte local_37;
  byte local_36;
  byte local_35;
  undefined2 local_31;
  byte local_2f;
  byte bStack_2e;
  undefined2 local_2d;
  char local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_19;
  byte local_18;
  uint local_14;
  void *local_10;
  byte *local_c;
  int *local_8;
  
  local_10 = this;
  if (*(int *)((int)this + 0x5c) != 0) {
    uVar7 = FUN_664914f0(this,param_1);
    return uVar7;
  }
  if (*(int *)((int)this + 0x78) != 0) {
    uVar7 = FUN_66491190(param_1,(byte *)0x0,(undefined4 *)0x0);
    return uVar7;
  }
  if (*(int *)((int)this + 0x30) == 0) {
    return 0x80040009;
  }
  piVar8 = (int *)(**(code **)(*param_1 + 0x10))();
  if (piVar8 == (int *)0x0) {
    return 0x80040009;
  }
  iVar9 = (**(code **)(*piVar8 + 0x24))(piVar8);
  if (iVar9 == 0) {
    local_8 = (int *)(**(code **)(*piVar8 + 0x10))(piVar8);
    (**(code **)(*local_8 + 0x18))(local_8);
  }
  else {
    local_8 = (int *)0x0;
  }
  local_14 = (**(code **)(*piVar8 + 0x18))(piVar8);
  uVar10 = FUN_6648d180(*(void **)((int)this + 0x2c),local_14);
  if (uVar10 == 0) {
    return 0x80040009;
  }
  if (*(int *)(uVar10 + 0xc) == 0) {
    *(undefined4 *)(uVar10 + 0xc) = 1;
  }
  pvVar3 = *(void **)(uVar10 + 0x1a);
  if ((pvVar3 != (void *)0x0) && (param_1[5] == 0)) {
    FUN_66494670(pvVar3,param_1);
    iVar9 = (**(code **)(*param_1 + 0x1c))(param_1);
    FUN_664947a0(pvVar3,0,iVar9);
  }
  iVar9 = (**(code **)(*piVar8 + 0x24))(piVar8);
  if (iVar9 != 0) {
    return 0;
  }
  local_c = (byte *)0x0;
  iVar9 = FUN_66491830(local_10,&local_20);
  if (iVar9 == 0) {
    iVar9 = (**(code **)(*local_8 + 0x18))(local_8);
    pbVar11 = operator_new(iVar9 + 0x10);
  }
  else {
    iVar9 = (**(code **)(*local_8 + 0x18))();
    pbVar11 = operator_new(iVar9 + 0x19);
    bVar15 = *pbVar11;
    *pbVar11 = bVar15 & 0x7f;
    bVar14 = local_20 << 7;
    *pbVar11 = bVar14 | bVar15 & 3;
    bVar5 = (local_1f & 0x1f) << 2;
    *pbVar11 = bVar5 | bVar14 | bVar15 & 1;
    bVar15 = (local_1e & 1) << 1 | bVar5 | bVar14;
    *pbVar11 = bVar15;
    *pbVar11 = local_1d & 1 | bVar15;
    pbVar11[1] = local_1b;
    pbVar11[2] = local_1c;
    local_c = pbVar11 + 3;
    if (local_20 == '\x01') {
      pbVar11[3] = local_19;
      pbVar11[4] = local_1a;
      local_c = pbVar11 + 5;
    }
    *local_c = (byte)((uint)_local_18 >> 0x18);
    local_c[1] = (byte)((uint)_local_18 >> 0x10);
    local_c[2] = (byte)((uint)_local_18 >> 8);
    local_c[3] = local_18;
    local_c = local_c + (4 - (int)pbVar11);
  }
  if ((ushort)local_14 < 0x1f) {
    local_3e = (byte)local_14;
  }
  else {
    local_3e = 0x1f;
    local_31 = (ushort)local_14;
  }
  iVar9 = param_1[2];
  uVar1 = (undefined2)param_1[1];
  *(undefined2 *)(uVar10 + 4) = uVar1;
  uVar2 = *(undefined2 *)((int)param_1 + 6);
  *(undefined2 *)(uVar10 + 6) = uVar2;
  uVar7 = (**(code **)(*piVar8 + 0x14))(piVar8);
  *(undefined4 *)(uVar10 + 0x12) = uVar7;
  uVar6 = (**(code **)(*piVar8 + 0x20))(piVar8);
  piVar8 = local_8;
  local_36 = 0x3f;
  if (uVar6 < 0x40) {
    local_36 = (byte)uVar6;
  }
  iVar4 = param_1[4];
  if (0x3f < uVar6) {
    local_2d = uVar6;
  }
  pbVar12 = (byte *)(**(code **)(*local_8 + 0x1c))(local_8);
  uVar10 = (**(code **)(*piVar8 + 0x18))(piVar8);
  pvVar3 = local_10;
  pbVar18 = pbVar11 + (int)local_c;
  local_3c = (byte)uVar1;
  *pbVar18 = iVar9 == 10 | (local_3e & 0x1f | 0x20) << 1;
  bStack_3b = (byte)((ushort)uVar1 >> 8);
  pbVar18[1] = bStack_3b;
  pbVar18[2] = local_3c;
  pbVar18[3] = (local_37 & 1 | (char)iVar4 << 1) << 6 | local_36 & 0x3f;
  pbVar18[4] = (byte)((uint)uVar7 >> 0x18);
  pbVar18[5] = (byte)((uint)uVar7 >> 0x10);
  local_35 = (byte)uVar7;
  pbVar18[6] = (byte)((uint)uVar7 >> 8);
  pbVar18[7] = local_35;
  pbVar17 = pbVar18 + 8;
  if (local_3e == 0x1f) {
    *pbVar17 = local_31._1_1_;
    pbVar18[9] = (byte)local_31;
    pbVar17 = pbVar18 + 10;
  }
  local_2f = (byte)uVar2;
  bStack_2e = (byte)((ushort)uVar2 >> 8);
  *pbVar17 = bStack_2e;
  pbVar17[1] = local_2f;
  pbVar18 = pbVar17 + 2;
  if (local_36 == 0x3f) {
    *pbVar18 = local_2d._1_1_;
    pbVar17[3] = (byte)local_2d;
    pbVar18 = pbVar17 + 4;
  }
  pbVar17 = pbVar18;
  for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pbVar17 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar17 = pbVar17 + 4;
  }
  for (uVar16 = uVar10 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *pbVar17 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar17 = pbVar17 + 1;
  }
  pbVar12 = pbVar11 + (int)local_c;
  *(int *)((int)local_10 + 0x38) = *(int *)((int)local_10 + 0x38) + 1;
  uVar13 = (**(code **)(*param_1 + 0x24))();
  uVar16 = *(uint *)((int)pvVar3 + 0x3c);
  *(uint *)((int)pvVar3 + 0x3c) = uVar16 + uVar13;
  *(uint *)((int)pvVar3 + 0x40) = *(int *)((int)pvVar3 + 0x40) + (uint)CARRY4(uVar16,uVar13);
  uVar7 = FUN_66492030(pvVar3,pbVar11,pbVar18 + (int)(local_c + (uVar10 - (int)pbVar12)));
  (**(code **)(*local_8 + 8))(local_8);
  return uVar7;
}


