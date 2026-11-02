/* Module: rv203260.dll
   Function: FUN_638a60f0
   Address: 638a60f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638a60f0(void *this,int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  FARPROC pFVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint local_b0;
  uint local_ac;
  int local_a4 [15];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  int local_4c;
  uint *local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 *local_3c;
  short local_38;
  ushort local_36;
  ushort uStack_34;
  undefined2 local_32;
  undefined2 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  uVar9 = 0;
  pvVar3 = operator_new(0x18);
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_638af160(pvVar3,s_drv23260_dll_638b461c,2);
  }
  *(undefined4 **)((int)this + 0x20) = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  if (puVar4[1] == 0) {
    pFVar5 = FUN_638af3b0(puVar4,s_RV20toYUV420Init_638b4608);
    *(FARPROC *)((int)this + 0x76) = pFVar5;
    pFVar5 = FUN_638af3b0(*(void **)((int)this + 0x20),s_RV20toYUV420Free_638b45f4);
    *(FARPROC *)((int)this + 0x7a) = pFVar5;
    pFVar5 = FUN_638af3b0(*(void **)((int)this + 0x20),s_RV20toYUV420Transform_638b45dc);
    *(FARPROC *)((int)this + 0x72) = pFVar5;
    pFVar5 = FUN_638af3b0(*(void **)((int)this + 0x20),s_RV20toYUV420CustomMessage_638b45c0);
    *(FARPROC *)((int)this + 0x7e) = pFVar5;
    pFVar5 = FUN_638af3b0(*(void **)((int)this + 0x20),s_RV20toYUV420HiveMessage_638b45a8);
    *(FARPROC *)((int)this + 0x82) = pFVar5;
    pFVar5 = FUN_638af3b0(*(void **)((int)this + 0x20),s_RV20toYUV420_RN_FRU_Init_638b458c);
    *(FARPROC *)((int)this + 0x86) = pFVar5;
    pFVar5 = FUN_638af3b0(*(void **)((int)this + 0x20),s_RV20toYUV420_RN_FRU_Setup_638b4570);
    *(FARPROC *)((int)this + 0x8a) = pFVar5;
    pFVar5 = FUN_638af3b0(*(void **)((int)this + 0x20),s_RV20toYUV420_RN_FRU_GetFrame_638b4550);
    *(FARPROC *)((int)this + 0x8e) = pFVar5;
    pFVar5 = FUN_638af3b0(*(void **)((int)this + 0x20),s_RV20toYUV420_RN_FRU_Free_638b4534);
    *(FARPROC *)((int)this + 0x92) = pFVar5;
  }
  else {
    local_8 = 0x6e;
    uVar9 = 0x6e;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if (uVar9 != 0) goto LAB_638a688f;
  puVar4 = (undefined4 *)*param_1;
  puVar11 = (undefined4 *)param_1[1];
  *(undefined4 *)((int)this + 0x32) = *puVar4;
  *(undefined4 *)((int)this + 0x36) = puVar4[1];
  *(undefined4 *)((int)this + 0x3a) = puVar4[2];
  *(undefined2 *)((int)this + 0x3e) = *(undefined2 *)(puVar4 + 3);
  *(undefined2 *)((int)this + 0x40) = *(undefined2 *)((int)puVar4 + 0xe);
  *(undefined2 *)((int)this + 0x42) = *(undefined2 *)(puVar4 + 4);
  *(undefined2 *)((int)this + 0x44) = *(undefined2 *)((int)puVar4 + 0x12);
  *(undefined2 *)((int)this + 0x46) = *(undefined2 *)(puVar4 + 5);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)puVar4 + 0x16);
  iVar6 = *param_1;
  local_3c = puVar11;
  memmove(&local_c,(void *)(iVar6 + 0x1a),4);
  memmove((void *)((int)this + 0x2e),(void *)(iVar6 + 0x1e),4);
  pvVar3 = (void *)(iVar6 + 0x22);
  local_c = FUN_638af590(local_c);
  uVar9 = FUN_638af590(*(uint *)((int)this + 0x2e));
  *(uint *)((int)this + 0x2e) = uVar9;
  uVar9 = uVar9 & 0xff;
  if (2 < uVar9) {
    return -0x7fffbffb;
  }
  if (uVar9 == 2) {
    uVar9 = local_c >> 0x10 & 7;
    *(uint *)((int)this + 0xee) = uVar9;
    local_14 = 0;
    if (uVar9 != 0) {
      piVar10 = (int *)((int)this + 0x112);
      local_10 = local_a4;
      do {
        memmove(&local_8,pvVar3,1);
        iVar6 = (local_8 & 0xff) << 2;
        piVar10[-8] = iVar6;
        local_10[-1] = iVar6;
        memmove(&local_8,(void *)((int)pvVar3 + 1),1);
        piVar7 = local_10 + 2;
        iVar6 = (local_8 & 0xff) << 2;
        *local_10 = iVar6;
        *piVar10 = iVar6;
        pvVar3 = (void *)((int)pvVar3 + 2);
        local_14 = local_14 + 1;
        piVar10 = piVar10 + 1;
        puVar11 = local_3c;
        local_10 = piVar7;
      } while (local_14 < *(uint *)((int)this + 0xee));
    }
  }
  else if (uVar9 == 0) {
    local_c = 0x838;
  }
  *(int *)((int)this + 0x32) = *(int *)((int)this + 0x32) + *(int *)((int)this + 0xee) * -2 + -8;
  *puVar11 = 0x1a;
  *(undefined2 *)(puVar11 + 3) = *(undefined2 *)((int)this + 0x3e);
  *(undefined2 *)((int)puVar11 + 0xe) = *(undefined2 *)((int)this + 0x40);
  *(undefined2 *)((int)puVar11 + 0x12) = 0;
  *(undefined2 *)((int)puVar11 + 0x16) = 0;
  *(undefined2 *)(puVar11 + 5) = 0;
  *(undefined2 *)(puVar11 + 6) = 0;
  *(undefined2 *)(puVar11 + 4) = 0xc;
  puVar4 = (undefined4 *)((int)this + 0x58);
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar11;
  *(int *)((int)this + 0x14) = param_1[2];
  uVar9 = FUN_638af110();
  *(uint *)((int)this + 0x1c2) = uVar9;
  uStack_34 = *(ushort *)((int)this + 0x40);
  *(uint *)((int)this + 0x24) =
       (((uint)*(ushort *)((int)this + 0x6e) + (uint)*(ushort *)((int)this + 0x6a) +
        (uint)*(ushort *)((int)this + 100)) * (uint)*(ushort *)((int)this + 0x68) + 0x1f >> 3 &
       0x1ffffffc) *
       ((uint)*(ushort *)((int)this + 0x70) + (uint)*(ushort *)((int)this + 0x6c) +
       (uint)*(ushort *)((int)this + 0x66));
  local_36 = *(ushort *)((int)this + 0x3e);
  local_24 = *(undefined4 *)((int)this + 0x2e);
  local_30 = *(undefined2 *)((int)this + 0x46);
  local_38 = (*(int *)((int)this + 0x72) != 0) + 10;
  local_32 = *(undefined2 *)((int)this + 0x44);
  *(undefined4 *)((int)this + 0x4c) = 8;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_28 = 1;
  local_2c = local_c;
  *(uint *)((int)this + 0x176) = local_c >> 4 & 1;
  *(uint *)((int)this + 0x186) = local_c >> 0xc & 1;
  *(uint *)((int)this + 0x132) = local_c >> 0x14 & 1;
  *(uint *)((int)this + 0x17e) = local_c >> 0x13 & 1;
  FUN_638a7f90(this,&local_38);
  local_44 = 0;
  local_8 = FUN_638a8020(this,&local_44);
  if (local_8 != 0) {
    return local_8;
  }
  if ((local_40 & 0xf0000000) != 0x10000000) {
    return -0x7fffbffb;
  }
  local_20 = 0x12;
  local_1c = 0;
  local_18 = 0;
  FUN_638a7ff0(this,&local_20);
  local_20 = 0x11;
  local_1c = 0;
  local_18 = 0;
  FUN_638a7ff0(this,&local_20);
  local_68 = 2;
  local_64 = 0;
  FUN_638a8020(this,&local_68);
  *(undefined4 *)((int)this + 0x15a) = 0;
  local_5c = 10;
  local_58 = 0;
  FUN_638a8020(this,&local_5c);
  *(undefined4 *)((int)this + 0x146) = 0;
  if (*(int *)((int)this + 0xee) != 0) {
    local_4c = *(int *)((int)this + 0xee) + 1;
    local_b0 = (uint)local_36;
    *(uint *)((int)this + 0xf2) = local_b0;
    local_ac = (uint)uStack_34;
    local_50 = 0x24;
    *(uint *)((int)this + 0x116) = local_ac;
    local_48 = &local_b0;
    local_8 = FUN_638a7ff0(this,&local_50);
    if (local_8 != 0) {
      return -0x7fffbffb;
    }
  }
  if (*(int *)((int)this + 0x14a) != 0) {
    if (*(int *)((int)this + 0x186) == 0) {
      *(uint *)((int)this + 0xc2) = (uint)*(ushort *)((int)this + 0x40);
      *(uint *)((int)this + 0xbe) = (uint)*(ushort *)((int)this + 0x3e);
      FUN_638ad0a0(this,(uint)*(ushort *)((int)this + 0x3e),(uint)*(ushort *)((int)this + 0x40));
    }
    else {
      uVar1 = *(ushort *)((int)this + 0x3e);
      if ((uVar1 & 0xf) == 0) {
        uVar9 = (uint)(uVar1 >> 4);
      }
      else {
        uVar9 = (uVar1 >> 4) + 1;
      }
      uVar2 = *(ushort *)((int)this + 0x40);
      if ((uVar2 & 0xf) == 0) {
        uVar8 = (uint)(uVar2 >> 4);
      }
      else {
        uVar8 = (uVar2 >> 4) + 1;
      }
      uVar9 = uVar9 * uVar8;
      *(uint *)((int)this + 0xb6) = (uint)uVar1;
      *(uint *)((int)this + 0xba) = (uint)uVar2;
      *(uint *)((int)this + 0xe2) = (uint)uVar1;
      *(uint *)((int)this + 0xe6) = (uint)uVar2;
      pvVar3 = operator_new(uVar9 * 8);
      *(void **)((int)this + 0xce) = pvVar3;
      pvVar3 = operator_new(uVar9 * 8);
      *(void **)((int)this + 0xd2) = pvVar3;
      pvVar3 = operator_new(uVar9 * 0x20);
      *(void **)((int)this + 0xd6) = pvVar3;
      pvVar3 = operator_new(uVar9);
      *(void **)((int)this + 0xda) = pvVar3;
      pvVar3 = operator_new(uVar9);
      puVar4 = *(undefined4 **)((int)this + 0xce);
      *(void **)((int)this + 0xde) = pvVar3;
      if (puVar4 != (undefined4 *)0x0) {
        if ((((*(int *)((int)this + 0xd2) != 0) && (*(int *)((int)this + 0xd6) != 0)) &&
            (*(int *)((int)this + 0xda) != 0)) && (pvVar3 != (void *)0x0)) {
          for (iVar6 = uVar9 * 2; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar4 = *(undefined4 **)((int)this + 0xd2);
          for (iVar6 = uVar9 * 2; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar4 = *(undefined4 **)((int)this + 0xd6);
          for (iVar6 = uVar9 * 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar4 = *(undefined4 **)((int)this + 0xda);
          for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar4 = *(undefined4 **)((int)this + 0xde);
          for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          *(uint *)((int)this + 0xc2) = (uint)*(ushort *)((int)this + 0x40);
          *(uint *)((int)this + 0xbe) = (uint)*(ushort *)((int)this + 0x3e);
          FUN_638ad0a0(this,(uint)*(ushort *)((int)this + 0x3e),(uint)*(ushort *)((int)this + 0x40))
          ;
          goto LAB_638a67f9;
        }
        if (puVar4 != (undefined4 *)0x0) {
          operator_delete(puVar4);
          *(undefined4 *)((int)this + 0xce) = 0;
        }
      }
      if (*(void **)((int)this + 0xd2) != (void *)0x0) {
        operator_delete(*(void **)((int)this + 0xd2));
        *(undefined4 *)((int)this + 0xd2) = 0;
      }
      if (*(void **)((int)this + 0xd6) != (void *)0x0) {
        operator_delete(*(void **)((int)this + 0xd6));
        *(undefined4 *)((int)this + 0xd6) = 0;
      }
      if (*(void **)((int)this + 0xda) != (void *)0x0) {
        operator_delete(*(void **)((int)this + 0xda));
        *(undefined4 *)((int)this + 0xda) = 0;
      }
      if (*(void **)((int)this + 0xde) != (void *)0x0) {
        operator_delete(*(void **)((int)this + 0xde));
        *(undefined4 *)((int)this + 0xde) = 0;
      }
      *(undefined4 *)((int)this + 0x14a) = 0;
    }
  }
LAB_638a67f9:
  *(undefined4 *)((int)this + 0x13e) = 0;
  *(undefined4 *)((int)this + 0x9e) = 0;
  if (*(int *)((int)this + 0x1c2) == 0) {
    *(undefined4 *)((int)this + 0x166) = 0;
    *(undefined4 *)((int)this + 0x162) = 0;
    *(undefined4 *)((int)this + 0x16a) = 0;
  }
  else {
    if ((int)((uint)local_36 * (uint)uStack_34) < 0x6301) {
      *(undefined4 *)((int)this + 0x166) = 1;
      *(undefined4 *)((int)this + 0x162) = 1;
    }
    else {
      *(undefined4 *)((int)this + 0x166) = 0;
      *(undefined4 *)((int)this + 0x162) = 0;
    }
    *(undefined4 *)((int)this + 0x16a) = 1;
  }
  if (*(int *)((int)this + 0x17e) != 0) {
    *(undefined4 *)((int)this + 0x166) = 0;
  }
  if (*(int *)((int)this + 0x17a) != 0) {
    *(undefined4 *)((int)this + 0x162) = 0;
  }
  uVar9 = local_8;
  if (*(int *)((int)this + 0x182) != 0) {
    *(undefined4 *)((int)this + 0x16a) = 0;
  }
LAB_638a688f:
  *(uint *)((int)this + 0x18) = (uint)(uVar9 == 0);
  return uVar9;
}


