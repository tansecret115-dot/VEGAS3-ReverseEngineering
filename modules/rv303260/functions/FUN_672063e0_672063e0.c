/* Module: rv303260.dll
   Function: FUN_672063e0
   Address: 672063e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_672063e0(void *this,int *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  FARPROC pFVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int aiStack_d8 [8];
  int aiStack_b8 [8];
  uint local_98;
  uint local_94;
  int local_8c [15];
  undefined4 local_50;
  int local_4c;
  uint *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 *local_30;
  short local_2c;
  ushort local_2a;
  ushort uStack_28;
  undefined2 local_26;
  undefined2 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar7 = 0;
  local_c = 0;
  pvVar2 = operator_new(0x18);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_6720e6d0(pvVar2,s_drv33260_dll_67214718,2);
  }
  *(undefined4 **)((int)this + 0x20) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  if (puVar3[1] == 0) {
    pFVar4 = FUN_6720e920(puVar3,s_RV20toYUV420Init_67214704);
    *(FARPROC *)((int)this + 0x76) = pFVar4;
    pFVar4 = FUN_6720e920(*(void **)((int)this + 0x20),s_RV20toYUV420Free_672146f0);
    *(FARPROC *)((int)this + 0x7a) = pFVar4;
    pFVar4 = FUN_6720e920(*(void **)((int)this + 0x20),s_RV20toYUV420Transform_672146d8);
    *(FARPROC *)((int)this + 0x72) = pFVar4;
    pFVar4 = FUN_6720e920(*(void **)((int)this + 0x20),s_RV20toYUV420CustomMessage_672146bc);
    *(FARPROC *)((int)this + 0x7e) = pFVar4;
    pFVar4 = FUN_6720e920(*(void **)((int)this + 0x20),s_RV20toYUV420HiveMessage_672146a4);
    *(FARPROC *)((int)this + 0x82) = pFVar4;
    pFVar4 = FUN_6720e920(*(void **)((int)this + 0x20),s_RV20toYUV420_RN_FRU_Init_67214688);
    *(FARPROC *)((int)this + 0x86) = pFVar4;
    pFVar4 = FUN_6720e920(*(void **)((int)this + 0x20),s_RV20toYUV420_RN_FRU_Setup_6721466c);
    *(FARPROC *)((int)this + 0x8a) = pFVar4;
    pFVar4 = FUN_6720e920(*(void **)((int)this + 0x20),s_RV20toYUV420_RN_FRU_GetFrame_6721464c);
    *(FARPROC *)((int)this + 0x8e) = pFVar4;
    pFVar4 = FUN_6720e920(*(void **)((int)this + 0x20),s_RV20toYUV420_RN_FRU_Free_67214630);
    *(FARPROC *)((int)this + 0x92) = pFVar4;
  }
  else {
    *(undefined4 *)((int)this + 0x20) = 0;
    iVar7 = 0x6e;
  }
  if (iVar7 == 0) {
    puVar3 = (undefined4 *)*param_1;
    puVar8 = (undefined4 *)param_1[1];
    *(undefined4 *)((int)this + 0x32) = *puVar3;
    *(undefined4 *)((int)this + 0x36) = puVar3[1];
    *(undefined4 *)((int)this + 0x3a) = puVar3[2];
    *(undefined2 *)((int)this + 0x3e) = *(undefined2 *)(puVar3 + 3);
    *(undefined2 *)((int)this + 0x40) = *(undefined2 *)((int)puVar3 + 0xe);
    *(undefined2 *)((int)this + 0x42) = *(undefined2 *)(puVar3 + 4);
    *(undefined2 *)((int)this + 0x44) = *(undefined2 *)((int)puVar3 + 0x12);
    *(undefined2 *)((int)this + 0x46) = *(undefined2 *)(puVar3 + 5);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)puVar3 + 0x16);
    iVar7 = *param_1;
    local_30 = puVar8;
    memmove(&local_8,(void *)(iVar7 + 0x1a),4);
    memmove((void *)((int)this + 0x2e),(void *)(iVar7 + 0x1e),4);
    pvVar2 = (void *)(iVar7 + 0x22);
    local_8 = FUN_6720eb00(local_8);
    uVar5 = FUN_6720eb00(*(uint *)((int)this + 0x2e));
    *(uint *)((int)this + 0x2e) = uVar5;
    if (2 < (uVar5 & 0xff)) {
      return -0x7fffbffb;
    }
    if ((uVar5 & 0xff) == 2) {
      uVar5 = 0;
      local_c = local_8 >> 0x10 & 7;
      puVar8 = local_30;
      if (local_c != 0) {
        local_14 = local_8c;
        do {
          memmove(&local_10,pvVar2,1);
          piVar1 = local_14;
          iVar7 = (local_10 & 0xff) << 2;
          aiStack_b8[uVar5] = iVar7;
          piVar1[-1] = iVar7;
          memmove(&local_10,(void *)((int)pvVar2 + 1),1);
          iVar7 = (local_10 & 0xff) << 2;
          aiStack_d8[uVar5] = iVar7;
          *local_14 = iVar7;
          pvVar2 = (void *)((int)pvVar2 + 2);
          uVar5 = uVar5 + 1;
          local_14 = local_14 + 2;
          puVar8 = local_30;
        } while (uVar5 < local_c);
      }
    }
    *(uint *)((int)this + 0x32) = *(int *)((int)this + 0x32) + local_c * -2 + -8;
    *puVar8 = 0x1a;
    *(undefined2 *)(puVar8 + 3) = *(undefined2 *)((int)this + 0x3e);
    *(undefined2 *)((int)puVar8 + 0xe) = *(undefined2 *)((int)this + 0x40);
    *(undefined2 *)((int)puVar8 + 0x12) = 0;
    *(undefined2 *)((int)puVar8 + 0x16) = 0;
    *(undefined2 *)(puVar8 + 5) = 0;
    *(undefined2 *)(puVar8 + 6) = 0;
    *(undefined2 *)(puVar8 + 4) = 0xc;
    puVar3 = (undefined4 *)((int)this + 0x58);
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = *(undefined2 *)puVar8;
    *(int *)((int)this + 0x14) = param_1[2];
    uVar5 = FUN_6720e680();
    *(uint *)((int)this + 0x162) = uVar5;
    uStack_28 = *(ushort *)((int)this + 0x40);
    *(uint *)((int)this + 0x24) =
         (((uint)*(ushort *)((int)this + 100) + (uint)*(ushort *)((int)this + 0x6e) +
          (uint)*(ushort *)((int)this + 0x6a)) * (uint)*(ushort *)((int)this + 0x68) + 0x1f >> 3 &
         0x1ffffffc) *
         ((uint)*(ushort *)((int)this + 0x70) + (uint)*(ushort *)((int)this + 0x66) +
         (uint)*(ushort *)((int)this + 0x6c));
    local_2a = *(ushort *)((int)this + 0x3e);
    local_2c = (*(int *)((int)this + 0x72) != 0) + 10;
    local_18 = *(undefined4 *)((int)this + 0x2e);
    local_26 = *(undefined2 *)((int)this + 0x44);
    local_24 = *(undefined2 *)((int)this + 0x46);
    *(undefined4 *)((int)this + 0x4c) = 8;
    *(undefined4 *)((int)this + 0x50) = 0;
    local_1c = 1;
    local_20 = local_8;
    *(uint *)((int)this + 0x102) = local_8 >> 4 & 1;
    *(uint *)((int)this + 0x112) = local_8 >> 0xc & 1;
    *(uint *)((int)this + 0xd6) = local_8 >> 0x14 & 1;
    FUN_67208030(this,&local_2c);
    local_38 = 0;
    iVar7 = FUN_672080c0(this,&local_38);
    if (iVar7 != 0) {
      return iVar7;
    }
    if ((local_34 & 0xf0000000) != 0x20000000) {
      return -0x7fffbffb;
    }
    local_44 = 0x11;
    local_40 = 0;
    local_3c = 0;
    FUN_67208090(this,&local_44);
    if (local_c != 0) {
      local_98 = (uint)local_2a;
      local_4c = local_c + 1;
      local_94 = (uint)uStack_28;
      local_48 = &local_98;
      local_50 = 0x24;
      iVar7 = FUN_67208090(this,&local_50);
      if (iVar7 != 0) {
        return -0x7fffbffb;
      }
    }
    iVar7 = 0;
    if (*(int *)((int)this + 0xf6) != 0) {
      uVar9 = ((int)(*(ushort *)((int)this + 0x40) + 0xf) >> 4) *
              ((int)(*(ushort *)((int)this + 0x3e) + 0xf) >> 4);
      pvVar2 = operator_new(uVar9);
      *(void **)((int)this + 0x12a) = pvVar2;
      pvVar2 = operator_new(uVar9 * 8);
      *(void **)((int)this + 0x12e) = pvVar2;
      puVar3 = *(undefined4 **)((int)this + 0x12a);
      for (uVar5 = uVar9 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar9 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      puVar3 = *(undefined4 **)((int)this + 0x12e);
      for (iVar6 = uVar9 * 2; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    *(undefined4 *)((int)this + 0xe2) = 0;
    *(undefined4 *)((int)this + 0x9e) = 0;
    if (*(int *)((int)this + 0x162) == 0) {
      *(undefined4 *)((int)this + 0xf6) = 0;
      *(undefined4 *)((int)this + 0xf2) = 0;
      *(undefined4 *)((int)this + 0xfa) = 0;
    }
    else {
      if ((int)((uint)local_2a * (uint)uStack_28) < 0x6301) {
        *(undefined4 *)((int)this + 0xf6) = 1;
      }
      else {
        *(undefined4 *)((int)this + 0xf6) = 0;
      }
      *(undefined4 *)((int)this + 0xf2) = 1;
      *(undefined4 *)((int)this + 0xfa) = 1;
    }
    if (*(int *)((int)this + 0x10a) != 0) {
      *(undefined4 *)((int)this + 0xf6) = 0;
    }
    if (*(int *)((int)this + 0x106) != 0) {
      *(undefined4 *)((int)this + 0xf2) = 0;
    }
    if (*(int *)((int)this + 0x10e) != 0) {
      *(undefined4 *)((int)this + 0xfa) = 0;
    }
  }
  *(uint *)((int)this + 0x18) = (uint)(iVar7 == 0);
  return iVar7;
}


