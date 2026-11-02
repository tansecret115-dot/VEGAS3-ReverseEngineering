/* Module: rmto3260.dll
   Function: FUN_662da7a0
   Address: 662da7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662da7a0(void *this,byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (*(void **)((int)this + 0x24) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  *(byte **)((int)this + 0x24) = param_1;
  *(byte **)((int)this + 0x28) = param_2;
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    bVar1 = *param_1;
    *(uint *)((int)this + 0x46) = (uint)bVar1 << 0x18;
    uVar4 = (uint)param_1[1] << 0x10 | (uint)bVar1 << 0x18;
    *(uint *)((int)this + 0x46) = uVar4;
    uVar4 = uVar4 | (uint)param_1[2] << 8;
    *(uint *)((int)this + 0x46) = uVar4;
    *(uint *)((int)this + 0x46) = uVar4 | param_1[3];
    *(uint *)((int)this + 0x4a) = (uint)param_1[4] << 0x18;
    uVar4 = *(uint *)((int)this + 0x4a) | (uint)param_1[5] << 0x10;
    *(uint *)((int)this + 0x4a) = uVar4;
    uVar4 = uVar4 | (uint)param_1[6] << 8;
    *(uint *)((int)this + 0x4a) = uVar4;
    *(uint *)((int)this + 0x4a) = uVar4 | param_1[7];
    *(ushort *)((int)this + 0x4e) = (ushort)param_1[8] << 8;
    *(ushort *)((int)this + 0x4e) = *(ushort *)((int)this + 0x4e) | (ushort)param_1[9];
    if (*(short *)((int)this + 0x4e) == 0) {
      *(ushort *)((int)this + 0x50) = (ushort)param_1[10] << 8;
      *(ushort *)((int)this + 0x50) = *(ushort *)((int)this + 0x50) | (ushort)param_1[0xb];
      *(uint *)((int)this + 0x52) = (uint)param_1[0xc] << 0x18;
      uVar4 = *(uint *)((int)this + 0x52) | (uint)param_1[0xd] << 0x10;
      *(uint *)((int)this + 0x52) = uVar4;
      uVar4 = uVar4 | (uint)param_1[0xe] << 8;
      *(uint *)((int)this + 0x52) = uVar4;
      *(uint *)((int)this + 0x52) = uVar4 | param_1[0xf];
      *(uint *)((int)this + 0x56) = (uint)param_1[0x10] << 0x18;
      uVar4 = *(uint *)((int)this + 0x56) | (uint)param_1[0x11] << 0x10;
      *(uint *)((int)this + 0x56) = uVar4;
      uVar4 = uVar4 | (uint)param_1[0x12] << 8;
      *(uint *)((int)this + 0x56) = uVar4;
      *(uint *)((int)this + 0x56) = uVar4 | param_1[0x13];
      *(uint *)((int)this + 0x5a) = (uint)param_1[0x14] << 0x18;
      uVar4 = *(uint *)((int)this + 0x5a) | (uint)param_1[0x15] << 0x10;
      *(uint *)((int)this + 0x5a) = uVar4;
      uVar4 = uVar4 | (uint)param_1[0x16] << 8;
      *(uint *)((int)this + 0x5a) = uVar4;
      *(uint *)((int)this + 0x5a) = uVar4 | param_1[0x17];
      *(uint *)((int)this + 0x5e) = (uint)param_1[0x18] << 0x18;
      uVar4 = *(uint *)((int)this + 0x5e) | (uint)param_1[0x19] << 0x10;
      *(uint *)((int)this + 0x5e) = uVar4;
      uVar4 = uVar4 | (uint)param_1[0x1a] << 8;
      *(uint *)((int)this + 0x5e) = uVar4;
      *(uint *)((int)this + 0x5e) = uVar4 | param_1[0x1b];
      *(uint *)((int)this + 0x62) = (uint)param_1[0x1c] << 0x18;
      uVar4 = *(uint *)((int)this + 0x62) | (uint)param_1[0x1d] << 0x10;
      *(uint *)((int)this + 0x62) = uVar4;
      uVar4 = uVar4 | (uint)param_1[0x1e] << 8;
      *(uint *)((int)this + 0x62) = uVar4;
      *(uint *)((int)this + 0x62) = uVar4 | param_1[0x1f];
      *(uint *)((int)this + 0x66) = (uint)param_1[0x20] << 0x18;
      uVar4 = *(uint *)((int)this + 0x66) | (uint)param_1[0x21] << 0x10;
      *(uint *)((int)this + 0x66) = uVar4;
      uVar4 = uVar4 | (uint)param_1[0x22] << 8;
      *(uint *)((int)this + 0x66) = uVar4;
      *(uint *)((int)this + 0x66) = uVar4 | param_1[0x23];
      *(uint *)((int)this + 0x6a) = (uint)param_1[0x24] << 0x18;
      uVar4 = *(uint *)((int)this + 0x6a) | (uint)param_1[0x25] << 0x10;
      *(uint *)((int)this + 0x6a) = uVar4;
      uVar4 = uVar4 | (uint)param_1[0x26] << 8;
      *(uint *)((int)this + 0x6a) = uVar4;
      *(uint *)((int)this + 0x6a) = uVar4 | param_1[0x27];
      *(byte *)((int)this + 0x6e) = param_1[0x28];
      pbVar3 = param_1 + 0x29 + *(byte *)((int)this + 0x6e);
      if ((int)pbVar3 - (int)param_1 <= (int)param_2) {
        *(byte **)((int)this + 0x6f) = param_1 + 0x29;
        *(byte *)((int)this + 0x73) = *pbVar3;
        pbVar2 = pbVar3 + 1 + *(byte *)((int)this + 0x73);
        if ((int)pbVar2 - (int)param_1 <= (int)param_2) {
          *(byte **)((int)this + 0x74) = pbVar3 + 1;
          *(uint *)((int)this + 0x78) = (uint)*pbVar2 << 0x18;
          uVar4 = *(uint *)((int)this + 0x78) | (uint)pbVar2[1] << 0x10;
          *(uint *)((int)this + 0x78) = uVar4;
          uVar4 = uVar4 | (uint)pbVar2[2] << 8;
          *(uint *)((int)this + 0x78) = uVar4;
          uVar4 = uVar4 | pbVar2[3];
          *(uint *)((int)this + 0x78) = uVar4;
          if (pbVar2 + 4 + (uVar4 - (int)param_1) <= param_2) {
            *(byte **)((int)this + 0x7c) = pbVar2 + 4;
          }
        }
      }
    }
  }
  return 0;
}


