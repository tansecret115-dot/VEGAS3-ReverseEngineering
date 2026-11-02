/* Module: rmto3260.dll
   Function: FUN_662e2170
   Address: 662e2170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662e2170(void *this,undefined4 *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (*(void **)((int)this + 0x38) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  puVar5 = operator_new(param_2);
  *(undefined4 **)((int)this + 0x38) = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  for (uVar6 = param_2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  pbVar4 = *(byte **)((int)this + 0x38);
  if (param_2 != 0) {
    bVar3 = *pbVar4;
    *(uint *)((int)this + 8) = (uint)bVar3 << 0x18;
    uVar6 = (uint)pbVar4[1] << 0x10 | (uint)bVar3 << 0x18;
    *(uint *)((int)this + 8) = uVar6;
    *(uint *)((int)this + 8) = uVar6 | (uint)pbVar4[2] << 8;
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | (uint)pbVar4[3];
    *(ushort *)((int)this + 0xc) = (ushort)pbVar4[4] << 8;
    *(ushort *)((int)this + 0xc) = *(ushort *)((int)this + 0xc) | (ushort)pbVar4[5];
    *(ushort *)((int)this + 0xe) = (ushort)pbVar4[6] << 8;
    *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) | (ushort)pbVar4[7];
    *(ushort *)((int)this + 0x10) = (ushort)pbVar4[8] << 8;
    *(ushort *)((int)this + 0x10) = *(ushort *)((int)this + 0x10) | (ushort)pbVar4[9];
    bVar3 = pbVar4[10];
    *(uint *)((int)this + 0x12) = (uint)bVar3 << 0x18;
    *(uint *)((int)this + 0x12) = (uint)bVar3 << 0x18 | (uint)pbVar4[0xb] << 0x10;
    *(uint *)((int)this + 0x12) = *(uint *)((int)this + 0x12) | (uint)pbVar4[0xc] << 8;
    *(uint *)((int)this + 0x12) = *(uint *)((int)this + 0x12) | (uint)pbVar4[0xd];
    bVar3 = pbVar4[0xe];
    *(uint *)((int)this + 0x16) = (uint)bVar3 << 0x18;
    *(uint *)((int)this + 0x16) = (uint)bVar3 << 0x18 | (uint)pbVar4[0xf] << 0x10;
    *(uint *)((int)this + 0x16) = *(uint *)((int)this + 0x16) | (uint)pbVar4[0x10] << 8;
    *(uint *)((int)this + 0x16) = *(uint *)((int)this + 0x16) | (uint)pbVar4[0x11];
    bVar3 = pbVar4[0x12];
    *(uint *)((int)this + 0x1a) = (uint)bVar3 << 0x18;
    *(uint *)((int)this + 0x1a) = (uint)bVar3 << 0x18 | (uint)pbVar4[0x13] << 0x10;
    *(uint *)((int)this + 0x1a) = *(uint *)((int)this + 0x1a) | (uint)pbVar4[0x14] << 8;
    *(uint *)((int)this + 0x1a) = *(uint *)((int)this + 0x1a) | (uint)pbVar4[0x15];
    bVar3 = pbVar4[0x16];
    *(byte *)((int)this + 0x1e) = bVar3;
    pbVar1 = pbVar4 + 0x17 + bVar3;
    if ((int)pbVar1 - (int)pbVar4 <= (int)param_2) {
      *(byte **)((int)this + 0x1f) = pbVar4 + 0x17;
      bVar3 = *pbVar1;
      *(byte *)((int)this + 0x23) = bVar3;
      pbVar2 = pbVar1 + 1 + bVar3;
      if ((int)pbVar2 - (int)pbVar4 <= (int)param_2) {
        *(byte **)((int)this + 0x24) = pbVar1 + 1;
        bVar3 = *pbVar2;
        *(byte *)((int)this + 0x28) = bVar3;
        pbVar1 = pbVar2 + 1 + bVar3;
        if ((int)pbVar1 - (int)pbVar4 <= (int)param_2) {
          *(byte **)((int)this + 0x29) = pbVar2 + 1;
          bVar3 = *pbVar1;
          *(byte *)((int)this + 0x2d) = bVar3;
          pbVar2 = pbVar1 + 1 + bVar3;
          if ((int)pbVar2 - (int)pbVar4 <= (int)param_2) {
            *(byte **)((int)this + 0x2e) = pbVar1 + 1;
            *(byte *)((int)this + 0x32) = *pbVar2;
            if ((int)(pbVar2 + 1 + (5 - (int)pbVar4)) <= (int)param_2) {
              *(undefined4 *)((int)this + 0x33) = *(undefined4 *)(pbVar2 + 1);
              *(byte *)((int)this + 0x37) = pbVar2[5];
            }
          }
        }
      }
    }
  }
  return 0;
}


