/* Module: rmto3260.dll
   Function: FUN_662e0600
   Address: 662e0600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662e0600(void *this,byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = (**(code **)(*(int *)this + 0xc))();
  if (param_2 < uVar2) {
    uVar3 = 0x8007000e;
  }
  else if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    bVar1 = *param_1;
    *(uint *)((int)this + 8) = (uint)bVar1 << 0x18;
    uVar2 = (uint)param_1[1] << 0x10 | (uint)bVar1 << 0x18;
    *(uint *)((int)this + 8) = uVar2;
    *(uint *)((int)this + 8) = uVar2 | (uint)param_1[2] << 8;
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | (uint)param_1[3];
    bVar1 = param_1[4];
    *(uint *)((int)this + 0xc) = (uint)bVar1 << 0x18;
    *(uint *)((int)this + 0xc) = (uint)bVar1 << 0x18 | (uint)param_1[5] << 0x10;
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | (uint)param_1[6] << 8;
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | (uint)param_1[7];
    *(ushort *)((int)this + 0x10) = (ushort)param_1[8] << 8;
    *(ushort *)((int)this + 0x10) = *(ushort *)((int)this + 0x10) | (ushort)param_1[9];
    if ((*(short *)((int)this + 0x10) == 0) || (*(short *)((int)this + 0x10) == 1)) {
      bVar1 = param_1[10];
      *(uint *)((int)this + 0x12) = (uint)bVar1 << 0x18;
      *(uint *)((int)this + 0x12) = (uint)bVar1 << 0x18 | (uint)param_1[0xb] << 0x10;
      *(uint *)((int)this + 0x12) = *(uint *)((int)this + 0x12) | (uint)param_1[0xc] << 8;
      *(uint *)((int)this + 0x12) = *(uint *)((int)this + 0x12) | (uint)param_1[0xd];
      bVar1 = param_1[0xe];
      *(uint *)((int)this + 0x16) = (uint)bVar1 << 0x18;
      *(uint *)((int)this + 0x16) = (uint)bVar1 << 0x18 | (uint)param_1[0xf] << 0x10;
      *(uint *)((int)this + 0x16) = *(uint *)((int)this + 0x16) | (uint)param_1[0x10] << 8;
      *(uint *)((int)this + 0x16) = *(uint *)((int)this + 0x16) | (uint)param_1[0x11];
      return 0;
    }
  }
  return uVar3;
}


