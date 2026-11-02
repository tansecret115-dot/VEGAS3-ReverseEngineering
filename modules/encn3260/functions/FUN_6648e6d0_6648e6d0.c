/* Module: encn3260.dll
   Function: FUN_6648e6d0
   Address: 6648e6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648e6d0(void *this,int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar8;
  undefined2 extraout_var_03;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  int *piVar12;
  byte local_40;
  byte local_3e;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  uint local_34;
  uint *local_30;
  short local_2c;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  byte *local_20;
  byte *local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar11 = 0;
  local_40 = 0;
  local_3e = 0;
  bStack_3c = 0;
  bStack_3b = 0;
  bStack_3a = 0;
  bStack_39 = 0;
  local_34 = 0;
  local_30 = (uint *)0x0;
  local_2c = 0;
  local_28 = 0;
  uStack_26 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  local_1c = (byte *)0x0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_8 = (**(code **)(*param_1 + 0x18))(param_1);
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x1c))(param_1);
  if ((pbVar3 != (byte *)0x0) && (local_8 != 0)) {
    bVar1 = *pbVar3;
    local_40 = bVar1 >> 6;
    local_3e = bVar1 >> 4 & 1;
    bVar2 = pbVar3[1];
    bStack_3c = bVar2 >> 7;
    bStack_3b = bVar2 & 0x7f;
    bStack_39 = pbVar3[2];
    bStack_3a = pbVar3[3];
    uVar11 = (uint)pbVar3[4] << 0x18 | (uint)pbVar3[5] << 0x10 | (uint)pbVar3[6] << 8 |
             (uint)pbVar3[7];
    local_34 = (uint)pbVar3[8] << 0x18 | (uint)pbVar3[9] << 0x10 | (uint)pbVar3[10] << 8 |
               (uint)pbVar3[0xb];
    pbVar9 = pbVar3 + 0xc;
    if ((bVar1 & 0xf) != 0) {
      local_10 = CONCAT12(bVar2,CONCAT11(bStack_3c,bVar1)) & 0xf;
      local_30 = operator_new(local_10 * 4);
      puVar4 = local_30;
      uVar7 = local_10;
      if (0 < (int)local_10) {
        do {
          *puVar4 = (uint)*pbVar9 << 0x18;
          *puVar4 = *puVar4 | (uint)pbVar9[1] << 0x10;
          *puVar4 = *puVar4 | (uint)pbVar9[2] << 8;
          *puVar4 = *puVar4 | (uint)pbVar9[3];
          pbVar9 = pbVar9 + 4;
          uVar7 = uVar7 - 1;
          puVar4 = puVar4 + 1;
        } while (uVar7 != 0);
      }
    }
    pbVar10 = pbVar9;
    if (local_3e == 1) {
      local_2c = CONCAT11(*pbVar9,pbVar9[1]);
      pbVar10 = pbVar9 + 4;
      if (local_2c == 2) {
        local_28 = CONCAT11(*pbVar10,pbVar9[5]);
        uStack_26 = CONCAT11(pbVar9[6],pbVar9[7]);
        pbVar10 = pbVar9 + 8;
      }
      else {
        local_10 = (uint)CONCAT11(pbVar9[2],pbVar9[3]);
        puVar4 = operator_new(local_10 * 4);
        uStack_24 = SUB42(puVar4,0);
        uStack_22 = (undefined2)((uint)puVar4 >> 0x10);
        uVar7 = local_10;
        if (0 < (int)local_10) {
          do {
            *puVar4 = (uint)*pbVar10 << 0x18;
            *puVar4 = *puVar4 | (uint)pbVar10[1] << 0x10;
            *puVar4 = *puVar4 | (uint)pbVar10[2] << 8;
            *puVar4 = *puVar4 | (uint)pbVar10[3];
            pbVar10 = pbVar10 + 4;
            uVar7 = uVar7 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    local_20 = pbVar3 + (local_8 - (int)pbVar10);
    pbVar9 = pbVar10 + (int)local_20;
    if ((uint)((int)pbVar9 - (int)pbVar3) <= local_8) goto LAB_6648e8e3;
  }
  pbVar9 = (byte *)0x0;
  pbVar10 = local_1c;
LAB_6648e8e3:
  local_1c = pbVar10;
  if (pbVar9 == (byte *)0x0) {
    if (local_30 != (uint *)0x0) {
      operator_delete(local_30);
    }
    if ((void *)CONCAT22(uStack_22,uStack_24) != (void *)0x0) {
      operator_delete((void *)CONCAT22(uStack_22,uStack_24));
    }
    return -0x7ffbfff7;
  }
  if (local_40 != 2) {
    if (local_30 != (uint *)0x0) {
      operator_delete(local_30);
    }
    if ((void *)CONCAT22(uStack_22,uStack_24) != (void *)0x0) {
      operator_delete((void *)CONCAT22(uStack_22,uStack_24));
    }
    return -0x7ffbfffb;
  }
  if (*(int *)((int)this + 0x72) != 0) {
    *(uint *)((int)this + 0x81) = uVar11;
    *(undefined4 *)((int)this + 0x72) = 0;
    FUN_6648f230(*(int *)((int)this + 0x91));
  }
  param_1 = (int *)(uVar11 - *(int *)((int)this + 0x81));
  if ((local_3e == 1) && (local_2c == 2)) {
    local_c = 1;
  }
  if (bStack_3b != 0x65) {
    param_1 = (int *)0x0;
  }
  piVar5 = operator_new(0x19);
  piVar12 = (int *)0x0;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    *(undefined2 *)(piVar5 + 4) = 0;
    *(undefined1 *)((int)piVar5 + 0x12) = 0;
    *(undefined2 *)((int)piVar5 + 0x13) = 0;
    *(undefined4 *)((int)piVar5 + 0x15) = 0;
    *piVar5 = (int)&PTR_FUN_664de370;
  }
  (**(code **)(*piVar5 + 4))(piVar5);
  puVar6 = operator_new(0x28);
  if (puVar6 != (undefined4 *)0x0) {
    piVar12 = (int *)FUN_664bad50(puVar6);
  }
  (**(code **)(*piVar12 + 4))(piVar12);
  (**(code **)(*piVar12 + 0x10))(piVar12,local_1c,local_20);
  if (local_c == 0) {
    if ((bStack_3c == 1) && (*(int *)((int)this + 0x7b) != 0)) {
      (**(code **)(*piVar5 + 0x2c))
                (piVar5,piVar12,param_1,
                 CONCAT22((short)((uint)*(int *)((int)this + 0x7b) >> 0x10),
                          *(undefined2 *)((int)this + 0x70)),1,
                 CONCAT22(extraout_var_03,*(undefined2 *)((int)this + 0x7f)));
      uVar8 = extraout_var_01;
    }
    else {
      (**(code **)(*piVar5 + 0x2c))
                (piVar5,piVar12,param_1,CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x70)),1,0
                );
      uVar8 = extraout_var_02;
    }
  }
  else {
    (**(code **)(*piVar5 + 0x2c))
              (piVar5,piVar12,param_1,CONCAT22(uStack_24,*(undefined2 *)((int)this + 0x70)),
               CONCAT22(uStack_26,local_28),CONCAT22(uStack_24,uStack_26));
    uVar8 = extraout_var_00;
  }
  if (*(int *)((int)this + 0x30) == 0) {
    local_c = FUN_6648d700(this,piVar5,CONCAT22(uVar8,*(undefined2 *)((int)this + 0x70)),
                           CONCAT11(bStack_39,bStack_3a),0,0);
  }
  else {
    local_c = (**(code **)(**(int **)((int)this + 0x14) + 0xc))
                        (*(int **)((int)this + 0x14),0,*(undefined4 *)((int)this + 0x20),piVar5);
  }
  (**(code **)(**(int **)((int)this + 0x10) + 0x18))(*(int **)((int)this + 0x10),&local_18);
  FUN_664d94f0(*(void **)((int)this + 0x8d),local_34,CONCAT11(bStack_39,bStack_3a),(int)param_1,
               local_14 / 1000 + local_18 * 1000);
  if ((*(int **)((int)this + 0x91))[0x1d] != 0) {
    (**(code **)(**(int **)((int)this + 0x91) + 0x78))();
    *(undefined4 *)(*(int *)((int)this + 0x91) + 0x74) = 0;
    FUN_6648f2b0(*(int *)((int)this + 0x91));
  }
  (**(code **)(*piVar12 + 8))(piVar12);
  (**(code **)(*piVar5 + 8))(piVar5);
  if (local_30 != (uint *)0x0) {
    operator_delete(local_30);
  }
  if ((void *)CONCAT22(uStack_22,uStack_24) != (void *)0x0) {
    operator_delete((void *)CONCAT22(uStack_22,uStack_24));
  }
  return local_c;
}


