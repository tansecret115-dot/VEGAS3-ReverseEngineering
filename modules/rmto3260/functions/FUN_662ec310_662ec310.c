/* Module: rmto3260.dll
   Function: FUN_662ec310
   Address: 662ec310
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * __thiscall FUN_662ec310(void *this,byte *param_1,int param_2)

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
      return param_1 + 0x12;
    }
  }
  return pbVar2;
}


