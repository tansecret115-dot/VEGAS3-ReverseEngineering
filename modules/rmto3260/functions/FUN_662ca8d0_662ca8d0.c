/* Module: rmto3260.dll
   Function: FUN_662ca8d0
   Address: 662ca8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * __thiscall FUN_662ca8d0(void *this,byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    bVar1 = *param_1;
    *(uint *)this = (uint)bVar1 << 0x18;
    *(uint *)this = (uint)param_1[1] << 0x10 | (uint)bVar1 << 0x18;
    uVar4 = *(uint *)this | (uint)param_1[2] << 8;
    *(uint *)this = uVar4;
    *(uint *)this = uVar4 | param_1[3];
    *(uint *)((int)this + 4) = (uint)param_1[4] << 0x18;
    uVar4 = *(uint *)((int)this + 4) | (uint)param_1[5] << 0x10;
    *(uint *)((int)this + 4) = uVar4;
    uVar4 = uVar4 | (uint)param_1[6] << 8;
    *(uint *)((int)this + 4) = uVar4;
    *(uint *)((int)this + 4) = uVar4 | param_1[7];
    *(ushort *)((int)this + 8) = (ushort)param_1[8] << 8;
    *(ushort *)((int)this + 8) = *(ushort *)((int)this + 8) | (ushort)param_1[9];
    if (*(short *)((int)this + 8) != 0) {
      return param_1 + 10;
    }
    *(ushort *)((int)this + 10) = (ushort)param_1[10] << 8;
    *(ushort *)((int)this + 10) = *(ushort *)((int)this + 10) | (ushort)param_1[0xb];
    *(uint *)((int)this + 0xc) = (uint)param_1[0xc] << 0x18;
    uVar4 = *(uint *)((int)this + 0xc) | (uint)param_1[0xd] << 0x10;
    *(uint *)((int)this + 0xc) = uVar4;
    uVar4 = uVar4 | (uint)param_1[0xe] << 8;
    *(uint *)((int)this + 0xc) = uVar4;
    *(uint *)((int)this + 0xc) = uVar4 | param_1[0xf];
    *(uint *)((int)this + 0x10) = (uint)param_1[0x10] << 0x18;
    uVar4 = *(uint *)((int)this + 0x10) | (uint)param_1[0x11] << 0x10;
    *(uint *)((int)this + 0x10) = uVar4;
    uVar4 = uVar4 | (uint)param_1[0x12] << 8;
    *(uint *)((int)this + 0x10) = uVar4;
    *(uint *)((int)this + 0x10) = uVar4 | param_1[0x13];
    *(uint *)((int)this + 0x14) = (uint)param_1[0x14] << 0x18;
    uVar4 = *(uint *)((int)this + 0x14) | (uint)param_1[0x15] << 0x10;
    *(uint *)((int)this + 0x14) = uVar4;
    uVar4 = uVar4 | (uint)param_1[0x16] << 8;
    *(uint *)((int)this + 0x14) = uVar4;
    *(uint *)((int)this + 0x14) = uVar4 | param_1[0x17];
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
    pbVar2 = param_1 + 0x29;
    *(byte *)((int)this + 0x28) = param_1[0x28];
    if ((int)(pbVar2 + ((uint)*(byte *)((int)this + 0x28) - (int)param_1)) <= (int)param_2) {
      *(byte **)((int)this + 0x29) = pbVar2;
      pbVar3 = pbVar2 + *(byte *)((int)this + 0x28) + 1;
      *(byte *)((int)this + 0x2d) = pbVar2[*(byte *)((int)this + 0x28)];
      if ((int)(pbVar3 + ((uint)*(byte *)((int)this + 0x2d) - (int)param_1)) <= (int)param_2) {
        *(byte **)((int)this + 0x2e) = pbVar3;
        pbVar3 = pbVar3 + *(byte *)((int)this + 0x2d);
        *(uint *)((int)this + 0x32) = (uint)*pbVar3 << 0x18;
        uVar4 = *(uint *)((int)this + 0x32) | (uint)pbVar3[1] << 0x10;
        *(uint *)((int)this + 0x32) = uVar4;
        uVar4 = uVar4 | (uint)pbVar3[2] << 8;
        *(uint *)((int)this + 0x32) = uVar4;
        uVar4 = uVar4 | pbVar3[3];
        pbVar3 = pbVar3 + 4;
        *(uint *)((int)this + 0x32) = uVar4;
        if (pbVar3 + (uVar4 - (int)param_1) <= param_2) {
          *(byte **)((int)this + 0x36) = pbVar3;
          return pbVar3 + uVar4;
        }
      }
    }
  }
  return (byte *)0x0;
}


