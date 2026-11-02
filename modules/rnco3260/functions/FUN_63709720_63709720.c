/* Module: rnco3260.dll
   Function: FUN_63709720
   Address: 63709720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63709720(byte *param_1,int param_2,uint param_3,int param_4,ushort *param_5,int param_6)

{
  ushort uVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  ushort *puVar9;
  byte bVar10;
  int iVar11;
  byte *pbVar12;
  uint local_14;
  int local_10;
  int local_c;
  
  uVar3 = param_3;
  pbVar2 = param_1;
  local_10 = param_4;
  local_c = param_6 >> 1;
  if (param_4 != 0) {
    iVar11 = param_2 - param_3;
    iVar5 = param_2 - (int)param_1;
    pbVar6 = (byte *)(param_3 + 2);
    puVar9 = param_5;
    pbVar12 = param_1;
    param_5 = (ushort *)(param_2 + 1);
    do {
      pbVar7 = pbVar6 + 3;
      uVar1 = *puVar9;
      bVar10 = (char)uVar1 << 3;
      bVar8 = (byte)(uVar1 >> 2) & 0xf8;
      bVar4 = (byte)(uVar1 >> 7) & 0xf8;
      param_3 = (uint)bVar10;
      param_1 = (byte *)(uint)bVar8;
      local_14 = (uint)bVar4;
      pbVar6[-1] = bVar8;
      *pbVar6 = bVar4;
      pbVar6[-2] = bVar10;
      bVar4 = pbVar12[1];
      bVar8 = pbVar7[(int)(pbVar2 + (-3 - uVar3))];
      (pbVar12 + 3)[iVar5 + -3] = (byte)((int)(param_3 + *pbVar12) >> 1);
      *(char *)param_5 = (char)((int)(param_1 + bVar4) >> 1);
      pbVar7[iVar11 + -3] = (byte)((int)(bVar8 + local_14) >> 1);
      param_5 = (ushort *)((int)param_5 + 3);
      do {
        puVar9 = puVar9 + 1;
        local_c = local_c - param_4;
      } while (-1 < local_c);
      local_c = local_c + param_6;
      local_10 = local_10 + -1;
      pbVar6 = pbVar7;
      pbVar12 = pbVar12 + 3;
    } while (local_10 != 0);
  }
  return;
}


