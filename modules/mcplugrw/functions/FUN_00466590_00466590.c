/* Module: mcplugrw.dll
   Function: FUN_00466590
   Address: 00466590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00466590(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0x7c);
  iVar8 = *(int *)(param_1 + 0x78);
  iVar4 = (0x4000 - iVar8) * (0x4000 - iVar7);
  iVar5 = iVar8 * (0x4000 - iVar7);
  iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (0x4000 - iVar8) * iVar7;
  pbVar3 = *(byte **)(param_1 + 0x5c);
  iVar7 = (int)(iVar8 * iVar7 + (iVar8 * iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  pbVar1 = pbVar3 + *(int *)(param_1 + 0x74);
  iVar8 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
  bVar2 = pbVar1[1];
  *(short *)(param_1 + 0x40) =
       (short)((uint)pbVar1[5] * 0x100 * iVar7 + (uint)pbVar1[2] * 0x100 * iVar8 +
               (uint)pbVar3[5] * 0x100 * iVar5 + (uint)pbVar3[2] * 0x100 * iVar4 >> 0xe);
  *(short *)(param_1 + 0x3e) =
       (short)((uint)pbVar1[4] * 0x100 * iVar7 + (uint)bVar2 * 0x100 * iVar8 +
               (uint)pbVar3[4] * 0x100 * iVar5 + (uint)pbVar3[1] * 0x100 * iVar4 >> 0xe);
  bVar2 = pbVar1[3];
  *(undefined2 *)(param_1 + 0x42) = 0xffff;
  *(short *)(param_1 + 0x3c) =
       (short)((uint)bVar2 * 0x100 * iVar7 + (uint)pbVar3[3] * 0x100 * iVar5 +
               (uint)*pbVar1 * 0x100 * iVar8 + (uint)*pbVar3 * 0x100 * iVar4 >> 0xe);
  return;
}


