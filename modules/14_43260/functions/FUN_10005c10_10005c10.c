/* Module: 14_43260.dll
   Function: FUN_10005c10
   Address: 10005c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_10005c10(void *this,undefined4 *param_1,byte *param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float10 fVar10;
  float in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  float *in_stack_ffffffbc;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  float in_stack_ffffffcc;
  float *in_stack_ffffffd0;
  int in_stack_ffffffd4;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int local_c;
  float local_8;
  
  FUN_10002fb0(this,param_1,(float *)((int)this + 0x1662));
  iVar3 = *(int *)((int)this + 0x98e);
  pfVar2 = (float *)((int)this + 0x1662);
  pfVar9 = (float *)(*(int *)((int)this + 0x9aa) + (*(int *)((int)this + 0x99a) - iVar3) * 4);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar9 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar9 = pfVar9 + 1;
  }
  *(undefined4 *)((int)this + 0x9a2) = *(undefined4 *)((int)this + 0x9a6);
  if (*(int *)((int)this + 0x165e) == 0) {
    iVar3 = *(int *)((int)this + 0x98e);
    *(undefined4 *)((int)this + 0x165e) = 1;
    iVar13 = 1;
  }
  else {
    iVar3 = *(int *)((int)this + 0x98e);
    iVar13 = 2;
  }
  uVar11 = 0x10005c90;
  FUN_100034c0(this,(float *)(*(int *)((int)this + 0x9aa) +
                             (*(int *)((int)this + 0x99a) - iVar3) * 4),iVar3,iVar13);
  FUN_100039e0((int)this);
  FUN_10005420(*(int *)((int)this + 0x9ca),*(float **)((int)this + 0x9ce));
  uVar12 = 0x10005cbc;
  FUN_10005230(this,*(float *)((int)this + 0x95e),'t');
  iVar3 = *(int *)((int)this + 0x95a);
  param_1 = (undefined4 *)0x0;
  if (0 < iVar3) {
    local_c = 0;
    do {
      if (param_1 == (undefined4 *)(iVar3 + -1)) {
        fVar14 = *(float *)((int)this + 0x9c6);
        iVar13 = 2;
        puVar7 = (undefined4 *)((int)this + 0x9c6);
        puVar6 = (undefined4 *)&stack0xffffffcc;
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_10004b20(this,in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,uVar11,uVar12,iVar13
                     ,fVar14);
        *(undefined4 *)(*(int *)((int)this + 0x9b2) + *(int *)((int)this + 0x95a) * 8 + -4) =
             *(undefined4 *)(*(int *)((int)this + 0x9b2) + -8 + *(int *)((int)this + 0x95a) * 8);
      }
      else if (local_c == iVar3 + -2) {
        pfVar2 = (float *)((int)this + 0x9da);
        fVar14 = SQRT(*(float *)((int)this + 0x9da) * *(float *)((int)this + 0x9c6));
        if (*(float *)((int)this + 0x9c6) <= *pfVar2) {
          iVar13 = 2;
          puVar7 = (undefined4 *)((int)this + 0x9c6);
          puVar6 = (undefined4 *)&stack0xffffffcc;
          puVar8 = param_1;
          fVar15 = fVar14;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
          pfVar9 = (float *)&stack0xffffffb4;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar9 = *pfVar2;
            pfVar2 = pfVar2 + 1;
            pfVar9 = pfVar9 + 1;
          }
          iVar3 = FUN_100049d0(this,in_stack_ffffffb4,in_stack_ffffffb8,in_stack_ffffffbc,
                               in_stack_ffffffc0,in_stack_ffffffc4,iVar13,in_stack_ffffffcc,
                               in_stack_ffffffd0,in_stack_ffffffd4,uVar11,uVar12,(int)puVar8,fVar15)
          ;
          if (iVar3 != 0) goto LAB_10005dbb;
          pfVar2 = *(float **)((int)this + 0x9de);
        }
        else {
          iVar13 = 2;
          pfVar9 = (float *)&stack0xffffffcc;
          puVar7 = param_1;
          fVar15 = fVar14;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar9 = *pfVar2;
            pfVar2 = pfVar2 + 1;
            pfVar9 = pfVar9 + 1;
          }
          puVar6 = (undefined4 *)((int)this + 0x9c6);
          puVar8 = (undefined4 *)&stack0xffffffb4;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          iVar3 = FUN_100049d0(this,in_stack_ffffffb4,in_stack_ffffffb8,in_stack_ffffffbc,
                               in_stack_ffffffc0,in_stack_ffffffc4,iVar13,in_stack_ffffffcc,
                               in_stack_ffffffd0,in_stack_ffffffd4,uVar11,uVar12,(int)puVar7,fVar15)
          ;
          if (iVar3 != 0) {
LAB_10005dbb:
            *(undefined4 *)(*(int *)((int)this + 0x9b2) + (int)param_1 * 8 + 4) =
                 *(undefined4 *)(*(int *)((int)this + 0x9b2) + (int)param_1 * 8);
            goto LAB_10005eaf;
          }
          pfVar2 = *(float **)((int)this + 0x9ca);
        }
        uVar12 = 0x10005de4;
        fVar10 = FUN_10004b80(fVar14,pfVar2);
        *(float *)(*(int *)((int)this + 0x9b2) + 4 + (int)param_1 * 8) = (float)fVar10;
      }
      else {
        if (local_c < iVar3 + -2) {
          local_8 = *(float *)((int)this + 0x9da);
          iVar13 = 2;
          puVar7 = (undefined4 *)((int)this + 0x9c6);
          puVar6 = (undefined4 *)&stack0xffffffcc;
          puVar8 = param_1;
          fVar14 = local_8;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar7 = (undefined4 *)((int)this + 0x9da);
          puVar6 = (undefined4 *)&stack0xffffffb4;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
          iVar3 = FUN_100049d0(this,in_stack_ffffffb4,in_stack_ffffffb8,in_stack_ffffffbc,
                               in_stack_ffffffc0,in_stack_ffffffc4,iVar13,in_stack_ffffffcc,
                               in_stack_ffffffd0,in_stack_ffffffd4,uVar11,uVar12,(int)puVar8,fVar14)
          ;
          if (iVar3 != 0) {
LAB_10005e7c:
            *(undefined4 *)(*(int *)((int)this + 0x9b2) + (int)param_1 * 8 + 4) =
                 *(undefined4 *)(*(int *)((int)this + 0x9b2) + (int)param_1 * 8);
            goto LAB_10005eaf;
          }
          pfVar2 = *(float **)((int)this + 0x9de);
        }
        else {
          local_8 = *(float *)((int)this + 0x9c6);
          iVar13 = 2;
          puVar7 = (undefined4 *)((int)this + 0x9da);
          puVar6 = (undefined4 *)&stack0xffffffcc;
          puVar8 = param_1;
          fVar14 = local_8;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar7 = (undefined4 *)((int)this + 0x9c6);
          puVar6 = (undefined4 *)&stack0xffffffb4;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
          iVar3 = FUN_100049d0(this,in_stack_ffffffb4,in_stack_ffffffb8,in_stack_ffffffbc,
                               in_stack_ffffffc0,in_stack_ffffffc4,iVar13,in_stack_ffffffcc,
                               in_stack_ffffffd0,in_stack_ffffffd4,uVar11,uVar12,(int)puVar8,fVar14)
          ;
          if (iVar3 != 0) goto LAB_10005e7c;
          pfVar2 = *(float **)((int)this + 0x9ca);
        }
        uVar12 = 0x10005ea2;
        fVar10 = FUN_10004b80(local_8,pfVar2);
        *(float *)(*(int *)((int)this + 0x9b2) + 4 + (int)param_1 * 8) = (float)fVar10;
      }
LAB_10005eaf:
      iVar3 = *(int *)((int)this + 0x95a);
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_c = local_c + 2;
    } while ((int)param_1 < iVar3);
  }
  if (0 < *(int *)((int)this + 0x95a)) {
    iVar13 = 0;
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 1;
      *(int *)((int)this + 0xab2) = iVar1;
      iVar4 = *(int *)((int)this + 0x9ae) + iVar13;
      *(undefined4 *)((int)this + 0x9c2) = *(undefined4 *)(*(int *)((int)this + 0x9b2) + iVar3 * 8);
      *(int *)((int)this + 0x9b6) = iVar4;
      *(int *)((int)this + 0x9ba) = iVar4 + 0x28;
      FUN_10005660(this,iVar3);
      iVar13 = iVar13 + 0x50;
      iVar3 = iVar1;
    } while (iVar1 < *(int *)((int)this + 0x95a));
  }
  uVar11 = *(undefined4 *)((int)this + 0x9ca);
  *(undefined4 *)((int)this + 0x9ca) = *(undefined4 *)((int)this + 0x9de);
  *(undefined4 *)((int)this + 0x9da) = *(undefined4 *)((int)this + 0x9c6);
  uVar12 = *(undefined4 *)((int)this + 0x9ce);
  *(undefined4 *)((int)this + 0x9ce) = *(undefined4 *)((int)this + 0x9e2);
  *(undefined4 *)((int)this + 0x9de) = uVar11;
  uVar11 = *(undefined4 *)((int)this + 0x9d2);
  *(undefined4 *)((int)this + 0x9e2) = uVar12;
  *(undefined4 *)((int)this + 0x9d2) = *(undefined4 *)((int)this + 0x9e6);
  *(undefined4 *)((int)this + 0x9e6) = uVar11;
  FUN_100054a0(this,*(undefined4 **)((int)this + 0x9a6),param_2);
  puVar7 = *(undefined4 **)((int)this + 0x9aa) + *(int *)((int)this + 0x98e);
  puVar6 = *(undefined4 **)((int)this + 0x9aa);
  for (uVar5 = *(int *)((int)this + 0x99a) - *(int *)((int)this + 0x98e) & 0x3fffffff; uVar5 != 0;
      uVar5 = uVar5 - 1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  return 0;
}


