/* Module: encn3260.dll
   Function: FUN_66491a60
   Address: 66491a60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_66491a60(void *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  int local_64;
  int *local_60;
  int local_50;
  int local_4c;
  undefined4 local_48 [3];
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  char *local_20;
  void *local_1c;
  undefined4 local_18;
  int *local_14;
  int local_10;
  void *local_c;
  uint local_8;
  
  local_14 = (int *)0x0;
  if (*(int *)((int)param_1 + 0x2c) == 0) {
    return 0x80040009;
  }
  local_1c = param_1;
  iVar3 = FUN_6648d1b0(*(int *)((int)param_1 + 0x2c));
  while (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x26) = 1;
    iVar3 = FUN_6648d220(*(int *)((int)param_1 + 0x2c));
  }
  FUN_664ba900(&local_64);
  while( true ) {
    FUN_664cf1f0(local_48);
    local_20 = (char *)0x0;
    local_38 = 0;
    local_8 = 0;
    local_18 = 0;
    iVar3 = FUN_6648d1b0(*(int *)((int)param_1 + 0x2c));
    uVar8 = 0;
    uVar11 = local_8;
    while (local_8 = uVar11, iVar3 != 0) {
      if (*(int *)(iVar3 + 0x26) == 0) {
        iVar3 = FUN_6648d220(*(int *)((int)param_1 + 0x2c));
        uVar11 = local_8;
      }
      else {
        FUN_664c0250(local_48);
        local_34 = 0;
        local_2c = 0;
        local_30 = 0;
        local_28 = 0;
        local_24 = 0;
        *(undefined4 *)(iVar3 + 0x26) = 0;
        local_3c = FUN_66495660(*(void **)(iVar3 + 0x16),(undefined2 *)&local_2c,local_48,
                                (undefined2 *)&local_30,&local_28,&local_34,&local_24);
        if (local_3c == 0) {
          if (local_24 != 0) {
            local_38 = 1;
            *(undefined4 *)(iVar3 + 0x26) = 1;
          }
          local_c = (void *)0x0;
          uVar11 = FUN_664c02d0(local_48,(int *)&local_c);
          if (local_28 != 0) {
            local_3c = uVar11 + 7;
            local_20 = (char *)0x1;
            puVar4 = operator_new(local_3c);
            uVar1 = *(undefined2 *)(iVar3 + 0x10);
            *puVar4 = (char)((ushort)uVar1 >> 8);
            puVar4[1] = (char)uVar1;
            local_10._0_1_ = (undefined1)local_2c;
            puVar4[2] = (char)((uint)local_2c >> 8);
            puVar4[3] = (undefined1)local_10;
            local_10 = local_30;
            iVar3 = local_10;
            local_10._0_1_ = (undefined1)local_30;
            puVar4[4] = (char)((uint)local_30 >> 8);
            puVar4[5] = (undefined1)local_10;
            puVar4[6] = (char)uVar11;
            if (local_34 != 0) {
              local_18 = 1;
            }
            uVar10 = 0;
            if (0 < (int)uVar11) {
              uVar9 = 0;
              puVar5 = puVar4 + 7;
              do {
                uVar10 = uVar10 + 1;
                *puVar5 = *(undefined1 *)((int)local_c + uVar9);
                uVar9 = uVar10 & 0xffff;
                puVar5 = puVar5 + 1;
              } while ((int)uVar9 < (int)uVar11);
            }
            local_10 = iVar3;
            puVar6 = operator_new(8);
            uVar11 = local_3c;
            *puVar6 = puVar4;
            puVar6[1] = local_3c;
            FUN_664baab0(&local_64,puVar6);
            local_8 = local_8 + uVar11;
            operator_delete(local_c);
          }
          iVar3 = FUN_6648d220(*(int *)((int)local_1c + 0x2c));
          uVar8 = local_18;
          param_1 = local_1c;
          uVar11 = local_8;
        }
        else {
          if (local_3c != 0x40042) {
            FUN_664c0180(local_48);
            FUN_664ba950(&local_64);
            return local_3c;
          }
          iVar3 = FUN_6648d220(*(int *)((int)param_1 + 0x2c));
          uVar11 = local_8;
        }
      }
    }
    if (local_20 != (char *)0x0) {
      local_20 = operator_new(uVar11);
      local_14 = local_60;
      local_10 = 0;
      if (local_60 != (int *)0x0) {
        do {
          puVar6 = (undefined4 *)FUN_664bab80((int)local_14);
          puVar6 = (undefined4 *)*puVar6;
          uVar11 = puVar6[1];
          pcVar12 = (char *)*puVar6;
          pcVar13 = local_20 + local_10;
          for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar13 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          }
          local_10 = local_10 + puVar6[1];
          operator_delete((void *)*puVar6);
          operator_delete(puVar6);
          local_14 = (int *)FUN_664bab90(&local_64,local_14);
        } while (local_14 != (int *)0x0);
        local_14 = (int *)0x0;
        uVar8 = local_18;
        uVar11 = local_8;
      }
      pcVar7 = operator_new(uVar11 + 5);
      param_1 = local_1c;
      *pcVar7 = ((byte)uVar8 & 1) << 6;
      pcVar7[1] = -1;
      pcVar7[2] = '\x02';
      pcVar12 = local_20;
      pcVar13 = pcVar7 + 3;
      for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_14 = (int *)FUN_66492030(local_1c,pcVar7,pcVar7 + 3 + (local_8 - (int)pcVar7));
      operator_delete(local_20);
    }
    if (local_38 == 0) break;
    FUN_664c0180(local_48);
  }
  if (*(int *)((int)param_1 + 0x9a) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0x10) + 0x14))
              (*(int **)((int)param_1 + 0x10),*(undefined4 *)((int)param_1 + 0x8e));
  }
  (**(code **)(**(int **)((int)param_1 + 0x10) + 0x18))(*(int **)((int)param_1 + 0x10),&local_50);
  if (local_4c < 1000000) {
    local_3c = local_4c;
  }
  else {
    local_50 = local_4c / 1000000 + local_50;
    local_3c = local_4c % 1000000;
  }
  piVar2 = *(int **)((int)param_1 + 0x8a);
  iVar3 = 0;
  *piVar2 = local_50;
  piVar2[1] = local_3c;
  local_4c = *(int *)((int)param_1 + 0x82) * 1000;
  if (999999 < local_4c) {
    iVar3 = local_4c / 1000000;
    local_4c = local_4c % 1000000;
  }
  local_50 = local_50 + iVar3;
  for (local_4c = local_3c + local_4c; 999999 < local_4c; local_4c = local_4c + -1000000) {
    local_50 = local_50 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x9a) = 1;
  uVar8 = (**(code **)(**(int **)((int)param_1 + 0x10) + 0x10))
                    (*(int **)((int)param_1 + 0x10),*(undefined4 *)((int)param_1 + 0x92),local_50,
                     local_4c);
  *(undefined4 *)((int)param_1 + 0x8e) = uVar8;
  FUN_664c0180(local_48);
  FUN_664ba950(&local_64);
  return (uint)local_14;
}


