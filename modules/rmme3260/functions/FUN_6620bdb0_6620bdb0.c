/* Module: rmme3260.dll
   Function: FUN_6620bdb0
   Address: 6620bdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6620bdb0(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint local_1c;
  uint *local_c;
  int local_8;
  
  local_8 = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x25] = 1;
  (**(code **)(*param_1 + 0x34))(0,0);
  local_c = (uint *)0x0;
  do {
    if ((uint *)param_1[2] <= local_c) break;
    puVar5 = *(uint **)(*(int *)param_1[3] + (int)local_c * 4);
    uVar4 = (**(code **)(*param_1 + 0x3c))();
    pbVar2 = (byte *)puVar5[2];
    puVar5[1] = uVar4;
    if ((pbVar2 != (byte *)0x0) && (*puVar5 != 0)) {
      local_1c = (uint)*pbVar2 << 0x18 | (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 |
                 (uint)pbVar2[3];
    }
    if (local_1c == 0x44415441) {
      *(uint *)((int)param_1 + 0x42) = uVar4;
    }
    if ((local_1c == 0x4d445052) && (param_1[0x2f] != 0)) {
      local_8 = FUN_6620c280(param_1,puVar5[2],*puVar5);
    }
    else {
      local_8 = (**(code **)(*param_1 + 0x38))(puVar5[2],*puVar5);
    }
    local_c = (uint *)((int)local_c + 1);
  } while (local_8 == 0);
  if (local_8 != 0) goto LAB_6620c267;
  if (param_1[0x2a] == 1) {
    uVar4 = (uint)*(ushort *)((int)param_1 + 0x6e);
    puVar5 = operator_new(uVar4 * 0x10 + 4);
    if (puVar5 == (uint *)0x0) {
      puVar9 = (uint *)0x0;
    }
    else {
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
      puVar9 = puVar5;
      local_c = puVar5;
      if (-1 < (int)(uVar4 - 1)) {
        do {
          FUN_6624fd80(puVar5);
          puVar5 = puVar5 + 4;
          uVar4 = uVar4 - 1;
          puVar9 = local_c;
        } while (uVar4 != 0);
      }
    }
    param_1[0x1c] = (int)puVar9;
    pvVar6 = operator_new((uint)*(ushort *)((int)param_1 + 0x6e) * 0x14);
    param_1[0x1d] = (int)pvVar6;
    if ((param_1[0x1c] == 0) || (pvVar6 == (void *)0x0)) {
      local_8 = -0x7ff8fff2;
    }
    uVar4 = 0;
    if (*(short *)((int)param_1 + 0x6e) != 0) {
      iVar7 = 0;
      do {
        if (local_8 != 0) break;
        *(undefined4 *)(iVar7 + param_1[0x1d]) = 0x494e4458;
        *(undefined4 *)(iVar7 + 4 + param_1[0x1d]) = 0x14;
        uVar4 = uVar4 + 1;
        *(undefined2 *)(iVar7 + 8 + param_1[0x1d]) = 0;
        *(undefined2 *)(iVar7 + 0xe + param_1[0x1d]) =
             *(undefined2 *)(*(int *)(**(int **)((int)param_1 + 0x6a) + -4 + uVar4 * 4) + 0x1a);
        *(undefined4 *)(iVar7 + 10 + param_1[0x1d]) = 0;
        *(undefined4 *)(iVar7 + 0x10 + param_1[0x1d]) = 0;
        iVar7 = iVar7 + 0x14;
      } while (uVar4 < *(ushort *)((int)param_1 + 0x6e));
    }
  }
  if (local_8 != 0) goto LAB_6620c267;
  uVar8 = (**(code **)(*param_1 + 0x3c))();
  piVar3 = *(int **)(*(int *)param_1[3] + param_1[7] * 4);
  puVar5 = operator_new(0x32);
  if (puVar5 == (uint *)0x0) {
    param_1[9] = -0x7ff8fff2;
    return;
  }
  local_c = (uint *)*piVar3;
  pbVar2 = (byte *)piVar3[2];
  if ((pbVar2 == (byte *)0x0) || (local_c == (uint *)0x0)) {
LAB_6620c217:
    if ((short)puVar5[2] == 0) {
      *(undefined4 *)((int)puVar5 + 0x2a) = *(undefined4 *)((int)param_1 + 0x42);
    }
  }
  else {
    bVar1 = *pbVar2;
    *puVar5 = (uint)bVar1 << 0x18;
    uVar4 = (uint)pbVar2[1] << 0x10 | (uint)bVar1 << 0x18;
    *puVar5 = uVar4;
    *puVar5 = uVar4 | (uint)pbVar2[2] << 8;
    *puVar5 = *puVar5 | (uint)pbVar2[3];
    bVar1 = pbVar2[4];
    puVar5[1] = (uint)bVar1 << 0x18;
    puVar5[1] = (uint)bVar1 << 0x18 | (uint)pbVar2[5] << 0x10;
    puVar5[1] = puVar5[1] | (uint)pbVar2[6] << 8;
    puVar5[1] = puVar5[1] | (uint)pbVar2[7];
    *(ushort *)(puVar5 + 2) = (ushort)pbVar2[8] << 8;
    *(ushort *)(puVar5 + 2) = (ushort)puVar5[2] | (ushort)pbVar2[9];
    if ((short)puVar5[2] == 0) {
      bVar1 = pbVar2[10];
      *(uint *)((int)puVar5 + 10) = (uint)bVar1 << 0x18;
      *(uint *)((int)puVar5 + 10) = (uint)bVar1 << 0x18 | (uint)pbVar2[0xb] << 0x10;
      *(uint *)((int)puVar5 + 10) = *(uint *)((int)puVar5 + 10) | (uint)pbVar2[0xc] << 8;
      *(uint *)((int)puVar5 + 10) = *(uint *)((int)puVar5 + 10) | (uint)pbVar2[0xd];
      bVar1 = pbVar2[0xe];
      *(uint *)((int)puVar5 + 0xe) = (uint)bVar1 << 0x18;
      *(uint *)((int)puVar5 + 0xe) = (uint)bVar1 << 0x18 | (uint)pbVar2[0xf] << 0x10;
      *(uint *)((int)puVar5 + 0xe) = *(uint *)((int)puVar5 + 0xe) | (uint)pbVar2[0x10] << 8;
      *(uint *)((int)puVar5 + 0xe) = *(uint *)((int)puVar5 + 0xe) | (uint)pbVar2[0x11];
      bVar1 = pbVar2[0x12];
      *(uint *)((int)puVar5 + 0x12) = (uint)bVar1 << 0x18;
      *(uint *)((int)puVar5 + 0x12) = (uint)bVar1 << 0x18 | (uint)pbVar2[0x13] << 0x10;
      *(uint *)((int)puVar5 + 0x12) = *(uint *)((int)puVar5 + 0x12) | (uint)pbVar2[0x14] << 8;
      *(uint *)((int)puVar5 + 0x12) = *(uint *)((int)puVar5 + 0x12) | (uint)pbVar2[0x15];
      bVar1 = pbVar2[0x16];
      *(uint *)((int)puVar5 + 0x16) = (uint)bVar1 << 0x18;
      *(uint *)((int)puVar5 + 0x16) = (uint)bVar1 << 0x18 | (uint)pbVar2[0x17] << 0x10;
      *(uint *)((int)puVar5 + 0x16) = *(uint *)((int)puVar5 + 0x16) | (uint)pbVar2[0x18] << 8;
      *(uint *)((int)puVar5 + 0x16) = *(uint *)((int)puVar5 + 0x16) | (uint)pbVar2[0x19];
      bVar1 = pbVar2[0x1a];
      *(uint *)((int)puVar5 + 0x1a) = (uint)bVar1 << 0x18;
      *(uint *)((int)puVar5 + 0x1a) = (uint)bVar1 << 0x18 | (uint)pbVar2[0x1b] << 0x10;
      *(uint *)((int)puVar5 + 0x1a) = *(uint *)((int)puVar5 + 0x1a) | (uint)pbVar2[0x1c] << 8;
      *(uint *)((int)puVar5 + 0x1a) = *(uint *)((int)puVar5 + 0x1a) | (uint)pbVar2[0x1d];
      bVar1 = pbVar2[0x1e];
      *(uint *)((int)puVar5 + 0x1e) = (uint)bVar1 << 0x18;
      *(uint *)((int)puVar5 + 0x1e) = (uint)bVar1 << 0x18 | (uint)pbVar2[0x1f] << 0x10;
      *(uint *)((int)puVar5 + 0x1e) = *(uint *)((int)puVar5 + 0x1e) | (uint)pbVar2[0x20] << 8;
      *(uint *)((int)puVar5 + 0x1e) = *(uint *)((int)puVar5 + 0x1e) | (uint)pbVar2[0x21];
      bVar1 = pbVar2[0x22];
      *(uint *)((int)puVar5 + 0x22) = (uint)bVar1 << 0x18;
      *(uint *)((int)puVar5 + 0x22) = (uint)bVar1 << 0x18 | (uint)pbVar2[0x23] << 0x10;
      *(uint *)((int)puVar5 + 0x22) = *(uint *)((int)puVar5 + 0x22) | (uint)pbVar2[0x24] << 8;
      *(uint *)((int)puVar5 + 0x22) = *(uint *)((int)puVar5 + 0x22) | (uint)pbVar2[0x25];
      bVar1 = pbVar2[0x26];
      *(uint *)((int)puVar5 + 0x26) = (uint)bVar1 << 0x18;
      *(uint *)((int)puVar5 + 0x26) = (uint)bVar1 << 0x18 | (uint)pbVar2[0x27] << 0x10;
      *(uint *)((int)puVar5 + 0x26) = *(uint *)((int)puVar5 + 0x26) | (uint)pbVar2[0x28] << 8;
      *(uint *)((int)puVar5 + 0x26) = *(uint *)((int)puVar5 + 0x26) | (uint)pbVar2[0x29];
      bVar1 = pbVar2[0x2a];
      *(uint *)((int)puVar5 + 0x2a) = (uint)bVar1 << 0x18;
      *(uint *)((int)puVar5 + 0x2a) = (uint)bVar1 << 0x18 | (uint)pbVar2[0x2b] << 0x10;
      *(uint *)((int)puVar5 + 0x2a) = *(uint *)((int)puVar5 + 0x2a) | (uint)pbVar2[0x2c] << 8;
      *(uint *)((int)puVar5 + 0x2a) = *(uint *)((int)puVar5 + 0x2a) | (uint)pbVar2[0x2d];
      *(ushort *)((int)puVar5 + 0x2e) = (ushort)pbVar2[0x2e] << 8;
      *(ushort *)((int)puVar5 + 0x2e) = *(ushort *)((int)puVar5 + 0x2e) | (ushort)pbVar2[0x2f];
      *(ushort *)(puVar5 + 0xc) = (ushort)pbVar2[0x30] << 8;
      *(ushort *)(puVar5 + 0xc) = (ushort)puVar5[0xc] | (ushort)pbVar2[0x31];
      goto LAB_6620c217;
    }
  }
  FUN_662095e0(puVar5,(undefined1 *)piVar3[2],(int *)&local_c);
  operator_delete(puVar5);
  (**(code **)(*param_1 + 0x34))(piVar3[1],0);
  local_8 = (**(code **)(*param_1 + 0x38))(piVar3[2],*piVar3);
  (**(code **)(*param_1 + 0x34))(uVar8,0);
LAB_6620c267:
  param_1[9] = local_8;
  return;
}


