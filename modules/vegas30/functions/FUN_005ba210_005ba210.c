/* Module: vegas30.exe
   Function: FUN_005ba210
   Address: 005ba210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005ba210(undefined4 param_1,undefined4 *param_2,int param_3)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  iVar5 = FUN_005b9fc0(param_1,param_3,1);
  if (param_2 != (undefined4 *)0x0) {
    puVar11 = (undefined4 *)(iVar5 + 0x30);
    for (iVar9 = 0x34; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *param_2;
      param_2 = param_2 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  *(undefined4 *)(iVar5 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x2c) = 0xffffffff;
  iVar9 = *(int *)(iVar5 + 200);
  if (iVar9 == 0) {
    iVar6 = *(int *)(iVar5 + 0xb8);
  }
  else {
    iVar6 = *(int *)(iVar5 + 0xbc);
  }
  *(int *)(iVar5 + 0xc0) = iVar6;
  iVar6 = 2 - (uint)(iVar6 != 1);
  if (iVar9 == 0) {
    iVar10 = 1;
  }
  else {
    iVar10 = *(int *)(iVar5 + 0x80) * iVar6;
  }
  iVar10 = *(int *)(iVar5 + 0x34) / iVar10;
  *(int *)(iVar5 + 0x88) = iVar10;
  if (iVar9 == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(iVar5 + 0x84) * iVar6;
  }
  iVar6 = *(int *)(iVar5 + 0x38) / iVar6;
  *(int *)(iVar5 + 0x8c) = iVar6;
  if (iVar10 < 1) {
    iVar10 = 1;
  }
  *(int *)(iVar5 + 0x88) = iVar10;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  *(int *)(iVar5 + 0x8c) = iVar6;
  uVar7 = 0;
  *(double *)(iVar5 + 0xa8) = *(double *)(iVar5 + 0x50) / (double)*(int *)(iVar5 + 0xa4);
  puVar11 = (undefined4 *)(iVar5 + 0x9c0);
  for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  uVar8 = *(undefined4 *)(iVar5 + 0x8c);
  uVar2 = *(undefined4 *)(iVar5 + 0x88);
  uVar3 = *(undefined4 *)(iVar5 + 0x30);
  if (param_3 == 0) {
    uVar7 = -(uint)(DAT_0064acc4 != 0) & DAT_0064aa40;
  }
  iVar9 = FUN_005a52a0(iVar5 + 0x108,0,10,uVar3,uVar2,uVar8,uVar7,&LAB_005ac450);
  if (-1 < iVar9) {
    iVar9 = FUN_005a52a0(iVar5 + 0x1e0,0,7,uVar3,uVar2,uVar8,0,&LAB_005ac450);
    if (-1 < iVar9) {
      iVar9 = FUN_005a52a0(iVar5 + 0x2b8,0,7,uVar3,0,0,0,&LAB_005ac450);
      if (-1 < iVar9) {
        iVar9 = FUN_005a52a0(iVar5 + 0x390,0,4,*(undefined4 *)(iVar5 + 0xc4),uVar2,uVar8,0,
                             &LAB_005ac450);
        if (-1 < iVar9) {
          puVar11 = (undefined4 *)(iVar5 + 0x4c0);
          for (iVar9 = 0xa0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          dVar1 = *(double *)(iVar5 + 0xf0);
          local_10 = uVar2;
          local_c = uVar8;
          local_8 = dVar1;
          if ((_DAT_00610fd8 < dVar1) && (*(int *)(iVar5 + 0xec) != 0)) {
            if (*(int *)(iVar5 + 0x88) == *(int *)(iVar5 + 0x34)) {
              uVar8 = *(undefined4 *)(iVar5 + 0x4c);
            }
            else {
              uVar8 = 0;
            }
            local_8._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
            uVar2 = local_8._4_4_;
            local_8._0_4_ = SUB84(dVar1,0);
            uVar4 = (undefined4)local_8;
            iVar9 = FUN_005aa5e0((undefined4 *)(iVar5 + 0x4c0),uVar4,uVar2,
                                 *(undefined4 *)(iVar5 + 0xf8),*(undefined4 *)(iVar5 + 0xa8),
                                 *(undefined4 *)(iVar5 + 0xac),uVar8,&local_10,uVar3);
            if (iVar9 < 0) goto LAB_005ba470;
          }
          puVar11 = (undefined4 *)(iVar5 + 0x740);
          for (iVar9 = 0xa0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          iVar9 = FUN_005aa5e0((undefined4 *)(iVar5 + 0x740),0,0,*(undefined4 *)(iVar5 + 0xf8),0,0,0
                               ,&local_10,uVar3);
          if (-1 < iVar9) {
            *(undefined4 *)(iVar5 + 0x18) = 1;
            goto LAB_005ba488;
          }
        }
      }
    }
  }
LAB_005ba470:
  FUN_005ba110(param_1,param_3);
LAB_005ba488:
  FUN_005ba030(param_1,iVar5,1,0);
  return iVar9;
}


