/* Module: encn3260.dll
   Function: FUN_664dabb0
   Address: 664dabb0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * __thiscall FUN_664dabb0(void *this,byte *param_1,int param_2)

{
  byte bVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int local_8;
  
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    *(byte *)this = *param_1 >> 6;
    *(byte *)((int)this + 1) = *param_1 >> 5 & 1;
    *(byte *)((int)this + 2) = *param_1 & 0x1f;
    bVar1 = param_1[1];
    *(byte *)((int)this + 3) = bVar1;
    *(ushort *)((int)this + 4) = (ushort)param_1[2] << 8;
    *(ushort *)((int)this + 4) = *(ushort *)((int)this + 4) | (ushort)param_1[3];
    pbVar6 = param_1 + 4;
    if (bVar1 == 200) {
      bVar1 = *pbVar6;
      *(uint *)((int)this + 6) = (uint)bVar1 << 0x18;
      *(uint *)((int)this + 6) = (uint)bVar1 << 0x18 | (uint)param_1[5] << 0x10;
      *(uint *)((int)this + 6) = *(uint *)((int)this + 6) | (uint)param_1[6] << 8;
      *(uint *)((int)this + 6) = *(uint *)((int)this + 6) | (uint)param_1[7];
      bVar1 = param_1[8];
      *(uint *)((int)this + 10) = (uint)bVar1 << 0x18;
      uVar4 = (uint)bVar1 << 0x18 | (uint)param_1[9] << 0x10;
      *(uint *)((int)this + 10) = uVar4;
      uVar4 = uVar4 | (uint)param_1[10] << 8;
      *(uint *)((int)this + 10) = uVar4;
      *(uint *)((int)this + 10) = uVar4 | param_1[0xb];
      bVar1 = param_1[0xc];
      *(uint *)((int)this + 0xe) = (uint)bVar1 << 0x18;
      *(uint *)((int)this + 0xe) = (uint)bVar1 << 0x18 | (uint)param_1[0xd] << 0x10;
      *(uint *)((int)this + 0xe) = *(uint *)((int)this + 0xe) | (uint)param_1[0xe] << 8;
      *(uint *)((int)this + 0xe) = *(uint *)((int)this + 0xe) | (uint)param_1[0xf];
      bVar1 = param_1[0x10];
      *(uint *)((int)this + 0x12) = (uint)bVar1 << 0x18;
      uVar4 = (uint)bVar1 << 0x18 | (uint)param_1[0x11] << 0x10;
      *(uint *)((int)this + 0x12) = uVar4;
      uVar4 = uVar4 | (uint)param_1[0x12] << 8;
      *(uint *)((int)this + 0x12) = uVar4;
      *(uint *)((int)this + 0x12) = uVar4 | param_1[0x13];
      bVar1 = param_1[0x14];
      *(uint *)((int)this + 0x16) = (uint)bVar1 << 0x18;
      *(uint *)((int)this + 0x16) = (uint)bVar1 << 0x18 | (uint)param_1[0x15] << 0x10;
      *(uint *)((int)this + 0x16) = *(uint *)((int)this + 0x16) | (uint)param_1[0x16] << 8;
      *(uint *)((int)this + 0x16) = *(uint *)((int)this + 0x16) | (uint)param_1[0x17];
      bVar1 = param_1[0x18];
      *(uint *)((int)this + 0x1a) = (uint)bVar1 << 0x18;
      uVar4 = (uint)bVar1 << 0x18 | (uint)param_1[0x19] << 0x10;
      *(uint *)((int)this + 0x1a) = uVar4;
      uVar4 = uVar4 | (uint)param_1[0x1a] << 8;
      *(uint *)((int)this + 0x1a) = uVar4;
      *(uint *)((int)this + 0x1a) = uVar4 | param_1[0x1b];
      pbVar6 = param_1 + 0x1c;
      pvVar2 = operator_new((uint)*(byte *)((int)this + 2) * 0x19);
      *(void **)((int)this + 0x1e) = pvVar2;
      local_8 = 0;
      if (*(char *)((int)this + 2) != '\0') {
        iVar5 = 0;
        do {
          puVar3 = (uint *)(iVar5 + *(int *)((int)this + 0x1e));
          if (pbVar6 == (byte *)0x0) {
            pbVar6 = (byte *)0x0;
          }
          else {
            bVar1 = *pbVar6;
            *puVar3 = (uint)bVar1 << 0x18;
            uVar4 = (uint)pbVar6[1] << 0x10 | (uint)bVar1 << 0x18;
            *puVar3 = uVar4;
            uVar4 = uVar4 | (uint)pbVar6[2] << 8;
            *puVar3 = uVar4;
            *puVar3 = uVar4 | pbVar6[3];
            *(byte *)(puVar3 + 1) = pbVar6[4];
            *(uint *)((int)puVar3 + 5) = (uint)pbVar6[5] << 0x10;
            uVar4 = *(uint *)((int)puVar3 + 5) | (uint)pbVar6[6] << 8;
            *(uint *)((int)puVar3 + 5) = uVar4;
            *(uint *)((int)puVar3 + 5) = uVar4 | pbVar6[7];
            *(uint *)((int)puVar3 + 9) = (uint)pbVar6[8] << 0x18;
            uVar4 = *(uint *)((int)puVar3 + 9) | (uint)pbVar6[9] << 0x10;
            *(uint *)((int)puVar3 + 9) = uVar4;
            uVar4 = uVar4 | (uint)pbVar6[10] << 8;
            *(uint *)((int)puVar3 + 9) = uVar4;
            *(uint *)((int)puVar3 + 9) = uVar4 | pbVar6[0xb];
            *(uint *)((int)puVar3 + 0xd) = (uint)pbVar6[0xc] << 0x18;
            uVar4 = *(uint *)((int)puVar3 + 0xd) | (uint)pbVar6[0xd] << 0x10;
            *(uint *)((int)puVar3 + 0xd) = uVar4;
            uVar4 = uVar4 | (uint)pbVar6[0xe] << 8;
            *(uint *)((int)puVar3 + 0xd) = uVar4;
            *(uint *)((int)puVar3 + 0xd) = uVar4 | pbVar6[0xf];
            *(uint *)((int)puVar3 + 0x11) = (uint)pbVar6[0x10] << 0x18;
            uVar4 = *(uint *)((int)puVar3 + 0x11) | (uint)pbVar6[0x11] << 0x10;
            *(uint *)((int)puVar3 + 0x11) = uVar4;
            uVar4 = uVar4 | (uint)pbVar6[0x12] << 8;
            *(uint *)((int)puVar3 + 0x11) = uVar4;
            *(uint *)((int)puVar3 + 0x11) = uVar4 | pbVar6[0x13];
            *(uint *)((int)puVar3 + 0x15) = (uint)pbVar6[0x14] << 0x18;
            uVar4 = *(uint *)((int)puVar3 + 0x15) | (uint)pbVar6[0x15] << 0x10;
            *(uint *)((int)puVar3 + 0x15) = uVar4;
            uVar4 = uVar4 | (uint)pbVar6[0x16] << 8;
            pbVar7 = pbVar6 + 0x17;
            *(uint *)((int)puVar3 + 0x15) = uVar4;
            pbVar6 = pbVar6 + 0x18;
            *(uint *)((int)puVar3 + 0x15) = uVar4 | *pbVar7;
          }
          local_8 = local_8 + 1;
          iVar5 = iVar5 + 0x19;
        } while (local_8 < (int)(uint)*(byte *)((int)this + 2));
      }
    }
    if (*(char *)((int)this + 3) == -0x37) {
      bVar1 = *pbVar6;
      *(uint *)((int)this + 0x22) = (uint)bVar1 << 0x18;
      uVar4 = (uint)bVar1 << 0x18 | (uint)pbVar6[1] << 0x10;
      *(uint *)((int)this + 0x22) = uVar4;
      uVar4 = uVar4 | (uint)pbVar6[2] << 8;
      *(uint *)((int)this + 0x22) = uVar4;
      *(uint *)((int)this + 0x22) = uVar4 | pbVar6[3];
      pbVar6 = pbVar6 + 4;
      pvVar2 = operator_new((uint)*(byte *)((int)this + 2) * 0x19);
      *(void **)((int)this + 0x26) = pvVar2;
      local_8 = 0;
      if (*(char *)((int)this + 2) != '\0') {
        iVar5 = 0;
        do {
          puVar3 = (uint *)(iVar5 + *(int *)((int)this + 0x26));
          if (pbVar6 == (byte *)0x0) {
            pbVar6 = (byte *)0x0;
          }
          else {
            bVar1 = *pbVar6;
            *puVar3 = (uint)bVar1 << 0x18;
            uVar4 = (uint)pbVar6[1] << 0x10 | (uint)bVar1 << 0x18;
            *puVar3 = uVar4;
            uVar4 = uVar4 | (uint)pbVar6[2] << 8;
            *puVar3 = uVar4;
            *puVar3 = uVar4 | pbVar6[3];
            *(byte *)(puVar3 + 1) = pbVar6[4];
            *(uint *)((int)puVar3 + 5) = (uint)pbVar6[5] << 0x10;
            uVar4 = *(uint *)((int)puVar3 + 5) | (uint)pbVar6[6] << 8;
            *(uint *)((int)puVar3 + 5) = uVar4;
            *(uint *)((int)puVar3 + 5) = uVar4 | pbVar6[7];
            *(uint *)((int)puVar3 + 9) = (uint)pbVar6[8] << 0x18;
            uVar4 = *(uint *)((int)puVar3 + 9) | (uint)pbVar6[9] << 0x10;
            *(uint *)((int)puVar3 + 9) = uVar4;
            uVar4 = uVar4 | (uint)pbVar6[10] << 8;
            *(uint *)((int)puVar3 + 9) = uVar4;
            *(uint *)((int)puVar3 + 9) = uVar4 | pbVar6[0xb];
            *(uint *)((int)puVar3 + 0xd) = (uint)pbVar6[0xc] << 0x18;
            uVar4 = *(uint *)((int)puVar3 + 0xd) | (uint)pbVar6[0xd] << 0x10;
            *(uint *)((int)puVar3 + 0xd) = uVar4;
            uVar4 = uVar4 | (uint)pbVar6[0xe] << 8;
            *(uint *)((int)puVar3 + 0xd) = uVar4;
            *(uint *)((int)puVar3 + 0xd) = uVar4 | pbVar6[0xf];
            *(uint *)((int)puVar3 + 0x11) = (uint)pbVar6[0x10] << 0x18;
            uVar4 = *(uint *)((int)puVar3 + 0x11) | (uint)pbVar6[0x11] << 0x10;
            *(uint *)((int)puVar3 + 0x11) = uVar4;
            uVar4 = uVar4 | (uint)pbVar6[0x12] << 8;
            *(uint *)((int)puVar3 + 0x11) = uVar4;
            *(uint *)((int)puVar3 + 0x11) = uVar4 | pbVar6[0x13];
            *(uint *)((int)puVar3 + 0x15) = (uint)pbVar6[0x14] << 0x18;
            uVar4 = *(uint *)((int)puVar3 + 0x15) | (uint)pbVar6[0x15] << 0x10;
            *(uint *)((int)puVar3 + 0x15) = uVar4;
            uVar4 = uVar4 | (uint)pbVar6[0x16] << 8;
            pbVar7 = pbVar6 + 0x17;
            *(uint *)((int)puVar3 + 0x15) = uVar4;
            pbVar6 = pbVar6 + 0x18;
            *(uint *)((int)puVar3 + 0x15) = uVar4 | *pbVar7;
          }
          local_8 = local_8 + 1;
          iVar5 = iVar5 + 0x19;
        } while (local_8 < (int)(uint)*(byte *)((int)this + 2));
      }
    }
    if (*(char *)((int)this + 3) == -0x36) {
      iVar5 = (uint)*(ushort *)((int)this + 4) * 4;
      if (param_2 < (int)(pbVar6 + (iVar5 - (int)param_1))) {
        return (byte *)0x0;
      }
      *(byte **)((int)this + 0x2a) = pbVar6;
      pbVar6 = pbVar6 + iVar5;
    }
    if (*(char *)((int)this + 3) == -0x35) {
      pvVar2 = operator_new((uint)*(byte *)((int)this + 2) << 2);
      *(void **)((int)this + 0x2e) = pvVar2;
      iVar5 = 0;
      if (*(char *)((int)this + 2) != '\0') {
        do {
          *(uint *)(*(int *)((int)this + 0x2e) + iVar5 * 4) = (uint)*pbVar6 << 0x18;
          *(uint *)(*(int *)((int)this + 0x2e) + iVar5 * 4) =
               *(uint *)(*(int *)((int)this + 0x2e) + iVar5 * 4) | (uint)pbVar6[1] << 0x10;
          pbVar7 = pbVar6 + 3;
          *(uint *)(*(int *)((int)this + 0x2e) + iVar5 * 4) =
               *(uint *)(*(int *)((int)this + 0x2e) + iVar5 * 4) | (uint)pbVar6[2] << 8;
          pbVar6 = pbVar6 + 4;
          *(uint *)(*(int *)((int)this + 0x2e) + iVar5 * 4) =
               *(uint *)(*(int *)((int)this + 0x2e) + iVar5 * 4) | (uint)*pbVar7;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)*(byte *)((int)this + 2));
      }
    }
    if (*(char *)((int)this + 3) != -0x34) {
      return pbVar6;
    }
    bVar1 = *pbVar6;
    *(uint *)((int)this + 0x32) = (uint)bVar1 << 0x18;
    *(uint *)((int)this + 0x32) = (uint)bVar1 << 0x18 | (uint)pbVar6[1] << 0x10;
    uVar4 = *(uint *)((int)this + 0x32) | (uint)pbVar6[2] << 8;
    *(uint *)((int)this + 0x32) = uVar4;
    *(uint *)((int)this + 0x32) = uVar4 | pbVar6[3];
    if ((int)(pbVar6 + 4 + (4 - (int)param_1)) <= param_2) {
      pbVar7 = pbVar6 + 8;
      *(undefined4 *)((int)this + 0x36) = *(undefined4 *)(pbVar6 + 4);
      iVar5 = (uint)*(ushort *)((int)this + 4) * 4 + -8;
      if ((int)(pbVar7 + (iVar5 - (int)param_1)) <= param_2) {
        *(byte **)((int)this + 0x3a) = pbVar7;
        return pbVar7 + iVar5;
      }
    }
  }
  return (byte *)0x0;
}


