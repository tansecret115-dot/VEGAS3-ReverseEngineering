/* Module: rmto3260.dll
   Function: FUN_662c7940
   Address: 662c7940
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * __thiscall FUN_662c7940(void *this,byte *param_1,uint param_2)

{
  ushort *puVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (param_2 == 0) {
    return (byte *)0x0;
  }
  bVar2 = *param_1;
  *(ushort *)this = (ushort)bVar2 << 8;
  *(ushort *)this = CONCAT11(bVar2,param_1[1]);
  *(ushort *)((int)this + 2) = (ushort)param_1[2] << 8;
  *(ushort *)((int)this + 2) = *(ushort *)((int)this + 2) | (ushort)param_1[3];
  *(ushort *)((int)this + 4) = (ushort)param_1[4] << 8;
  *(ushort *)((int)this + 4) = *(ushort *)((int)this + 4) | (ushort)param_1[5];
  *(ushort *)((int)this + 6) = (ushort)param_1[6] << 8;
  *(ushort *)((int)this + 6) = *(ushort *)((int)this + 6) | (ushort)param_1[7];
  *(uint *)((int)this + 8) = (uint)param_1[8] << 0x18;
  uVar5 = *(uint *)((int)this + 8) | (uint)param_1[9] << 0x10;
  *(uint *)((int)this + 8) = uVar5;
  uVar5 = uVar5 | (uint)param_1[10] << 8;
  *(uint *)((int)this + 8) = uVar5;
  *(uint *)((int)this + 8) = uVar5 | param_1[0xb];
  *(uint *)((int)this + 0xc) = (uint)param_1[0xc] << 0x18;
  uVar5 = *(uint *)((int)this + 0xc) | (uint)param_1[0xd] << 0x10;
  *(uint *)((int)this + 0xc) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0xe] << 8;
  *(uint *)((int)this + 0xc) = uVar5;
  *(uint *)((int)this + 0xc) = uVar5 | param_1[0xf];
  *(uint *)((int)this + 0x10) = (uint)param_1[0x10] << 0x18;
  uVar5 = *(uint *)((int)this + 0x10) | (uint)param_1[0x11] << 0x10;
  *(uint *)((int)this + 0x10) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x12] << 8;
  *(uint *)((int)this + 0x10) = uVar5;
  *(uint *)((int)this + 0x10) = uVar5 | param_1[0x13];
  *(uint *)((int)this + 0x14) = (uint)param_1[0x14] << 0x18;
  uVar5 = *(uint *)((int)this + 0x14) | (uint)param_1[0x15] << 0x10;
  *(uint *)((int)this + 0x14) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x16] << 8;
  *(uint *)((int)this + 0x14) = uVar5;
  *(uint *)((int)this + 0x14) = uVar5 | param_1[0x17];
  *(ushort *)((int)this + 0x18) = (ushort)param_1[0x18] << 8;
  *(ushort *)((int)this + 0x18) = *(ushort *)((int)this + 0x18) | (ushort)param_1[0x19];
  *(ushort *)((int)this + 0x1a) = (ushort)param_1[0x1a] << 8;
  *(ushort *)((int)this + 0x1a) = *(ushort *)((int)this + 0x1a) | (ushort)param_1[0x1b];
  *(ushort *)((int)this + 0x1c) = (ushort)param_1[0x1c] << 8;
  *(ushort *)((int)this + 0x1c) = *(ushort *)((int)this + 0x1c) | (ushort)param_1[0x1d];
  *(uint *)((int)this + 0x1e) = (uint)param_1[0x1e] << 0x18;
  uVar5 = *(uint *)((int)this + 0x1e) | (uint)param_1[0x1f] << 0x10;
  *(uint *)((int)this + 0x1e) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x20] << 8;
  *(uint *)((int)this + 0x1e) = uVar5;
  *(uint *)((int)this + 0x1e) = uVar5 | param_1[0x21];
  *(uint *)((int)this + 0x22) = (uint)param_1[0x22] << 0x18;
  uVar5 = *(uint *)((int)this + 0x22) | (uint)param_1[0x23] << 0x10;
  *(uint *)((int)this + 0x22) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x24] << 8;
  *(uint *)((int)this + 0x22) = uVar5;
  *(uint *)((int)this + 0x22) = uVar5 | param_1[0x25];
  *(uint *)((int)this + 0x26) = (uint)param_1[0x26] << 0x18;
  uVar5 = *(uint *)((int)this + 0x26) | (uint)param_1[0x27] << 0x10;
  *(uint *)((int)this + 0x26) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x28] << 8;
  *(uint *)((int)this + 0x26) = uVar5;
  *(uint *)((int)this + 0x26) = uVar5 | param_1[0x29];
  *(ushort *)((int)this + 0x2a) = (ushort)param_1[0x2a] << 8;
  *(ushort *)((int)this + 0x2a) = *(ushort *)((int)this + 0x2a) | (ushort)param_1[0x2b];
  *(ushort *)((int)this + 0x2c) = (ushort)param_1[0x2c] << 8;
  *(ushort *)((int)this + 0x2c) = *(ushort *)((int)this + 0x2c) | (ushort)param_1[0x2d];
  if ((int)param_2 < (int)(param_1 + 0x2e + (4 - (int)param_1))) {
    return (byte *)0x0;
  }
  *(undefined4 *)((int)this + 0x2e) = *(undefined4 *)(param_1 + 0x2e);
  if ((int)param_2 < (int)(param_1 + 0x32 + (4 - (int)param_1))) {
    return (byte *)0x0;
  }
  *(undefined4 *)((int)this + 0x32) = *(undefined4 *)(param_1 + 0x32);
  *(byte *)((int)this + 0x36) = param_1[0x36];
  *(byte *)((int)this + 0x37) = param_1[0x37];
  *(byte *)((int)this + 0x38) = param_1[0x38];
  bVar2 = param_1[0x39];
  pbVar6 = param_1 + 0x3a;
  *(byte *)((int)this + 0x39) = bVar2;
  if (bVar2 != 0) {
    pvVar3 = operator_new((int)((ulonglong)*(ushort *)((int)this + 0x1a) /
                               (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0x1c)) *
                          (uint)*(ushort *)((int)this + 0x18) * 2);
    *(void **)((int)this + 0x3a) = pvVar3;
    iVar4 = 0;
    if (0 < (int)((int)((ulonglong)*(ushort *)((int)this + 0x1a) /
                       (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0x1c)) *
                 (uint)*(ushort *)((int)this + 0x18))) {
      do {
        *(ushort *)(*(int *)((int)this + 0x3a) + iVar4 * 2) = (ushort)*pbVar6 << 8;
        puVar1 = (ushort *)(*(int *)((int)this + 0x3a) + iVar4 * 2);
        *puVar1 = *puVar1 | (ushort)pbVar6[1];
        pbVar6 = pbVar6 + 2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)((int)((ulonglong)*(ushort *)((int)this + 0x1a) /
                                  (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0x1c)) *
                            (uint)*(ushort *)((int)this + 0x18)));
    }
  }
  *(uint *)((int)this + 0x3e) = (uint)*pbVar6 << 0x18;
  uVar5 = *(uint *)((int)this + 0x3e) | (uint)pbVar6[1] << 0x10;
  *(uint *)((int)this + 0x3e) = uVar5;
  uVar5 = uVar5 | (uint)pbVar6[2] << 8;
  *(uint *)((int)this + 0x3e) = uVar5;
  uVar5 = uVar5 | pbVar6[3];
  pbVar6 = pbVar6 + 4;
  *(uint *)((int)this + 0x3e) = uVar5;
  if ((uint)((int)(pbVar6 + uVar5) - (int)param_1) <= param_2) {
    *(byte **)((int)this + 0x42) = pbVar6;
    return pbVar6 + uVar5;
  }
  return (byte *)0x0;
}


