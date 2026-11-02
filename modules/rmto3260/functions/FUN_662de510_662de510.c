/* Module: rmto3260.dll
   Function: FUN_662de510
   Address: 662de510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662de510(void *this,byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (param_1 == (byte *)0x0) {
    return 0x80070057;
  }
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_1;
    *(uint *)((int)this + 0xc) = (uint)bVar1 << 0x18;
    *(uint *)((int)this + 0xc) = (uint)param_1[1] << 0x10 | (uint)bVar1 << 0x18;
    uVar7 = *(uint *)((int)this + 0xc) | (uint)param_1[2] << 8;
    *(uint *)((int)this + 0xc) = uVar7;
    *(uint *)((int)this + 0xc) = uVar7 | param_1[3];
    *(uint *)((int)this + 0x10) = (uint)param_1[4] << 0x18;
    uVar7 = *(uint *)((int)this + 0x10) | (uint)param_1[5] << 0x10;
    *(uint *)((int)this + 0x10) = uVar7;
    uVar7 = uVar7 | (uint)param_1[6] << 8;
    *(uint *)((int)this + 0x10) = uVar7;
    *(uint *)((int)this + 0x10) = uVar7 | param_1[7];
    *(ushort *)((int)this + 0x14) = (ushort)param_1[8] << 8;
    *(ushort *)((int)this + 0x14) = *(ushort *)((int)this + 0x14) | (ushort)param_1[9];
    if (*(short *)((int)this + 0x14) == 0) {
      *(ushort *)((int)this + 0x16) = (ushort)param_1[10] << 8;
      *(ushort *)((int)this + 0x16) = *(ushort *)((int)this + 0x16) | (ushort)param_1[0xb];
      *(uint *)((int)this + 0x18) = (uint)param_1[0xc] << 0x18;
      uVar7 = *(uint *)((int)this + 0x18) | (uint)param_1[0xd] << 0x10;
      *(uint *)((int)this + 0x18) = uVar7;
      uVar7 = uVar7 | (uint)param_1[0xe] << 8;
      *(uint *)((int)this + 0x18) = uVar7;
      *(uint *)((int)this + 0x18) = uVar7 | param_1[0xf];
      *(uint *)((int)this + 0x1c) = (uint)param_1[0x10] << 0x18;
      uVar7 = *(uint *)((int)this + 0x1c) | (uint)param_1[0x11] << 0x10;
      *(uint *)((int)this + 0x1c) = uVar7;
      uVar7 = uVar7 | (uint)param_1[0x12] << 8;
      *(uint *)((int)this + 0x1c) = uVar7;
      *(uint *)((int)this + 0x1c) = uVar7 | param_1[0x13];
      *(uint *)((int)this + 0x20) = (uint)param_1[0x14] << 0x18;
      uVar7 = *(uint *)((int)this + 0x20) | (uint)param_1[0x15] << 0x10;
      *(uint *)((int)this + 0x20) = uVar7;
      uVar7 = uVar7 | (uint)param_1[0x16] << 8;
      *(uint *)((int)this + 0x20) = uVar7;
      *(uint *)((int)this + 0x20) = uVar7 | param_1[0x17];
      *(uint *)((int)this + 0x24) = (uint)param_1[0x18] << 0x18;
      uVar7 = *(uint *)((int)this + 0x24) | (uint)param_1[0x19] << 0x10;
      *(uint *)((int)this + 0x24) = uVar7;
      uVar7 = uVar7 | (uint)param_1[0x1a] << 8;
      *(uint *)((int)this + 0x24) = uVar7;
      *(uint *)((int)this + 0x24) = uVar7 | param_1[0x1b];
      *(uint *)((int)this + 0x28) = (uint)param_1[0x1c] << 0x18;
      uVar7 = *(uint *)((int)this + 0x28) | (uint)param_1[0x1d] << 0x10;
      *(uint *)((int)this + 0x28) = uVar7;
      uVar7 = uVar7 | (uint)param_1[0x1e] << 8;
      *(uint *)((int)this + 0x28) = uVar7;
      *(uint *)((int)this + 0x28) = uVar7 | param_1[0x1f];
      *(uint *)((int)this + 0x2c) = (uint)param_1[0x20] << 0x18;
      uVar7 = *(uint *)((int)this + 0x2c) | (uint)param_1[0x21] << 0x10;
      *(uint *)((int)this + 0x2c) = uVar7;
      uVar7 = uVar7 | (uint)param_1[0x22] << 8;
      *(uint *)((int)this + 0x2c) = uVar7;
      *(uint *)((int)this + 0x2c) = uVar7 | param_1[0x23];
      *(uint *)((int)this + 0x30) = (uint)param_1[0x24] << 0x18;
      uVar7 = *(uint *)((int)this + 0x30) | (uint)param_1[0x25] << 0x10;
      *(uint *)((int)this + 0x30) = uVar7;
      uVar7 = uVar7 | (uint)param_1[0x26] << 8;
      *(uint *)((int)this + 0x30) = uVar7;
      *(uint *)((int)this + 0x30) = uVar7 | param_1[0x27];
      *(byte *)((int)this + 0x34) = param_1[0x28];
      pbVar4 = param_1 + 0x29 + *(byte *)((int)this + 0x34);
      if ((int)pbVar4 - (int)param_1 <= (int)param_2) {
        *(byte **)((int)this + 0x35) = param_1 + 0x29;
        *(byte *)((int)this + 0x39) = *pbVar4;
        pbVar2 = pbVar4 + 1 + *(byte *)((int)this + 0x39);
        if ((int)pbVar2 - (int)param_1 <= (int)param_2) {
          *(byte **)((int)this + 0x3a) = pbVar4 + 1;
          *(uint *)((int)this + 0x3e) = (uint)*pbVar2 << 0x18;
          uVar7 = *(uint *)((int)this + 0x3e) | (uint)pbVar2[1] << 0x10;
          *(uint *)((int)this + 0x3e) = uVar7;
          uVar7 = uVar7 | (uint)pbVar2[2] << 8;
          *(uint *)((int)this + 0x3e) = uVar7;
          uVar7 = uVar7 | pbVar2[3];
          *(uint *)((int)this + 0x3e) = uVar7;
          if (pbVar2 + 4 + (uVar7 - (int)param_1) <= param_2) {
            *(byte **)((int)this + 0x42) = pbVar2 + 4;
          }
        }
      }
    }
  }
  puVar3 = (undefined4 *)0x0;
  param_1 = (byte *)0x0;
  param_2 = (byte *)0x0;
  if (*(byte *)((int)this + 0x34) != 0) {
    puVar3 = operator_new((uint)*(byte *)((int)this + 0x34));
    if (puVar3 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    bVar1 = *(byte *)((int)this + 0x34);
    puVar6 = *(undefined4 **)((int)this + 0x35);
    puVar8 = puVar3;
    for (uVar7 = (uint)(bVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = bVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  *(undefined4 **)((int)this + 0x35) = puVar3;
  if (*(byte *)((int)this + 0x39) != 0) {
    param_1 = operator_new((uint)*(byte *)((int)this + 0x39));
    if (param_1 == (byte *)0x0) {
      return 0x8007000e;
    }
    bVar1 = *(byte *)((int)this + 0x39);
    pbVar4 = *(byte **)((int)this + 0x3a);
    pbVar2 = param_1;
    for (uVar7 = (uint)(bVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
      pbVar4 = pbVar4 + 4;
      pbVar2 = pbVar2 + 4;
    }
    for (uVar7 = bVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      pbVar2 = pbVar2 + 1;
    }
  }
  *(byte **)((int)this + 0x3a) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (*(uint *)((int)this + 0x3e) != 0) {
    param_2 = operator_new(*(uint *)((int)this + 0x3e));
    if (param_2 == (byte *)0x0) {
      return 0x8007000e;
    }
    uVar7 = *(uint *)((int)this + 0x3e);
    pbVar4 = *(byte **)((int)this + 0x42);
    pbVar2 = param_2;
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
      pbVar4 = pbVar4 + 4;
      pbVar2 = pbVar2 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      pbVar2 = pbVar2 + 1;
    }
  }
  *(byte **)((int)this + 0x42) = param_2;
  return 0;
}


