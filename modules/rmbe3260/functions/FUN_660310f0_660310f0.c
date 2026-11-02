/* Module: rmbe3260.dll
   Function: FUN_660310f0
   Address: 660310f0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * __thiscall FUN_660310f0(void *this,byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    pbVar2 = (byte *)0x0;
  }
  else {
    bVar1 = *param_1;
    *(uint *)this = (uint)bVar1 << 0x18;
    *(uint *)this = (uint)param_1[1] << 0x10 | (uint)bVar1 << 0x18;
    uVar3 = *(uint *)this | (uint)param_1[2] << 8;
    *(uint *)this = uVar3;
    *(uint *)this = uVar3 | param_1[3];
    *(uint *)((int)this + 4) = (uint)param_1[4] << 0x18;
    uVar3 = *(uint *)((int)this + 4) | (uint)param_1[5] << 0x10;
    *(uint *)((int)this + 4) = uVar3;
    uVar3 = uVar3 | (uint)param_1[6] << 8;
    *(uint *)((int)this + 4) = uVar3;
    *(uint *)((int)this + 4) = uVar3 | param_1[7];
    *(ushort *)((int)this + 8) = (ushort)param_1[8] << 8;
    *(ushort *)((int)this + 8) = *(ushort *)((int)this + 8) | (ushort)param_1[9];
    pbVar2 = param_1 + 10;
    if (*(short *)((int)this + 8) == 0) {
      *(uint *)((int)this + 10) = (uint)*pbVar2 << 0x18;
      uVar3 = *(uint *)((int)this + 10) | (uint)param_1[0xb] << 0x10;
      *(uint *)((int)this + 10) = uVar3;
      uVar3 = uVar3 | (uint)param_1[0xc] << 8;
      *(uint *)((int)this + 10) = uVar3;
      *(uint *)((int)this + 10) = uVar3 | param_1[0xd];
      *(uint *)((int)this + 0xe) = (uint)param_1[0xe] << 0x18;
      uVar3 = *(uint *)((int)this + 0xe) | (uint)param_1[0xf] << 0x10;
      *(uint *)((int)this + 0xe) = uVar3;
      uVar3 = uVar3 | (uint)param_1[0x10] << 8;
      *(uint *)((int)this + 0xe) = uVar3;
      *(uint *)((int)this + 0xe) = uVar3 | param_1[0x11];
      *(uint *)((int)this + 0x12) = (uint)param_1[0x12] << 0x18;
      uVar3 = *(uint *)((int)this + 0x12) | (uint)param_1[0x13] << 0x10;
      *(uint *)((int)this + 0x12) = uVar3;
      uVar3 = uVar3 | (uint)param_1[0x14] << 8;
      *(uint *)((int)this + 0x12) = uVar3;
      *(uint *)((int)this + 0x12) = uVar3 | param_1[0x15];
      *(uint *)((int)this + 0x16) = (uint)param_1[0x16] << 0x18;
      uVar3 = *(uint *)((int)this + 0x16) | (uint)param_1[0x17] << 0x10;
      *(uint *)((int)this + 0x16) = uVar3;
      uVar3 = uVar3 | (uint)param_1[0x18] << 8;
      *(uint *)((int)this + 0x16) = uVar3;
      *(uint *)((int)this + 0x16) = uVar3 | param_1[0x19];
      *(uint *)((int)this + 0x1a) = (uint)param_1[0x1a] << 0x18;
      uVar3 = *(uint *)((int)this + 0x1a) | (uint)param_1[0x1b] << 0x10;
      *(uint *)((int)this + 0x1a) = uVar3;
      uVar3 = uVar3 | (uint)param_1[0x1c] << 8;
      *(uint *)((int)this + 0x1a) = uVar3;
      *(uint *)((int)this + 0x1a) = uVar3 | param_1[0x1d];
      *(uint *)((int)this + 0x1e) = (uint)param_1[0x1e] << 0x18;
      uVar3 = *(uint *)((int)this + 0x1e) | (uint)param_1[0x1f] << 0x10;
      *(uint *)((int)this + 0x1e) = uVar3;
      uVar3 = uVar3 | (uint)param_1[0x20] << 8;
      *(uint *)((int)this + 0x1e) = uVar3;
      *(uint *)((int)this + 0x1e) = uVar3 | param_1[0x21];
      *(uint *)((int)this + 0x22) = (uint)param_1[0x22] << 0x18;
      uVar3 = *(uint *)((int)this + 0x22) | (uint)param_1[0x23] << 0x10;
      *(uint *)((int)this + 0x22) = uVar3;
      uVar3 = uVar3 | (uint)param_1[0x24] << 8;
      *(uint *)((int)this + 0x22) = uVar3;
      *(uint *)((int)this + 0x22) = uVar3 | param_1[0x25];
      *(uint *)((int)this + 0x26) = (uint)param_1[0x26] << 0x18;
      uVar3 = *(uint *)((int)this + 0x26) | (uint)param_1[0x27] << 0x10;
      *(uint *)((int)this + 0x26) = uVar3;
      uVar3 = uVar3 | (uint)param_1[0x28] << 8;
      *(uint *)((int)this + 0x26) = uVar3;
      *(uint *)((int)this + 0x26) = uVar3 | param_1[0x29];
      *(uint *)((int)this + 0x2a) = (uint)param_1[0x2a] << 0x18;
      uVar3 = *(uint *)((int)this + 0x2a) | (uint)param_1[0x2b] << 0x10;
      *(uint *)((int)this + 0x2a) = uVar3;
      uVar3 = uVar3 | (uint)param_1[0x2c] << 8;
      *(uint *)((int)this + 0x2a) = uVar3;
      *(uint *)((int)this + 0x2a) = uVar3 | param_1[0x2d];
      *(ushort *)((int)this + 0x2e) = (ushort)param_1[0x2e] << 8;
      *(ushort *)((int)this + 0x2e) = *(ushort *)((int)this + 0x2e) | (ushort)param_1[0x2f];
      *(ushort *)((int)this + 0x30) = (ushort)param_1[0x30] << 8;
      *(ushort *)((int)this + 0x30) = *(ushort *)((int)this + 0x30) | (ushort)param_1[0x31];
      return param_1 + 0x32;
    }
  }
  return pbVar2;
}


