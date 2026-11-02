/* Module: rmme3260.dll
   Function: FUN_662097a0
   Address: 662097a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 __fastcall FUN_662097a0(void *param_1)

{
  byte bVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined2 uVar4;
  uint uVar5;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  pbVar3 = (byte *)FUN_66209a30(param_1,&local_8);
  if ((pbVar3 != (byte *)0x0) && (puVar2 = *(uint **)((int)param_1 + 0x56), puVar2 != (uint *)0x0))
  {
    if (local_8 != 0) {
      bVar1 = *pbVar3;
      *puVar2 = (uint)bVar1 << 0x18;
      *puVar2 = (uint)pbVar3[1] << 0x10 | (uint)bVar1 << 0x18;
      uVar5 = *puVar2 | (uint)pbVar3[2] << 8;
      *puVar2 = uVar5;
      *puVar2 = uVar5 | pbVar3[3];
      puVar2[1] = (uint)pbVar3[4] << 0x18;
      uVar5 = puVar2[1] | (uint)pbVar3[5] << 0x10;
      puVar2[1] = uVar5;
      uVar5 = uVar5 | (uint)pbVar3[6] << 8;
      puVar2[1] = uVar5;
      puVar2[1] = uVar5 | pbVar3[7];
      *(ushort *)(puVar2 + 2) = (ushort)pbVar3[8] << 8;
      *(ushort *)(puVar2 + 2) = (ushort)puVar2[2] | (ushort)pbVar3[9];
      if ((short)puVar2[2] == 0) {
        *(uint *)((int)puVar2 + 10) = (uint)pbVar3[10] << 0x18;
        uVar5 = *(uint *)((int)puVar2 + 10) | (uint)pbVar3[0xb] << 0x10;
        *(uint *)((int)puVar2 + 10) = uVar5;
        uVar5 = uVar5 | (uint)pbVar3[0xc] << 8;
        *(uint *)((int)puVar2 + 10) = uVar5;
        *(uint *)((int)puVar2 + 10) = uVar5 | pbVar3[0xd];
        *(uint *)((int)puVar2 + 0xe) = (uint)pbVar3[0xe] << 0x18;
        uVar5 = *(uint *)((int)puVar2 + 0xe) | (uint)pbVar3[0xf] << 0x10;
        *(uint *)((int)puVar2 + 0xe) = uVar5;
        uVar5 = uVar5 | (uint)pbVar3[0x10] << 8;
        *(uint *)((int)puVar2 + 0xe) = uVar5;
        *(uint *)((int)puVar2 + 0xe) = uVar5 | pbVar3[0x11];
        *(uint *)((int)puVar2 + 0x12) = (uint)pbVar3[0x12] << 0x18;
        uVar5 = *(uint *)((int)puVar2 + 0x12) | (uint)pbVar3[0x13] << 0x10;
        *(uint *)((int)puVar2 + 0x12) = uVar5;
        uVar5 = uVar5 | (uint)pbVar3[0x14] << 8;
        *(uint *)((int)puVar2 + 0x12) = uVar5;
        *(uint *)((int)puVar2 + 0x12) = uVar5 | pbVar3[0x15];
        *(uint *)((int)puVar2 + 0x16) = (uint)pbVar3[0x16] << 0x18;
        uVar5 = *(uint *)((int)puVar2 + 0x16) | (uint)pbVar3[0x17] << 0x10;
        *(uint *)((int)puVar2 + 0x16) = uVar5;
        uVar5 = uVar5 | (uint)pbVar3[0x18] << 8;
        *(uint *)((int)puVar2 + 0x16) = uVar5;
        *(uint *)((int)puVar2 + 0x16) = uVar5 | pbVar3[0x19];
        *(uint *)((int)puVar2 + 0x1a) = (uint)pbVar3[0x1a] << 0x18;
        uVar5 = *(uint *)((int)puVar2 + 0x1a) | (uint)pbVar3[0x1b] << 0x10;
        *(uint *)((int)puVar2 + 0x1a) = uVar5;
        uVar5 = uVar5 | (uint)pbVar3[0x1c] << 8;
        *(uint *)((int)puVar2 + 0x1a) = uVar5;
        *(uint *)((int)puVar2 + 0x1a) = uVar5 | pbVar3[0x1d];
        *(uint *)((int)puVar2 + 0x1e) = (uint)pbVar3[0x1e] << 0x18;
        uVar5 = *(uint *)((int)puVar2 + 0x1e) | (uint)pbVar3[0x1f] << 0x10;
        *(uint *)((int)puVar2 + 0x1e) = uVar5;
        uVar5 = uVar5 | (uint)pbVar3[0x20] << 8;
        *(uint *)((int)puVar2 + 0x1e) = uVar5;
        *(uint *)((int)puVar2 + 0x1e) = uVar5 | pbVar3[0x21];
        *(uint *)((int)puVar2 + 0x22) = (uint)pbVar3[0x22] << 0x18;
        uVar5 = *(uint *)((int)puVar2 + 0x22) | (uint)pbVar3[0x23] << 0x10;
        *(uint *)((int)puVar2 + 0x22) = uVar5;
        uVar5 = uVar5 | (uint)pbVar3[0x24] << 8;
        *(uint *)((int)puVar2 + 0x22) = uVar5;
        *(uint *)((int)puVar2 + 0x22) = uVar5 | pbVar3[0x25];
        *(uint *)((int)puVar2 + 0x26) = (uint)pbVar3[0x26] << 0x18;
        uVar5 = *(uint *)((int)puVar2 + 0x26) | (uint)pbVar3[0x27] << 0x10;
        *(uint *)((int)puVar2 + 0x26) = uVar5;
        uVar5 = uVar5 | (uint)pbVar3[0x28] << 8;
        *(uint *)((int)puVar2 + 0x26) = uVar5;
        *(uint *)((int)puVar2 + 0x26) = uVar5 | pbVar3[0x29];
        *(uint *)((int)puVar2 + 0x2a) = (uint)pbVar3[0x2a] << 0x18;
        uVar5 = *(uint *)((int)puVar2 + 0x2a) | (uint)pbVar3[0x2b] << 0x10;
        *(uint *)((int)puVar2 + 0x2a) = uVar5;
        uVar5 = uVar5 | (uint)pbVar3[0x2c] << 8;
        *(uint *)((int)puVar2 + 0x2a) = uVar5;
        *(uint *)((int)puVar2 + 0x2a) = uVar5 | pbVar3[0x2d];
        *(ushort *)((int)puVar2 + 0x2e) = (ushort)pbVar3[0x2e] << 8;
        *(ushort *)((int)puVar2 + 0x2e) = *(ushort *)((int)puVar2 + 0x2e) | (ushort)pbVar3[0x2f];
        *(ushort *)(puVar2 + 0xc) = (ushort)pbVar3[0x30] << 8;
        *(ushort *)(puVar2 + 0xc) = (ushort)puVar2[0xc] | (ushort)pbVar3[0x31];
      }
    }
    uVar4 = *(undefined2 *)(*(int *)((int)param_1 + 0x56) + 0x30);
  }
  return uVar4;
}


