/* Module: encn3260.dll
   Function: FUN_6648f3f0
   Address: 6648f3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648f3f0(void *this,int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  void *pvVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  int local_80 [5];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58 [5];
  int local_44 [2];
  void *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  uint uStack_24;
  void *local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  void *local_8;
  
  local_c = this;
  FUN_664da650(local_58);
  iVar5 = FUN_664da820(param_1);
  if (iVar5 != 0) {
    FUN_664da660(local_58);
    return 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  iVar5 = *(int *)((int)this + 0x8c);
  local_28 = *(undefined4 *)(iVar5 + 0x3c);
  uStack_24 = 0;
  uVar6 = ftol();
  *(undefined4 *)(iVar5 + 0x3c) = uVar6;
  local_8 = (void *)0x0;
  local_1c = 0;
  (**(code **)(**(int **)((int)this + 0x10) + 0x18))(*(int **)((int)this + 0x10),&local_30);
  local_18 = 0;
  local_10 = (undefined4 *)0x0;
  iVar5 = local_2c / 1000 + local_30 * 1000;
  iVar7 = FUN_664da7f0(local_58,(int *)&local_8);
  uVar3 = extraout_var;
  puVar2 = local_10;
  pvVar9 = local_c;
  while (local_10 = puVar2, local_c = pvVar9, iVar7 == 0) {
    switch(*(undefined1 *)((int)local_8 + 3)) {
    case 200:
    case 0xc9:
    case 0xca:
      FUN_664d9560(*(void **)((int)this + 0x8c),(int)local_8,iVar5);
      break;
    case 0xcb:
      FUN_664d9560(*(void **)((int)this + 0x8c),(int)local_8,iVar5);
      local_18 = 1;
      break;
    case 0xcc:
      uStack_24 = uStack_24 & 0xffffff00;
      local_28 = *(undefined4 *)((int)local_8 + 0x36);
      pbVar10 = &DAT_664e2ff0;
      pbVar8 = (byte *)&local_28;
      do {
        bVar1 = *pbVar8;
        bVar13 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_6648f52c:
          iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_6648f531;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar13 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_6648f52c;
        pbVar8 = pbVar8 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_6648f531:
      if (iVar7 == 0) {
        local_10 = operator_new(8);
        puVar2 = *(undefined4 **)((int)local_8 + 0x3a);
        *local_10 = *puVar2;
        local_10[1] = puVar2[1];
        this = local_c;
        break;
      }
      goto LAB_6648f684;
    }
    pvVar4 = local_8;
    pvVar9 = this;
    if (local_8 != (void *)0x0) {
      local_20 = local_8;
      if (*(void **)((int)local_8 + 0x1e) != (void *)0x0) {
        operator_delete(*(void **)((int)local_8 + 0x1e));
      }
      if (*(void **)((int)pvVar4 + 0x26) != (void *)0x0) {
        operator_delete(*(void **)((int)pvVar4 + 0x26));
      }
      if (*(void **)((int)pvVar4 + 0x2a) != (void *)0x0) {
        operator_delete(*(void **)((int)pvVar4 + 0x2a));
      }
      if (*(void **)((int)pvVar4 + 0x2e) != (void *)0x0) {
        operator_delete(*(void **)((int)pvVar4 + 0x2e));
      }
      if (*(void **)((int)pvVar4 + 0x3a) != (void *)0x0) {
        operator_delete(*(void **)((int)pvVar4 + 0x3a));
      }
      local_14 = (undefined4 *)((int)pvVar4 + 0x3e);
      local_44[0] = 0;
      local_44[1] = 0;
      local_3c = (void *)0x0;
      local_38 = (int *)0x0;
      local_34 = 0;
      FUN_6648f710(local_80,local_14,-(uint)(*(int *)((int)pvVar4 + 0x46) != 0));
      piVar11 = local_80;
      piVar12 = local_44;
      for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
      while( true ) {
        pvVar9 = local_20;
        piVar11 = local_38;
        local_6c = 0;
        local_68 = 0;
        local_64 = local_14;
        local_60 = 0;
        local_5c = 0;
        if (local_44[0] == 0) break;
        piVar12 = local_38 + 4;
        iVar7 = local_38[4];
        while (iVar7 != 0) {
          pvVar9 = (void *)FUN_664ba9f0(piVar11);
          operator_delete(pvVar9);
          iVar7 = *piVar12;
        }
        if (piVar11 != (int *)0x0) {
          (**(code **)*piVar11)(1);
        }
        local_44[0] = local_44[1];
        if (local_44[1] != 0) {
          FUN_664bbeb0(local_3c,local_44 + 1,&local_34,(int *)&local_38);
        }
      }
      if (*(void **)((int)local_20 + 0x56) != (void *)0x0) {
        operator_delete(*(void **)((int)local_20 + 0x56));
      }
      thunk_FUN_664bbcb0(local_14);
      operator_delete(pvVar9);
      local_8 = (void *)0x0;
      pvVar9 = local_c;
    }
LAB_6648f684:
    iVar7 = FUN_664da7f0(local_58,(int *)&local_8);
    this = pvVar9;
    uVar3 = extraout_var_00;
    puVar2 = local_10;
    pvVar9 = local_c;
  }
  if (local_18 != 0) {
    if (puVar2 == (undefined4 *)0x0) goto LAB_6648f6e4;
    pvVar9 = (void *)FUN_6648dfd0(*(void **)((int)this + 0x68),
                                  CONCAT22(uVar3,*(undefined2 *)
                                                  ((int)*(void **)((int)this + 0x68) + 0x70)));
    if (pvVar9 == (void *)0x0) {
      local_1c = 0x80004005;
    }
    else {
      FUN_66495990(pvVar9,CONCAT22((short)((uint)puVar2[1] >> 0x10),*(undefined2 *)((int)puVar2 + 2)
                                  ),0,(uint)*(byte *)((int)puVar2 + 1),puVar2[1]);
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete(puVar2);
  }
LAB_6648f6e4:
  FUN_664da660(local_58);
  return local_1c;
}


