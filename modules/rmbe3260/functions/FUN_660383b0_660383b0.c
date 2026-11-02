/* Module: rmbe3260.dll
   Function: FUN_660383b0
   Address: 660383b0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * __thiscall FUN_660383b0(void *this,byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return (byte *)0x0;
  }
  bVar1 = *param_1;
  *(uint *)this = (uint)bVar1 << 0x18;
  *(uint *)this = (uint)param_1[1] << 0x10 | (uint)bVar1 << 0x18;
  uVar4 = *(uint *)this | (uint)param_1[2] << 8;
  *(uint *)this = uVar4;
  *(uint *)this = uVar4 | param_1[3];
  *(ushort *)((int)this + 4) = (ushort)param_1[4] << 8;
  *(ushort *)((int)this + 4) = *(ushort *)((int)this + 4) | (ushort)param_1[5];
  *(ushort *)((int)this + 6) = (ushort)param_1[6] << 8;
  *(ushort *)((int)this + 6) = *(ushort *)((int)this + 6) | (ushort)param_1[7];
  *(uint *)((int)this + 8) = (uint)param_1[8] << 0x18;
  uVar4 = *(uint *)((int)this + 8) | (uint)param_1[9] << 0x10;
  *(uint *)((int)this + 8) = uVar4;
  uVar4 = uVar4 | (uint)param_1[10] << 8;
  *(uint *)((int)this + 8) = uVar4;
  *(uint *)((int)this + 8) = uVar4 | param_1[0xb];
  *(uint *)((int)this + 0xc) = (uint)param_1[0xc] << 0x18;
  uVar4 = *(uint *)((int)this + 0xc) | (uint)param_1[0xd] << 0x10;
  *(uint *)((int)this + 0xc) = uVar4;
  uVar4 = uVar4 | (uint)param_1[0xe] << 8;
  *(uint *)((int)this + 0xc) = uVar4;
  *(uint *)((int)this + 0xc) = uVar4 | param_1[0xf];
  *(ushort *)((int)this + 0x10) = (ushort)param_1[0x10] << 8;
  *(ushort *)((int)this + 0x10) = *(ushort *)((int)this + 0x10) | (ushort)param_1[0x11];
  *(ushort *)((int)this + 0x12) = (ushort)param_1[0x12] << 8;
  *(ushort *)((int)this + 0x12) = *(ushort *)((int)this + 0x12) | (ushort)param_1[0x13];
  *(ushort *)((int)this + 0x14) = (ushort)param_1[0x14] << 8;
  *(ushort *)((int)this + 0x14) = *(ushort *)((int)this + 0x14) | (ushort)param_1[0x15];
  *(ushort *)((int)this + 0x16) = (ushort)param_1[0x16] << 8;
  *(ushort *)((int)this + 0x16) = *(ushort *)((int)this + 0x16) | (ushort)param_1[0x17];
  *(uint *)((int)this + 0x18) = (uint)param_1[0x18] << 0x18;
  uVar4 = *(uint *)((int)this + 0x18) | (uint)param_1[0x19] << 0x10;
  *(uint *)((int)this + 0x18) = uVar4;
  uVar4 = uVar4 | (uint)param_1[0x1a] << 8;
  *(uint *)((int)this + 0x18) = uVar4;
  *(uint *)((int)this + 0x18) = uVar4 | param_1[0x1b];
  *(uint *)((int)this + 0x1c) = (uint)param_1[0x1c] << 0x18;
  uVar4 = *(uint *)((int)this + 0x1c) | (uint)param_1[0x1d] << 0x10;
  *(uint *)((int)this + 0x1c) = uVar4;
  uVar4 = uVar4 | (uint)param_1[0x1e] << 8;
  *(uint *)((int)this + 0x1c) = uVar4;
  *(uint *)((int)this + 0x1c) = uVar4 | param_1[0x1f];
  *(uint *)((int)this + 0x20) = (uint)param_1[0x20] << 0x18;
  uVar4 = *(uint *)((int)this + 0x20) | (uint)param_1[0x21] << 0x10;
  *(uint *)((int)this + 0x20) = uVar4;
  uVar4 = uVar4 | (uint)param_1[0x22] << 8;
  *(uint *)((int)this + 0x20) = uVar4;
  *(uint *)((int)this + 0x20) = uVar4 | param_1[0x23];
  *(uint *)((int)this + 0x24) = (uint)param_1[0x24] << 0x18;
  uVar4 = *(uint *)((int)this + 0x24) | (uint)param_1[0x25] << 0x10;
  *(uint *)((int)this + 0x24) = uVar4;
  uVar4 = uVar4 | (uint)param_1[0x26] << 8;
  *(uint *)((int)this + 0x24) = uVar4;
  *(uint *)((int)this + 0x24) = uVar4 | param_1[0x27];
  *(ushort *)((int)this + 0x28) = (ushort)param_1[0x28] << 8;
  *(ushort *)((int)this + 0x28) = *(ushort *)((int)this + 0x28) | (ushort)param_1[0x29];
  *(ushort *)((int)this + 0x2a) = (ushort)param_1[0x2a] << 8;
  *(ushort *)((int)this + 0x2a) = *(ushort *)((int)this + 0x2a) | (ushort)param_1[0x2b];
  *(uint *)((int)this + 0x2c) = (uint)param_1[0x2c] << 0x18;
  uVar4 = *(uint *)((int)this + 0x2c) | (uint)param_1[0x2d] << 0x10;
  *(uint *)((int)this + 0x2c) = uVar4;
  uVar4 = uVar4 | (uint)param_1[0x2e] << 8;
  *(uint *)((int)this + 0x2c) = uVar4;
  *(uint *)((int)this + 0x2c) = uVar4 | param_1[0x2f];
  *(uint *)((int)this + 0x30) = (uint)param_1[0x30] << 0x18;
  uVar4 = *(uint *)((int)this + 0x30) | (uint)param_1[0x31] << 0x10;
  *(uint *)((int)this + 0x30) = uVar4;
  uVar4 = uVar4 | (uint)param_1[0x32] << 8;
  *(uint *)((int)this + 0x30) = uVar4;
  *(uint *)((int)this + 0x30) = uVar4 | param_1[0x33];
  *(ushort *)((int)this + 0x34) = (ushort)param_1[0x34] << 8;
  *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) | (ushort)param_1[0x35];
  *(ushort *)((int)this + 0x36) = (ushort)param_1[0x36] << 8;
  *(ushort *)((int)this + 0x36) = *(ushort *)((int)this + 0x36) | (ushort)param_1[0x37];
  if (param_2 < (int)(param_1 + 0x38 + (5 - (int)param_1))) {
    return (byte *)0x0;
  }
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(byte *)((int)this + 0x3c) = param_1[0x3c];
  if (param_2 < (int)(param_1 + 0x3d + (5 - (int)param_1))) {
    return (byte *)0x0;
  }
  *(undefined4 *)((int)this + 0x3d) = *(undefined4 *)(param_1 + 0x3d);
  *(byte *)((int)this + 0x41) = param_1[0x41];
  *(byte *)((int)this + 0x42) = param_1[0x42];
  *(byte *)((int)this + 0x43) = param_1[0x43];
  *(byte *)((int)this + 0x44) = param_1[0x44];
  *(byte *)((int)this + 0x45) = param_1[0x45];
  pbVar3 = param_1 + 0x46 + *(byte *)((int)this + 0x45);
  if (param_2 < (int)pbVar3 - (int)param_1) {
    return (byte *)0x0;
  }
  *(byte **)((int)this + 0x46) = param_1 + 0x46;
  *(byte *)((int)this + 0x4a) = *pbVar3;
  pbVar2 = pbVar3 + 1 + *(byte *)((int)this + 0x4a);
  if (param_2 < (int)pbVar2 - (int)param_1) {
    return (byte *)0x0;
  }
  *(byte **)((int)this + 0x4b) = pbVar3 + 1;
  *(byte *)((int)this + 0x4f) = *pbVar2;
  pbVar3 = pbVar2 + 1 + *(byte *)((int)this + 0x4f);
  if (param_2 < (int)pbVar3 - (int)param_1) {
    return (byte *)0x0;
  }
  *(byte **)((int)this + 0x50) = pbVar2 + 1;
  *(byte *)((int)this + 0x54) = *pbVar3;
  pbVar3 = pbVar3 + 1;
  if (param_2 < (int)(pbVar3 + *(byte *)((int)this + 0x54)) - (int)param_1) {
    return (byte *)0x0;
  }
  *(byte **)((int)this + 0x55) = pbVar3;
  return pbVar3 + *(byte *)((int)this + 0x54);
}


