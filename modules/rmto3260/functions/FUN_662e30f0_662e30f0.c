/* Module: rmto3260.dll
   Function: FUN_662e30f0
   Address: 662e30f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662e30f0(void *this,ushort param_1)

{
  ushort *puVar1;
  byte bVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  local_8 = 0;
  pbVar4 = (byte *)FUN_662e37f0(this,&local_8);
  if ((pbVar4 != (byte *)0x0) && (puVar3 = *(uint **)((int)this + 0x56), puVar3 != (uint *)0x0)) {
    local_c = local_8;
    if (local_8 != 0) {
      bVar2 = *pbVar4;
      *puVar3 = (uint)bVar2 << 0x18;
      *puVar3 = (uint)pbVar4[1] << 0x10 | (uint)bVar2 << 0x18;
      uVar5 = *puVar3 | (uint)pbVar4[2] << 8;
      *puVar3 = uVar5;
      *puVar3 = uVar5 | pbVar4[3];
      puVar3[1] = (uint)pbVar4[4] << 0x18;
      uVar5 = puVar3[1] | (uint)pbVar4[5] << 0x10;
      puVar3[1] = uVar5;
      uVar5 = uVar5 | (uint)pbVar4[6] << 8;
      puVar3[1] = uVar5;
      puVar3[1] = uVar5 | pbVar4[7];
      *(ushort *)(puVar3 + 2) = (ushort)pbVar4[8] << 8;
      *(ushort *)(puVar3 + 2) = (ushort)puVar3[2] | (ushort)pbVar4[9];
      if ((short)puVar3[2] == 0) {
        *(uint *)((int)puVar3 + 10) = (uint)pbVar4[10] << 0x18;
        uVar5 = *(uint *)((int)puVar3 + 10) | (uint)pbVar4[0xb] << 0x10;
        *(uint *)((int)puVar3 + 10) = uVar5;
        uVar5 = uVar5 | (uint)pbVar4[0xc] << 8;
        *(uint *)((int)puVar3 + 10) = uVar5;
        *(uint *)((int)puVar3 + 10) = uVar5 | pbVar4[0xd];
        *(uint *)((int)puVar3 + 0xe) = (uint)pbVar4[0xe] << 0x18;
        uVar5 = *(uint *)((int)puVar3 + 0xe) | (uint)pbVar4[0xf] << 0x10;
        *(uint *)((int)puVar3 + 0xe) = uVar5;
        uVar5 = uVar5 | (uint)pbVar4[0x10] << 8;
        *(uint *)((int)puVar3 + 0xe) = uVar5;
        *(uint *)((int)puVar3 + 0xe) = uVar5 | pbVar4[0x11];
        *(uint *)((int)puVar3 + 0x12) = (uint)pbVar4[0x12] << 0x18;
        uVar5 = *(uint *)((int)puVar3 + 0x12) | (uint)pbVar4[0x13] << 0x10;
        *(uint *)((int)puVar3 + 0x12) = uVar5;
        uVar5 = uVar5 | (uint)pbVar4[0x14] << 8;
        *(uint *)((int)puVar3 + 0x12) = uVar5;
        *(uint *)((int)puVar3 + 0x12) = uVar5 | pbVar4[0x15];
        *(uint *)((int)puVar3 + 0x16) = (uint)pbVar4[0x16] << 0x18;
        uVar5 = *(uint *)((int)puVar3 + 0x16) | (uint)pbVar4[0x17] << 0x10;
        *(uint *)((int)puVar3 + 0x16) = uVar5;
        uVar5 = uVar5 | (uint)pbVar4[0x18] << 8;
        *(uint *)((int)puVar3 + 0x16) = uVar5;
        *(uint *)((int)puVar3 + 0x16) = uVar5 | pbVar4[0x19];
        *(uint *)((int)puVar3 + 0x1a) = (uint)pbVar4[0x1a] << 0x18;
        uVar5 = *(uint *)((int)puVar3 + 0x1a) | (uint)pbVar4[0x1b] << 0x10;
        *(uint *)((int)puVar3 + 0x1a) = uVar5;
        uVar5 = uVar5 | (uint)pbVar4[0x1c] << 8;
        *(uint *)((int)puVar3 + 0x1a) = uVar5;
        *(uint *)((int)puVar3 + 0x1a) = uVar5 | pbVar4[0x1d];
        *(uint *)((int)puVar3 + 0x1e) = (uint)pbVar4[0x1e] << 0x18;
        uVar5 = *(uint *)((int)puVar3 + 0x1e) | (uint)pbVar4[0x1f] << 0x10;
        *(uint *)((int)puVar3 + 0x1e) = uVar5;
        uVar5 = uVar5 | (uint)pbVar4[0x20] << 8;
        *(uint *)((int)puVar3 + 0x1e) = uVar5;
        *(uint *)((int)puVar3 + 0x1e) = uVar5 | pbVar4[0x21];
        *(uint *)((int)puVar3 + 0x22) = (uint)pbVar4[0x22] << 0x18;
        uVar5 = *(uint *)((int)puVar3 + 0x22) | (uint)pbVar4[0x23] << 0x10;
        *(uint *)((int)puVar3 + 0x22) = uVar5;
        uVar5 = uVar5 | (uint)pbVar4[0x24] << 8;
        *(uint *)((int)puVar3 + 0x22) = uVar5;
        *(uint *)((int)puVar3 + 0x22) = uVar5 | pbVar4[0x25];
        *(uint *)((int)puVar3 + 0x26) = (uint)pbVar4[0x26] << 0x18;
        uVar5 = *(uint *)((int)puVar3 + 0x26) | (uint)pbVar4[0x27] << 0x10;
        *(uint *)((int)puVar3 + 0x26) = uVar5;
        uVar5 = uVar5 | (uint)pbVar4[0x28] << 8;
        *(uint *)((int)puVar3 + 0x26) = uVar5;
        *(uint *)((int)puVar3 + 0x26) = uVar5 | pbVar4[0x29];
        *(uint *)((int)puVar3 + 0x2a) = (uint)pbVar4[0x2a] << 0x18;
        uVar5 = *(uint *)((int)puVar3 + 0x2a) | (uint)pbVar4[0x2b] << 0x10;
        *(uint *)((int)puVar3 + 0x2a) = uVar5;
        uVar5 = uVar5 | (uint)pbVar4[0x2c] << 8;
        *(uint *)((int)puVar3 + 0x2a) = uVar5;
        *(uint *)((int)puVar3 + 0x2a) = uVar5 | pbVar4[0x2d];
        *(ushort *)((int)puVar3 + 0x2e) = (ushort)pbVar4[0x2e] << 8;
        *(ushort *)((int)puVar3 + 0x2e) = *(ushort *)((int)puVar3 + 0x2e) | (ushort)pbVar4[0x2f];
        *(ushort *)(puVar3 + 0xc) = (ushort)pbVar4[0x30] << 8;
        *(ushort *)(puVar3 + 0xc) = (ushort)puVar3[0xc] | (ushort)pbVar4[0x31];
      }
    }
    puVar1 = (ushort *)(*(int *)((int)this + 0x56) + 0x30);
    *puVar1 = *puVar1 | param_1;
    FUN_662e33a0(*(void **)((int)this + 0x56),pbVar4,&local_c);
  }
  return;
}


