/* Module: rnco3260.dll
   Function: FUN_6370a570
   Address: 6370a570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370a570(byte *param_1,uint param_2,int param_3,int param_4,byte *param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  uint local_14;
  int local_10;
  int local_c;
  
  pbVar4 = param_1;
  local_10 = param_4;
  local_c = param_6 >> 1;
  if (param_4 != 0) {
    iVar10 = param_2 - param_3;
    iVar8 = param_2 - (int)param_1;
    pbVar5 = param_5;
    pbVar6 = (byte *)(param_3 + 2);
    pbVar11 = param_1;
    param_5 = (byte *)(param_2 + 1);
    do {
      pbVar7 = pbVar6 + 3;
      uVar9 = (uint)*pbVar5;
      bVar1 = *(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2);
      bVar2 = *(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1);
      bVar3 = *(byte *)(&DAT_637956a0 + uVar9);
      param_2 = (uint)bVar1;
      local_14 = (uint)bVar3;
      pbVar6[-2] = bVar1;
      *pbVar6 = bVar3;
      pbVar6[-1] = bVar2;
      param_1 = (byte *)(uint)bVar2;
      bVar1 = pbVar11[1];
      bVar2 = pbVar7[(int)(pbVar4 + (-3 - param_3))];
      (pbVar11 + 3)[iVar8 + -3] = (byte)((int)(param_2 + *pbVar11) >> 1);
      *param_5 = (byte)((int)(param_1 + bVar1) >> 1);
      pbVar7[iVar10 + -3] = (byte)((int)(bVar2 + local_14) >> 1);
      param_5 = param_5 + 3;
      do {
        pbVar5 = pbVar5 + 1;
        local_c = local_c - param_4;
      } while (-1 < local_c);
      local_c = local_c + param_6;
      local_10 = local_10 + -1;
      pbVar6 = pbVar7;
      pbVar11 = pbVar11 + 3;
    } while (local_10 != 0);
  }
  return;
}


