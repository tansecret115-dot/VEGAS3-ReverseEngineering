/* Module: encn3260.dll
   Function: FUN_66486e70
   Address: 66486e70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66486e70(int *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  void *pvVar12;
  ushort uVar13;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  ushort *local_34;
  ushort *local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  uint local_10;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_1c = 32000;
  local_8 = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_2c = 0;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    local_20 = (int *)FUN_664ba900(puVar2);
  }
  local_3c = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 4))(param_1);
  iVar3 = (*(code *)**(undefined4 **)param_1[-0xb])
                    ((undefined4 *)param_1[-0xb],&DAT_664dc710,&local_28);
  if (iVar3 != 0) {
    local_c = -0x7ff8fff2;
    goto LAB_664872cd;
  }
  iVar3 = (*(code *)**(undefined4 **)param_1[-0xb])
                    ((undefined4 *)param_1[-0xb],&DAT_664dcb00,&local_24);
  if (iVar3 != 0) {
    local_c = -0x7ff8fff2;
    goto LAB_664872cd;
  }
  pvVar12 = operator_new(0x18);
  if (pvVar12 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_664db520(pvVar12,10);
  }
  *(undefined4 *)((int)param_1 + 0x112) = uVar4;
  pvVar12 = operator_new(0x18);
  if (pvVar12 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_664db520(pvVar12,10);
  }
  *(undefined4 *)((int)param_1 + 0x116) = uVar4;
  iVar3 = (**(code **)(*local_24 + 0xc))(local_24,s_UseUDPPort_664e2568,&local_8);
  if (iVar3 == 0) {
    pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    local_2c = atoi(pcVar5);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_2c == 0) {
    iVar3 = (**(code **)(*local_24 + 0xc))(local_24,s_MaxUDPPort_664e255c,&local_8);
    if (iVar3 == 0) {
      pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
      local_1c = atoi(pcVar5);
      iVar3 = 32000;
      if (0x1b39 < (ushort)local_1c) goto LAB_66486fbf;
    }
    else {
LAB_66486fbf:
      iVar3 = local_1c;
    }
    puVar6 = operator_new(4);
    *puVar6 = 0x1b3a;
    puVar6[1] = (short)iVar3;
    FUN_664baab0(local_20,puVar6);
  }
  else {
    iVar3 = (**(code **)(*local_24 + 0xc))(local_24,s_UDPPort_664e2554,&local_8);
    if (iVar3 == 0) {
      FUN_664d06e0(local_8,(int *)&local_20);
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  local_3c = *(int *)((int)param_1 + 0xca);
  local_38 = (int)param_1 + 0xc6;
  while (local_3c != 0) {
    local_2c = 0;
    if (local_3c == 0) {
      local_34 = (ushort *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_664bab80(local_3c);
      local_34 = (ushort *)*puVar2;
    }
    local_44 = local_20[1];
    local_40 = local_20;
    if (local_44 != 0) {
      puVar7 = (ushort *)0x0;
      if (local_44 == 0) goto LAB_6648706c;
      do {
        puVar2 = (undefined4 *)FUN_664bab80(local_44);
        puVar7 = (ushort *)*puVar2;
LAB_6648706c:
        uVar13 = puVar7[1];
        uVar1 = *puVar7;
        uVar8 = CONCAT22((short)((uint)puVar7 >> 0x10),uVar1);
        local_30 = puVar7;
        if (1 < (int)(((uint)uVar13 - (uint)uVar1) + 1)) {
          local_10 = uVar8;
          if (uVar1 <= uVar13) {
            local_1c = uVar8 + 1;
            do {
              if ((local_10 & 1) != 0) {
                local_10 = local_10 + 1;
                local_1c = local_1c + 1;
              }
              if ((int)(((uint)uVar13 - (local_10 & 0xffff)) + 1) < 2) break;
              iVar3 = (**(code **)(*local_28 + 0x10))(local_28,&local_14);
              if ((iVar3 != 0) ||
                 (iVar3 = (**(code **)(*local_28 + 0x10))(local_28,&local_18), iVar3 != 0)) {
                local_c = -0x7fffbffb;
                goto LAB_664872cd;
              }
              pvVar12 = operator_new(0x12);
              if (pvVar12 == (void *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                piVar9 = (int *)FUN_6648a900(pvVar12,param_1 + -0xc,(short)local_10);
              }
              pvVar12 = operator_new(0x12);
              if (pvVar12 == (void *)0x0) {
                piVar10 = (int *)0x0;
              }
              else {
                piVar10 = (int *)FUN_6648a900(pvVar12,param_1 + -0xc,(short)local_1c);
              }
              if ((piVar9 == (int *)0x0) || (piVar10 == (int *)0x0)) {
                local_c = -0x7ff8fff2;
                goto LAB_664872cd;
              }
              (**(code **)(*piVar9 + 4))(piVar9);
              (**(code **)(*piVar10 + 4))(piVar10);
              FUN_664baab0((void *)((int)param_1 + 0xee),piVar9);
              FUN_664baab0((void *)((int)param_1 + 0xee),piVar10);
              iVar11 = (**(code **)(*local_14 + 0xc))(local_14,0,local_10,piVar9);
              iVar3 = local_1c;
              if ((((iVar11 == 0) &&
                   (iVar11 = (**(code **)(*local_18 + 0xc))(local_18,0,local_1c,piVar10),
                   iVar11 == 0)) &&
                  (local_c = (**(code **)(*local_14 + 0x10))(local_14,0,local_10), local_c == 0)) &&
                 (iVar3 = (**(code **)(*local_18 + 0x10))(local_18,0,iVar3), iVar3 == 0)) {
                local_2c = 1;
                break;
              }
              if (local_14 != (int *)0x0) {
                (**(code **)(*local_14 + 8))(local_14);
                local_14 = (int *)0x0;
              }
              if (local_18 != (int *)0x0) {
                (**(code **)(*local_18 + 8))(local_18);
                local_18 = (int *)0x0;
              }
              local_10 = local_10 + 2;
              uVar13 = local_30[1];
              local_1c = local_1c + 2;
            } while ((ushort)local_10 <= uVar13);
          }
          if (local_2c != 0) goto LAB_66487248;
        }
        FUN_664bab40(&local_44);
      } while (local_44 != 0);
    }
    if (local_2c == 0) {
      local_c = -0x7ffbff30;
      break;
    }
LAB_66487248:
    puVar7 = local_34;
    puVar2 = FUN_664bbe00(*(void **)((int)param_1 + 0x112),(uint)*local_34);
    *puVar2 = local_14;
    puVar2 = FUN_664bbe00(*(void **)((int)param_1 + 0x116),(uint)*puVar7);
    *puVar2 = local_18;
    (**(code **)(*local_14 + 0x14))(local_14,0x1000);
    (**(code **)(*local_18 + 0x14))(local_18,0x1000);
    FUN_664bab40(&local_3c);
  }
LAB_664872cd:
  if (local_c != 0) {
    puVar2 = *(undefined4 **)((int)param_1 + 0x112);
    if (puVar2 != (undefined4 *)0x0) {
      thunk_FUN_664bbcb0(puVar2);
      operator_delete(puVar2);
      *(undefined4 *)((int)param_1 + 0x112) = 0;
    }
    puVar2 = *(undefined4 **)((int)param_1 + 0x116);
    if (puVar2 != (undefined4 *)0x0) {
      thunk_FUN_664bbcb0(puVar2);
      operator_delete(puVar2);
      *(undefined4 *)((int)param_1 + 0x116) = 0;
    }
  }
  while( true ) {
    if (local_20 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_20[4];
    }
    if (iVar3 == 0) break;
    pvVar12 = (void *)FUN_664ba9f0(local_20);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  if (local_20 != (int *)0x0) {
    (**(code **)*local_20)(1);
    local_20 = (int *)0x0;
  }
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))(local_24);
    local_24 = (int *)0x0;
  }
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
    local_28 = (int *)0x0;
  }
  (**(code **)(*param_1 + 8))(param_1);
  return local_c;
}


