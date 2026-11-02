/* Module: rmto3260.dll
   Function: FUN_662c6890
   Address: 662c6890
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * __thiscall FUN_662c6890(void *this,byte *param_1,int param_2)

{
  ushort *puVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    bVar2 = *param_1;
    *(uint *)this = (uint)bVar2 << 0x18;
    uVar5 = (uint)param_1[1] << 0x10 | (uint)bVar2 << 0x18;
    *(uint *)this = uVar5;
    uVar5 = uVar5 | (uint)param_1[2] << 8;
    *(uint *)this = uVar5;
    *(uint *)this = uVar5 | param_1[3];
    bVar2 = param_1[4];
    *(uint *)((int)this + 4) = (uint)bVar2 << 0x18;
    *(uint *)((int)this + 4) = (uint)bVar2 << 0x18 | (uint)param_1[5] << 0x10;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | (uint)param_1[6] << 8;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | (uint)param_1[7];
    *(ushort *)((int)this + 8) = (ushort)param_1[8] << 8;
    *(ushort *)((int)this + 8) = *(ushort *)((int)this + 8) | (ushort)param_1[9];
    *(ushort *)((int)this + 10) = (ushort)param_1[10] << 8;
    *(ushort *)((int)this + 10) = *(ushort *)((int)this + 10) | (ushort)param_1[0xb];
    pbVar6 = param_1 + 0xc;
    pvVar3 = operator_new((uint)*(ushort *)((int)this + 10) << 1);
    *(void **)((int)this + 0xc) = pvVar3;
    iVar4 = 0;
    if (*(short *)((int)this + 10) != 0) {
      do {
        *(ushort *)(*(int *)((int)this + 0xc) + iVar4 * 2) = (ushort)*pbVar6 << 8;
        puVar1 = (ushort *)(*(int *)((int)this + 0xc) + iVar4 * 2);
        *puVar1 = *puVar1 | (ushort)pbVar6[1];
        pbVar6 = pbVar6 + 2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)*(ushort *)((int)this + 10));
    }
    *(ushort *)((int)this + 0x10) = (ushort)*pbVar6 << 8;
    *(ushort *)((int)this + 0x10) = *(ushort *)((int)this + 0x10) | (ushort)pbVar6[1];
    bVar2 = pbVar6[2];
    *(uint *)((int)this + 0x12) = (uint)bVar2 << 0x18;
    *(uint *)((int)this + 0x12) = (uint)bVar2 << 0x18 | (uint)pbVar6[3] << 0x10;
    *(uint *)((int)this + 0x12) = *(uint *)((int)this + 0x12) | (uint)pbVar6[4] << 8;
    *(uint *)((int)this + 0x12) = *(uint *)((int)this + 0x12) | (uint)pbVar6[5];
    *(ushort *)((int)this + 0x16) = (ushort)pbVar6[6] << 8;
    *(ushort *)((int)this + 0x16) = *(ushort *)((int)this + 0x16) | (ushort)pbVar6[7];
    pbVar6 = pbVar6 + 8;
    if ((int)(pbVar6 + ((uint)*(ushort *)((int)this + 0x16) - (int)param_1)) <= param_2) {
      *(byte **)((int)this + 0x18) = pbVar6;
      pbVar6 = pbVar6 + *(ushort *)((int)this + 0x16);
      *(ushort *)((int)this + 0x1c) = (ushort)*pbVar6 << 8;
      *(ushort *)((int)this + 0x1c) = *(ushort *)((int)this + 0x1c) | (ushort)pbVar6[1];
      pbVar6 = pbVar6 + 2;
      if ((int)(pbVar6 + ((uint)*(ushort *)((int)this + 0x1c) - (int)param_1)) <= param_2) {
        *(byte **)((int)this + 0x1e) = pbVar6;
        return pbVar6 + *(ushort *)((int)this + 0x1c);
      }
    }
  }
  return (byte *)0x0;
}


