/* Module: rnco3260.dll
   Function: FUN_637088d0
   Address: 637088d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637088d0(byte *param_1,uint param_2,int param_3,int param_4,ushort *param_5,int param_6)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  ushort *puVar8;
  byte bVar9;
  int iVar10;
  byte *pbVar11;
  uint local_14;
  int local_10;
  int local_c;
  
  pbVar2 = param_1;
  local_10 = param_4;
  local_c = param_6 >> 1;
  if (param_4 != 0) {
    iVar10 = param_2 - param_3;
    iVar4 = param_2 - (int)param_1;
    pbVar5 = (byte *)(param_3 + 2);
    puVar8 = param_5;
    pbVar11 = param_1;
    param_5 = (ushort *)(param_2 + 1);
    do {
      pbVar6 = pbVar5 + 3;
      uVar1 = *puVar8;
      bVar9 = (char)uVar1 << 3;
      bVar7 = (byte)(uVar1 >> 3) & 0xfc;
      bVar3 = (byte)(uVar1 >> 8) & 0xf8;
      param_2 = (uint)bVar9;
      param_1 = (byte *)(uint)bVar7;
      local_14 = (uint)bVar3;
      pbVar5[-1] = bVar7;
      *pbVar5 = bVar3;
      pbVar5[-2] = bVar9;
      bVar3 = pbVar11[1];
      bVar7 = pbVar6[(int)(pbVar2 + (-3 - param_3))];
      (pbVar11 + 3)[iVar4 + -3] = (byte)((int)(param_2 + *pbVar11) >> 1);
      *(char *)param_5 = (char)((int)(param_1 + bVar3) >> 1);
      pbVar6[iVar10 + -3] = (byte)((int)(bVar7 + local_14) >> 1);
      param_5 = (ushort *)((int)param_5 + 3);
      do {
        puVar8 = puVar8 + 1;
        local_c = local_c - param_4;
      } while (-1 < local_c);
      local_c = local_c + param_6;
      local_10 = local_10 + -1;
      pbVar5 = pbVar6;
      pbVar11 = pbVar11 + 3;
    } while (local_10 != 0);
  }
  return;
}


