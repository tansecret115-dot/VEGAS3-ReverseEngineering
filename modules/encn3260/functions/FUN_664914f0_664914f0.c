/* Module: encn3260.dll
   Function: FUN_664914f0
   Address: 664914f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664914f0(void *this,int *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  void *pvVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte local_42;
  byte local_40;
  byte bStack_3f;
  byte local_3b;
  byte local_3a;
  byte local_39;
  undefined2 local_35;
  byte local_33;
  byte bStack_32;
  undefined2 local_31;
  char local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  byte local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  byte *local_c;
  int *local_8;
  
  if (*(int *)((int)this + 0x30) == 0) {
    return 0x80040009;
  }
  local_10 = this;
  piVar7 = (int *)(**(code **)(*param_1 + 0xc))();
  if (piVar7 == (int *)0x0) {
    return 0x80040009;
  }
  local_18 = piVar7;
  iVar8 = (**(code **)(*piVar7 + 0x24))(piVar7);
  if (iVar8 == 0) {
    local_8 = (int *)(**(code **)(*piVar7 + 0x10))(piVar7);
    (**(code **)(*local_8 + 0x18))(local_8);
  }
  else {
    local_8 = (int *)0x0;
  }
  local_14 = (**(code **)(*piVar7 + 0x18))(piVar7);
  uVar9 = FUN_6648d180(*(void **)((int)this + 0x2c),local_14);
  if (uVar9 == 0) {
    return 0x80040009;
  }
  if (*(int *)(uVar9 + 0xc) == 0) {
    *(undefined4 *)(uVar9 + 0xc) = 1;
  }
  pvVar3 = *(void **)(uVar9 + 0x1a);
  if ((pvVar3 != (void *)0x0) && (param_1[5] == 0)) {
    FUN_66494670(pvVar3,param_1);
    iVar8 = (**(code **)(*param_1 + 0x1c))(param_1);
    FUN_664947a0(pvVar3,0,iVar8);
  }
  iVar8 = (**(code **)(*piVar7 + 0x24))(piVar7);
  if (iVar8 != 0) {
    return 0;
  }
  local_c = (byte *)0x0;
  iVar8 = FUN_66491830(local_10,&local_24);
  if (iVar8 == 0) {
    iVar8 = (**(code **)(*local_8 + 0x18))(local_8);
    pbVar10 = operator_new(iVar8 + 0x10);
  }
  else {
    iVar8 = (**(code **)(*local_8 + 0x18))();
    pbVar10 = operator_new(iVar8 + 0x19);
    bVar15 = *pbVar10;
    *pbVar10 = bVar15 & 0x7f;
    bVar14 = local_24 << 7;
    *pbVar10 = bVar14 | bVar15 & 3;
    bVar5 = (local_23 & 0x1f) << 2;
    *pbVar10 = bVar5 | bVar14 | bVar15 & 1;
    bVar15 = (local_22 & 1) << 1 | bVar5 | bVar14;
    *pbVar10 = bVar15;
    *pbVar10 = local_21 & 1 | bVar15;
    pbVar10[1] = local_1f;
    pbVar10[2] = local_20;
    local_c = pbVar10 + 3;
    if (local_24 == '\x01') {
      pbVar10[3] = local_1d;
      pbVar10[4] = local_1e;
      local_c = pbVar10 + 5;
    }
    *local_c = (byte)((uint)_local_1c >> 0x18);
    local_c[1] = (byte)((uint)_local_1c >> 0x10);
    local_c[2] = (byte)((uint)_local_1c >> 8);
    local_c[3] = local_1c;
    local_c = local_c + (4 - (int)pbVar10);
  }
  if ((ushort)local_14 < 0x1f) {
    local_42 = (byte)local_14;
  }
  else {
    local_42 = 0x1f;
    local_35 = (ushort)local_14;
  }
  iVar8 = param_1[2];
  uVar1 = (undefined2)param_1[1];
  *(undefined2 *)(uVar9 + 4) = uVar1;
  uVar2 = *(undefined2 *)((int)param_1 + 6);
  *(undefined2 *)(uVar9 + 6) = uVar2;
  uVar11 = (**(code **)(*piVar7 + 0x14))(piVar7);
  *(undefined4 *)(uVar9 + 0x12) = uVar11;
  uVar6 = (**(code **)(*piVar7 + 0x20))(piVar7);
  piVar7 = local_8;
  local_3a = 0x3f;
  if (uVar6 < 0x40) {
    local_3a = (byte)uVar6;
  }
  iVar4 = param_1[4];
  if (0x3f < uVar6) {
    local_31 = uVar6;
  }
  pbVar12 = (byte *)(**(code **)(*local_8 + 0x1c))(local_8);
  uVar9 = (**(code **)(*piVar7 + 0x18))(piVar7);
  pvVar3 = local_10;
  pbVar18 = pbVar10 + (int)local_c;
  bStack_3f = (byte)((ushort)uVar1 >> 8);
  *pbVar18 = (local_42 & 0x1f | 0x20) << 1 | iVar8 == 10;
  local_40 = (byte)uVar1;
  pbVar18[1] = bStack_3f;
  pbVar18[2] = local_40;
  pbVar18[3] = (local_3b & 1 | (char)iVar4 << 1) << 6 | local_3a & 0x3f;
  pbVar18[4] = (byte)((uint)uVar11 >> 0x18);
  pbVar18[5] = (byte)((uint)uVar11 >> 0x10);
  local_39 = (byte)uVar11;
  pbVar18[6] = (byte)((uint)uVar11 >> 8);
  pbVar18[7] = local_39;
  pbVar17 = pbVar18 + 8;
  if (local_42 == 0x1f) {
    *pbVar17 = local_35._1_1_;
    pbVar18[9] = (byte)local_35;
    pbVar17 = pbVar18 + 10;
  }
  local_33 = (byte)uVar2;
  bStack_32 = (byte)((ushort)uVar2 >> 8);
  *pbVar17 = bStack_32;
  pbVar17[1] = local_33;
  pbVar18 = pbVar17 + 2;
  if (local_3a == 0x3f) {
    *pbVar18 = local_31._1_1_;
    pbVar17[3] = (byte)local_31;
    pbVar18 = pbVar17 + 4;
  }
  pbVar17 = pbVar18;
  for (uVar16 = uVar9 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pbVar17 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar17 = pbVar17 + 4;
  }
  for (uVar16 = uVar9 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *pbVar17 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar17 = pbVar17 + 1;
  }
  pbVar12 = pbVar10 + (int)local_c;
  *(int *)((int)local_10 + 0x38) = *(int *)((int)local_10 + 0x38) + 1;
  uVar13 = (**(code **)(*param_1 + 0x24))();
  uVar16 = *(uint *)((int)pvVar3 + 0x3c);
  *(uint *)((int)pvVar3 + 0x3c) = uVar16 + uVar13;
  *(uint *)((int)pvVar3 + 0x40) = *(int *)((int)pvVar3 + 0x40) + (uint)CARRY4(uVar16,uVar13);
  uVar11 = FUN_66492030(pvVar3,pbVar10,pbVar18 + (int)(local_c + (uVar9 - (int)pbVar12)));
  (**(code **)(*local_8 + 8))(local_8);
  (**(code **)(*local_18 + 8))(local_18);
  return uVar11;
}


