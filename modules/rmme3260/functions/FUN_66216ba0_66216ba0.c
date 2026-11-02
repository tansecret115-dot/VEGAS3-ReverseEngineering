/* Module: rmme3260.dll
   Function: FUN_66216ba0
   Address: 66216ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66216ba0(int *param_1)

{
  byte bVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 in_stack_ffffff7c;
  undefined4 in_stack_ffffff80;
  undefined4 in_stack_ffffff84;
  undefined4 *in_stack_ffffff88;
  uint in_stack_ffffff8c;
  undefined4 in_stack_ffffff90;
  undefined4 *in_stack_ffffff94;
  int *in_stack_ffffff98;
  uint uVar12;
  int *piVar13;
  undefined2 uVar14;
  int *in_stack_ffffff9c;
  int **ppiVar15;
  int *piVar16;
  undefined4 local_50;
  undefined4 local_4c;
  short local_48;
  ushort local_46;
  undefined4 uStack_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort local_3a;
  undefined4 uStack_38;
  ushort local_34;
  undefined4 uStack_32;
  undefined4 local_2e;
  undefined2 local_28;
  short local_26;
  undefined2 local_24;
  undefined4 local_22;
  ushort local_1e;
  undefined1 local_1c;
  undefined4 local_18;
  uint local_14;
  ushort local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  if (param_1[0xcd] == 0) {
    param_1[0xcd] = 1;
  }
  uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
  uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
  uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
  switch(param_1[0xcd]) {
  case 1:
    local_c = (int *)0x0;
    if (param_1[0x3f] == 0) {
      local_8 = 0x40042;
      uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
      uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
      uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
      uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
      break;
    }
    ppiVar15 = &local_c;
    uVar12 = 0x66216bff;
    pbVar3 = (byte *)FUN_66209a30(param_1,ppiVar15);
    puVar2 = *(uint **)((int)param_1 + 0x56);
    if ((pbVar3 == (byte *)0x0) || (local_c == (int *)0x0)) {
      pbVar4 = (byte *)0x0;
    }
    else {
      bVar1 = *pbVar3;
      *puVar2 = (uint)bVar1 << 0x18;
      *puVar2 = (uint)pbVar3[1] << 0x10 | (uint)bVar1 << 0x18;
      uVar9 = *puVar2 | (uint)pbVar3[2] << 8;
      *puVar2 = uVar9;
      *puVar2 = uVar9 | pbVar3[3];
      puVar2[1] = (uint)pbVar3[4] << 0x18;
      uVar9 = puVar2[1] | (uint)pbVar3[5] << 0x10;
      puVar2[1] = uVar9;
      uVar9 = uVar9 | (uint)pbVar3[6] << 8;
      puVar2[1] = uVar9;
      puVar2[1] = uVar9 | pbVar3[7];
      *(ushort *)(puVar2 + 2) = (ushort)pbVar3[8] << 8;
      *(ushort *)(puVar2 + 2) = (ushort)puVar2[2] | (ushort)pbVar3[9];
      pbVar4 = pbVar3 + 10;
      if ((short)puVar2[2] == 0) {
        *(uint *)((int)puVar2 + 10) = (uint)*pbVar4 << 0x18;
        uVar9 = *(uint *)((int)puVar2 + 10) | (uint)pbVar3[0xb] << 0x10;
        *(uint *)((int)puVar2 + 10) = uVar9;
        uVar9 = uVar9 | (uint)pbVar3[0xc] << 8;
        *(uint *)((int)puVar2 + 10) = uVar9;
        *(uint *)((int)puVar2 + 10) = uVar9 | pbVar3[0xd];
        *(uint *)((int)puVar2 + 0xe) = (uint)pbVar3[0xe] << 0x18;
        uVar9 = *(uint *)((int)puVar2 + 0xe) | (uint)pbVar3[0xf] << 0x10;
        *(uint *)((int)puVar2 + 0xe) = uVar9;
        uVar9 = uVar9 | (uint)pbVar3[0x10] << 8;
        *(uint *)((int)puVar2 + 0xe) = uVar9;
        *(uint *)((int)puVar2 + 0xe) = uVar9 | pbVar3[0x11];
        *(uint *)((int)puVar2 + 0x12) = (uint)pbVar3[0x12] << 0x18;
        uVar9 = *(uint *)((int)puVar2 + 0x12) | (uint)pbVar3[0x13] << 0x10;
        *(uint *)((int)puVar2 + 0x12) = uVar9;
        uVar9 = uVar9 | (uint)pbVar3[0x14] << 8;
        *(uint *)((int)puVar2 + 0x12) = uVar9;
        *(uint *)((int)puVar2 + 0x12) = uVar9 | pbVar3[0x15];
        *(uint *)((int)puVar2 + 0x16) = (uint)pbVar3[0x16] << 0x18;
        uVar9 = *(uint *)((int)puVar2 + 0x16) | (uint)pbVar3[0x17] << 0x10;
        *(uint *)((int)puVar2 + 0x16) = uVar9;
        uVar9 = uVar9 | (uint)pbVar3[0x18] << 8;
        *(uint *)((int)puVar2 + 0x16) = uVar9;
        *(uint *)((int)puVar2 + 0x16) = uVar9 | pbVar3[0x19];
        *(uint *)((int)puVar2 + 0x1a) = (uint)pbVar3[0x1a] << 0x18;
        uVar9 = *(uint *)((int)puVar2 + 0x1a) | (uint)pbVar3[0x1b] << 0x10;
        *(uint *)((int)puVar2 + 0x1a) = uVar9;
        uVar9 = uVar9 | (uint)pbVar3[0x1c] << 8;
        *(uint *)((int)puVar2 + 0x1a) = uVar9;
        *(uint *)((int)puVar2 + 0x1a) = uVar9 | pbVar3[0x1d];
        *(uint *)((int)puVar2 + 0x1e) = (uint)pbVar3[0x1e] << 0x18;
        uVar9 = *(uint *)((int)puVar2 + 0x1e) | (uint)pbVar3[0x1f] << 0x10;
        *(uint *)((int)puVar2 + 0x1e) = uVar9;
        uVar9 = uVar9 | (uint)pbVar3[0x20] << 8;
        *(uint *)((int)puVar2 + 0x1e) = uVar9;
        *(uint *)((int)puVar2 + 0x1e) = uVar9 | pbVar3[0x21];
        *(uint *)((int)puVar2 + 0x22) = (uint)pbVar3[0x22] << 0x18;
        uVar9 = *(uint *)((int)puVar2 + 0x22) | (uint)pbVar3[0x23] << 0x10;
        *(uint *)((int)puVar2 + 0x22) = uVar9;
        uVar9 = uVar9 | (uint)pbVar3[0x24] << 8;
        *(uint *)((int)puVar2 + 0x22) = uVar9;
        *(uint *)((int)puVar2 + 0x22) = uVar9 | pbVar3[0x25];
        *(uint *)((int)puVar2 + 0x26) = (uint)pbVar3[0x26] << 0x18;
        uVar9 = *(uint *)((int)puVar2 + 0x26) | (uint)pbVar3[0x27] << 0x10;
        *(uint *)((int)puVar2 + 0x26) = uVar9;
        uVar9 = uVar9 | (uint)pbVar3[0x28] << 8;
        *(uint *)((int)puVar2 + 0x26) = uVar9;
        *(uint *)((int)puVar2 + 0x26) = uVar9 | pbVar3[0x29];
        *(uint *)((int)puVar2 + 0x2a) = (uint)pbVar3[0x2a] << 0x18;
        uVar9 = *(uint *)((int)puVar2 + 0x2a) | (uint)pbVar3[0x2b] << 0x10;
        *(uint *)((int)puVar2 + 0x2a) = uVar9;
        uVar9 = uVar9 | (uint)pbVar3[0x2c] << 8;
        *(uint *)((int)puVar2 + 0x2a) = uVar9;
        *(uint *)((int)puVar2 + 0x2a) = uVar9 | pbVar3[0x2d];
        *(ushort *)((int)puVar2 + 0x2e) = (ushort)pbVar3[0x2e] << 8;
        *(ushort *)((int)puVar2 + 0x2e) = *(ushort *)((int)puVar2 + 0x2e) | (ushort)pbVar3[0x2f];
        *(ushort *)(puVar2 + 0xc) = (ushort)pbVar3[0x30] << 8;
        *(ushort *)(puVar2 + 0xc) = (ushort)puVar2[0xc] | (ushort)pbVar3[0x31];
        pbVar4 = pbVar3 + 0x32;
      }
    }
    if (pbVar4 == (byte *)0x0) {
      local_8 = -1;
      break;
    }
    if (*(int *)((int)param_1 + 0x2fa) == 0) {
      local_8 = FUN_662687f0(*(void **)(param_1[0x42] + 8),0x434f4e54,0);
      break;
    }
    if (param_1 == (int *)0xfffffd02) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10 = (undefined4 *)((int)param_1 + 0x306);
    }
    puVar11 = (undefined4 *)&stack0xffffff7c;
    for (iVar6 = 8; uVar14 = SUB42(ppiVar15,0), iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar10;
    FUN_66225880(param_1 + 0x45,in_stack_ffffff7c,in_stack_ffffff80,in_stack_ffffff84,
                 in_stack_ffffff88,in_stack_ffffff8c,in_stack_ffffff90,in_stack_ffffff94,uVar12,
                 uVar14);
    goto LAB_6621708f;
  case 2:
    local_8 = FUN_662690e0(*(void **)(param_1[0x42] + 8),*(undefined4 *)((int)param_1 + 0x372));
    uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
    uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
    uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
    break;
  case 3:
    piVar13 = *(int **)((int)param_1 + 0x376);
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_46 = 0;
    uStack_44._0_2_ = 0;
    uStack_44._2_2_ = 0;
    local_40 = 0;
    uStack_3e._0_2_ = 0;
    uStack_3e._2_2_ = 0;
    local_3a = 0;
    uStack_38._0_2_ = 0;
    uStack_38._2_2_ = 0;
    local_34 = 0;
    uStack_32._0_2_ = 0;
    uStack_32._2_2_ = 0;
    local_2e = 0;
    local_c = piVar13;
    if (piVar13 != (int *)0x0) {
      in_stack_ffffff98 = (int *)0x66216f2f;
      in_stack_ffffff9c = piVar13;
      (**(code **)(*piVar13 + 4))();
    }
    piVar16 = *(int **)((int)param_1 + 0x376);
    if (piVar16 != (int *)0x0) {
      in_stack_ffffff98 = (int *)0x66216f3f;
      (**(code **)(*piVar16 + 8))();
      *(undefined4 *)((int)param_1 + 0x376) = 0;
      in_stack_ffffff9c = piVar16;
    }
    if (piVar13 == (int *)0x0) {
      local_50 = 0x434f4e54;
      local_48 = 0;
      uStack_44 = (undefined1 *)0x0;
      local_46 = 0;
      uStack_3e = (undefined1 *)0x0;
      local_40 = 0;
      uStack_38 = (undefined1 *)0x0;
      local_3a = 0;
      uStack_32 = (undefined1 *)0x0;
      local_34 = 0;
    }
    else {
      in_stack_ffffff9c = piVar13;
      iVar6 = (**(code **)(*piVar13 + 0x18))();
      in_stack_ffffff94 = (undefined4 *)0x66216f5b;
      puVar5 = (undefined1 *)(**(code **)(*piVar13 + 0x1c))();
      in_stack_ffffff98 = piVar13;
      uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
      uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
      uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
      uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
      if (iVar6 != 0) {
        local_50 = 0x434f4e54;
        local_48 = CONCAT11(*puVar5,puVar5[1]);
        local_4c = 0x12;
        uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
        uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
        uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
        uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
        if (local_48 == 0) {
          local_46 = CONCAT11(puVar5[2],puVar5[3]);
          puVar7 = puVar5 + 4;
          uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
          uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
          uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
          uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
          if ((int)(puVar7 + ((uint)local_46 - (int)puVar5)) <= iVar6) {
            puVar8 = puVar7 + local_46;
            local_40 = CONCAT11(*puVar8,puVar8[1]);
            puVar8 = puVar8 + 2;
            uStack_44 = puVar7;
            uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
            uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
            uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
            if ((int)(puVar8 + ((uint)local_40 - (int)puVar5)) <= iVar6) {
              puVar7 = puVar8 + local_40;
              local_3a = CONCAT11(*puVar7,puVar7[1]);
              puVar7 = puVar7 + 2;
              uStack_3e = puVar8;
              uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
              uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
              if ((int)(puVar7 + ((uint)local_3a - (int)puVar5)) <= iVar6) {
                puVar8 = puVar7 + local_3a;
                local_34 = CONCAT11(*puVar8,puVar8[1]);
                uStack_38 = puVar7;
                uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
                if ((int)(puVar8 + 2 + ((uint)local_34 - (int)puVar5)) <= iVar6) {
                  uStack_32 = puVar8 + 2;
                }
              }
            }
          }
        }
      }
    }
    puVar10 = (undefined4 *)(-(uint)(&stack0x00000000 != (undefined1 *)0x54) & (uint)&local_50);
    puVar11 = (undefined4 *)&stack0xffffff7c;
    for (iVar6 = 8; uVar14 = SUB42(in_stack_ffffff9c,0), iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar10;
    FUN_66225880(param_1 + 0x45,in_stack_ffffff7c,in_stack_ffffff80,in_stack_ffffff84,
                 in_stack_ffffff88,in_stack_ffffff8c,in_stack_ffffff90,in_stack_ffffff94,
                 (uint)in_stack_ffffff98,uVar14);
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))();
    }
LAB_6621708f:
    param_1[0xcd] = 4;
    FUN_66216ba0(param_1);
    break;
  case 4:
    piVar13 = param_1 + 0x45;
    FUN_66225a10(piVar13,*(undefined2 *)(*(int *)((int)param_1 + 0x56) + 0x30));
    if (*(int **)((int)param_1 + 0x3ee) != (int *)0x0) {
      local_8 = FUN_6622a5a0(*(int **)((int)param_1 + 0x3ee));
    }
    uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
    uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
    uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
    if (local_8 == 0) {
      local_8 = FUN_66226250(piVar13);
      uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
      uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
      uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
      uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
      if (local_8 == 0) {
        param_1[0xce] = param_1[0xce] + 100;
        local_8 = FUN_6622a940(piVar13,(int *)param_1[0xca],(int)param_1);
        uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
        uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
        uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
        uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
      }
    }
    break;
  case 5:
    FUN_662133c0(param_1);
    uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
    uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
    uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
    break;
  case 6:
    if (param_1[0xd0] != 0) {
      param_1[0xd0] = 0;
      *(undefined2 *)(param_1 + 0xd1) = *(undefined2 *)((int)param_1 + 0x34e);
    }
    if ((((*(int *)((int)param_1 + 0x346) == 0) || (param_1[0xd0] != 0)) ||
        (*(ushort *)((int)param_1 + 0x34e) == *(ushort *)(param_1 + 0xd1))) ||
       (iVar6 = FUN_66213370(param_1,(uint)*(ushort *)((int)param_1 + 0x34e)), iVar6 != 0)) {
      param_1[0xcd] = 7;
      FUN_66216ba0(param_1);
      uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
      uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
      uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
      uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
    }
    else {
      *(undefined2 *)(param_1 + 0xd1) = *(undefined2 *)((int)param_1 + 0x34e);
      local_8 = FUN_6622b4b0((int)(param_1 + 0x45));
      uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
      uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
      uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
      uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
    }
    break;
  case 7:
    FUN_66208c30(&local_18);
    piVar13 = *(int **)((int)param_1 + 0x346);
    local_18 = *(undefined4 *)((int)param_1 + 0x34a);
    local_14 = *(uint *)((int)param_1 + 0x34e);
    local_10 = *(ushort *)((int)param_1 + 0x352);
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))();
    }
    if (*(int **)((int)param_1 + 0x346) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0x346) + 8))();
      *(undefined4 *)((int)param_1 + 0x346) = 0;
    }
    if (piVar13 == (int *)0x0) {
      param_1[0xcd] = 8;
      FUN_66216ba0(param_1);
      uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
      uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
      uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
      uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
    }
    else {
      iVar6 = FUN_66213370(param_1,local_14 & 0xffff);
      if (iVar6 == 0) {
        local_28 = 1;
        local_26 = (**(code **)(*piVar13 + 0x18))();
        local_26 = local_26 + 0xd;
        local_24 = (undefined2)local_14;
        local_22 = local_18;
        local_1c = 0;
        local_1e = (ushort)((local_10 & 3) == 0);
        iVar6 = (**(code **)(*piVar13 + 0x18))();
        param_1[0xce] = param_1[0xce] + iVar6;
        local_8 = FUN_6622b4f0(param_1 + 0x45,(undefined4 *)&local_28,piVar13);
        (**(code **)(*piVar13 + 8))();
        uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
        uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
        uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
        uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
      }
      else {
        iVar6 = (**(code **)(*piVar13 + 0x18))();
        param_1[0xce] = param_1[0xce] + iVar6;
        local_8 = FUN_6622bd90(param_1 + 0x45,&local_18,piVar13);
        (**(code **)(*piVar13 + 8))();
        uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
        uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
        uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
        uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
      }
    }
    break;
  case 8:
    local_8 = FUN_6622c410(param_1 + 0x45,param_1[0xcf] - param_1[0xce]);
    uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
    uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
    uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
    break;
  case 9:
    param_1[0xcd] = 0;
    (**(code **)(*(int *)param_1[0xcb] + 0x1c))();
    uStack_44 = (undefined1 *)CONCAT22(uStack_44._2_2_,(undefined2)uStack_44);
    uStack_3e = (undefined1 *)CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    uStack_38 = (undefined1 *)CONCAT22(uStack_38._2_2_,(undefined2)uStack_38);
    uStack_32 = (undefined1 *)CONCAT22(uStack_32._2_2_,(undefined2)uStack_32);
  }
  if (local_8 < 0) {
    (**(code **)(*(int *)param_1[0xcb] + 0x1c))();
  }
  return 0;
}


