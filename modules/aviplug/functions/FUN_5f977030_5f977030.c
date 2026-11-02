/* Module: aviplug.dll
   Function: FUN_5f977030
   Address: 5f977030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f977030(int param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  int iVar7;
  ulonglong *puVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined4 local_2c;
  int local_28;
  char *local_24;
  char *local_1c;
  int local_18;
  int local_14;
  ulonglong *local_10;
  int local_c;
  int local_8;
  
  local_1c = param_2 + 0x1e8;
  local_14 = param_3 + 0xe280;
  puVar8 = (ulonglong *)(param_3 + 0xb5e0);
  puVar5 = *(uint **)(param_2 + 8);
  local_18 = 0;
  pbVar10 = (byte *)(param_1 + 3);
  local_8 = 5;
  pcVar9 = param_2;
  local_10 = puVar8;
  local_c = local_14;
  do {
    *(char **)(pcVar9 + 0x44) = param_2 + (local_18 + 0x3f >> 6) * 8 + 0x1e8;
    bVar6 = *pbVar10 & 0xf | *pcVar9 << 4;
    *pbVar10 = (pcVar9[4] ^ bVar6) & 0xf ^ bVar6;
    puVar5 = (uint *)FUN_5f976f00(puVar8,puVar5,(int)pcVar9,(int *)&local_1c);
    puVar8 = puVar8 + 0xc;
    pcVar9 = pcVar9 + 0x48;
    pbVar10 = pbVar10 + 0x50;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)(local_14 + 8) = 0;
  if ((0 < local_18) && (*(int *)(param_3 + 0xe288) != 0)) {
    local_28 = local_18;
    local_24 = local_1c;
    local_2c = 0;
    local_14 = local_c;
    FUN_5f976c80((int)&local_1c,(ulonglong *)&local_2c);
  }
  iVar7 = 5;
  do {
    puVar8 = local_10;
    puVar8[1] = puVar8[1] | puVar8[2] >> 0x30;
    puVar8[2] = puVar8[2] << 0x10 | puVar8[3] >> 0x30;
    puVar8[3] = puVar8[3] << 0x10;
    puVar8[5] = puVar8[5] | puVar8[6] >> 0x30;
    puVar8[6] = puVar8[6] << 0x10 | puVar8[7] >> 0x30;
    puVar8[7] = puVar8[7] << 0x10;
    iVar7 = iVar7 + -1;
    puVar8[9] = puVar8[9] | puVar8[10] >> 0x10;
    puVar8[10] = puVar8[10] << 0x30 | puVar8[0xb] >> 0x10;
    local_10 = puVar8 + 0xc;
  } while (iVar7 != 0);
  puVar8 = puVar8 + -0x30;
  iVar7 = 5;
  do {
    uVar4 = (uint)*puVar8;
    uVar1 = *(uint *)((int)puVar8 + 4);
    uVar3 = (uint)puVar8[1];
    uVar2 = *(uint *)((int)puVar8 + 0xc);
    *(uint *)(param_1 + 4) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *(uint *)(param_1 + 8) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = (uint)puVar8[2];
    uVar1 = *(uint *)((int)puVar8 + 0x14);
    *(uint *)(param_1 + 0xc) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    *(uint *)(param_1 + 0x10) =
         uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar3 = *(uint *)((int)puVar8 + 0x1c);
    *(uint *)(param_1 + 0x14) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *(uint *)(param_1 + 0x18) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    *(uint *)(param_1 + 0x1c) =
         uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar4 = (uint)puVar8[4];
    uVar1 = *(uint *)((int)puVar8 + 0x24);
    uVar3 = (uint)puVar8[5];
    uVar2 = *(uint *)((int)puVar8 + 0x2c);
    *(uint *)(param_1 + 0x20) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *(uint *)(param_1 + 0x24) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = (uint)puVar8[6];
    uVar1 = *(uint *)((int)puVar8 + 0x34);
    *(uint *)(param_1 + 0x28) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    *(uint *)(param_1 + 0x2c) =
         uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar3 = *(uint *)((int)puVar8 + 0x3c);
    *(uint *)(param_1 + 0x30) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *(uint *)(param_1 + 0x34) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    *(uint *)(param_1 + 0x38) =
         uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar4 = (uint)puVar8[8];
    uVar1 = *(uint *)((int)puVar8 + 0x44);
    uVar3 = (uint)puVar8[9];
    uVar2 = *(uint *)((int)puVar8 + 0x4c);
    *(uint *)(param_1 + 0x3c) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *(uint *)(param_1 + 0x40) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = *(uint *)((int)puVar8 + 0x54);
    *(uint *)(param_1 + 0x44) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    *(uint *)(param_1 + 0x48) =
         uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    puVar8 = puVar8 + 0xc;
    *(uint *)(param_1 + 0x4c) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    iVar7 = iVar7 + -1;
    param_1 = param_1 + 0x50;
  } while (iVar7 != 0);
  return;
}


