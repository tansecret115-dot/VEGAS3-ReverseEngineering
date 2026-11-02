/* Module: rmme3260.dll
   Function: FUN_6621cd90
   Address: 6621cd90
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * __thiscall FUN_6621cd90(void *this,byte *param_1,byte *param_2)

{
  ushort *puVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  bVar2 = *param_1;
  *(uint *)this = (uint)bVar2 << 0x18;
  uVar5 = (uint)param_1[1] << 0x10 | (uint)bVar2 << 0x18;
  *(uint *)this = uVar5;
  uVar5 = uVar5 | (uint)param_1[2] << 8;
  *(uint *)this = uVar5;
  *(uint *)this = uVar5 | param_1[3];
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
  *(ushort *)((int)this + 0x10) = (ushort)param_1[0x10] << 8;
  *(ushort *)((int)this + 0x10) = *(ushort *)((int)this + 0x10) | (ushort)param_1[0x11];
  *(ushort *)((int)this + 0x12) = (ushort)param_1[0x12] << 8;
  *(ushort *)((int)this + 0x12) = *(ushort *)((int)this + 0x12) | (ushort)param_1[0x13];
  *(ushort *)((int)this + 0x14) = (ushort)param_1[0x14] << 8;
  *(ushort *)((int)this + 0x14) = *(ushort *)((int)this + 0x14) | (ushort)param_1[0x15];
  *(ushort *)((int)this + 0x16) = (ushort)param_1[0x16] << 8;
  *(ushort *)((int)this + 0x16) = *(ushort *)((int)this + 0x16) | (ushort)param_1[0x17];
  *(uint *)((int)this + 0x18) = (uint)param_1[0x18] << 0x18;
  uVar5 = *(uint *)((int)this + 0x18) | (uint)param_1[0x19] << 0x10;
  *(uint *)((int)this + 0x18) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x1a] << 8;
  *(uint *)((int)this + 0x18) = uVar5;
  *(uint *)((int)this + 0x18) = uVar5 | param_1[0x1b];
  *(uint *)((int)this + 0x1c) = (uint)param_1[0x1c] << 0x18;
  uVar5 = *(uint *)((int)this + 0x1c) | (uint)param_1[0x1d] << 0x10;
  *(uint *)((int)this + 0x1c) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x1e] << 8;
  *(uint *)((int)this + 0x1c) = uVar5;
  *(uint *)((int)this + 0x1c) = uVar5 | param_1[0x1f];
  *(uint *)((int)this + 0x20) = (uint)param_1[0x20] << 0x18;
  uVar5 = *(uint *)((int)this + 0x20) | (uint)param_1[0x21] << 0x10;
  *(uint *)((int)this + 0x20) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x22] << 8;
  *(uint *)((int)this + 0x20) = uVar5;
  *(uint *)((int)this + 0x20) = uVar5 | param_1[0x23];
  *(uint *)((int)this + 0x24) = (uint)param_1[0x24] << 0x18;
  uVar5 = *(uint *)((int)this + 0x24) | (uint)param_1[0x25] << 0x10;
  *(uint *)((int)this + 0x24) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x26] << 8;
  *(uint *)((int)this + 0x24) = uVar5;
  *(uint *)((int)this + 0x24) = uVar5 | param_1[0x27];
  *(ushort *)((int)this + 0x28) = (ushort)param_1[0x28] << 8;
  *(ushort *)((int)this + 0x28) = *(ushort *)((int)this + 0x28) | (ushort)param_1[0x29];
  *(ushort *)((int)this + 0x2a) = (ushort)param_1[0x2a] << 8;
  *(ushort *)((int)this + 0x2a) = *(ushort *)((int)this + 0x2a) | (ushort)param_1[0x2b];
  *(ushort *)((int)this + 0x2c) = (ushort)param_1[0x2c] << 8;
  *(ushort *)((int)this + 0x2c) = *(ushort *)((int)this + 0x2c) | (ushort)param_1[0x2d];
  *(uint *)((int)this + 0x2e) = (uint)param_1[0x2e] << 0x18;
  uVar5 = *(uint *)((int)this + 0x2e) | (uint)param_1[0x2f] << 0x10;
  *(uint *)((int)this + 0x2e) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x30] << 8;
  *(uint *)((int)this + 0x2e) = uVar5;
  *(uint *)((int)this + 0x2e) = uVar5 | param_1[0x31];
  *(uint *)((int)this + 0x32) = (uint)param_1[0x32] << 0x18;
  uVar5 = *(uint *)((int)this + 0x32) | (uint)param_1[0x33] << 0x10;
  *(uint *)((int)this + 0x32) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x34] << 8;
  *(uint *)((int)this + 0x32) = uVar5;
  *(uint *)((int)this + 0x32) = uVar5 | param_1[0x35];
  *(uint *)((int)this + 0x36) = (uint)param_1[0x36] << 0x18;
  uVar5 = *(uint *)((int)this + 0x36) | (uint)param_1[0x37] << 0x10;
  *(uint *)((int)this + 0x36) = uVar5;
  uVar5 = uVar5 | (uint)param_1[0x38] << 8;
  *(uint *)((int)this + 0x36) = uVar5;
  *(uint *)((int)this + 0x36) = uVar5 | param_1[0x39];
  *(ushort *)((int)this + 0x3a) = (ushort)param_1[0x3a] << 8;
  *(ushort *)((int)this + 0x3a) = *(ushort *)((int)this + 0x3a) | (ushort)param_1[0x3b];
  *(ushort *)((int)this + 0x3c) = (ushort)param_1[0x3c] << 8;
  *(ushort *)((int)this + 0x3c) = *(ushort *)((int)this + 0x3c) | (ushort)param_1[0x3d];
  if ((int)param_2 < (int)(param_1 + 0x3e + (4 - (int)param_1))) {
    return (byte *)0x0;
  }
  *(undefined4 *)((int)this + 0x3e) = *(undefined4 *)(param_1 + 0x3e);
  if ((int)param_2 < (int)(param_1 + 0x42 + (4 - (int)param_1))) {
    return (byte *)0x0;
  }
  *(undefined4 *)((int)this + 0x42) = *(undefined4 *)(param_1 + 0x42);
  *(byte *)((int)this + 0x46) = param_1[0x46];
  *(byte *)((int)this + 0x47) = param_1[0x47];
  *(byte *)((int)this + 0x48) = param_1[0x48];
  bVar2 = param_1[0x49];
  pbVar6 = param_1 + 0x4a;
  *(byte *)((int)this + 0x49) = bVar2;
  if (bVar2 != 0) {
    pvVar3 = operator_new((int)((ulonglong)*(ushort *)((int)this + 0x2a) /
                               (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0x2c)) *
                          (uint)*(ushort *)((int)this + 0x28) * 2);
    *(void **)((int)this + 0x4a) = pvVar3;
    iVar4 = 0;
    if (0 < (int)((int)((ulonglong)*(ushort *)((int)this + 0x2a) /
                       (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0x2c)) *
                 (uint)*(ushort *)((int)this + 0x28))) {
      do {
        *(ushort *)(*(int *)((int)this + 0x4a) + iVar4 * 2) = (ushort)*pbVar6 << 8;
        puVar1 = (ushort *)(*(int *)((int)this + 0x4a) + iVar4 * 2);
        *puVar1 = *puVar1 | (ushort)pbVar6[1];
        pbVar6 = pbVar6 + 2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)((int)((ulonglong)*(ushort *)((int)this + 0x2a) /
                                  (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0x2c)) *
                            (uint)*(ushort *)((int)this + 0x28)));
    }
  }
  *(uint *)((int)this + 0x4e) = (uint)*pbVar6 << 0x18;
  uVar5 = *(uint *)((int)this + 0x4e) | (uint)pbVar6[1] << 0x10;
  *(uint *)((int)this + 0x4e) = uVar5;
  uVar5 = uVar5 | (uint)pbVar6[2] << 8;
  *(uint *)((int)this + 0x4e) = uVar5;
  uVar5 = uVar5 | pbVar6[3];
  pbVar6 = pbVar6 + 4;
  *(uint *)((int)this + 0x4e) = uVar5;
  if (pbVar6 + (uVar5 - (int)param_1) <= param_2) {
    *(byte **)((int)this + 0x52) = pbVar6;
    return pbVar6 + uVar5;
  }
  return (byte *)0x0;
}


