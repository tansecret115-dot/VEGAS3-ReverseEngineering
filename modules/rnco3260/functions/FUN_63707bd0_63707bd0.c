/* Module: rnco3260.dll
   Function: FUN_63707bd0
   Address: 63707bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63707bd0(byte *param_1,uint param_2,int param_3,int param_4,byte *param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint local_14;
  int local_10;
  int local_c;
  
  local_10 = param_4;
  local_c = param_6 >> 1;
  if (param_4 != 0) {
    iVar6 = param_2 - param_3;
    pbVar4 = (byte *)(param_3 + 2);
    iVar8 = (int)param_1 - param_3;
    iVar5 = param_2 - (int)param_1;
    pbVar3 = param_5;
    pbVar7 = param_1;
    param_5 = (byte *)(param_2 + 1);
    do {
      bVar1 = pbVar3[1];
      bVar2 = pbVar3[2];
      param_2 = (uint)*pbVar3;
      local_14 = (uint)bVar2;
      pbVar4[-2] = *pbVar3;
      *pbVar4 = bVar2;
      pbVar4[-1] = bVar1;
      param_1 = (byte *)(uint)bVar1;
      bVar1 = pbVar7[1];
      bVar2 = pbVar4[iVar8];
      pbVar4 = pbVar4 + 3;
      pbVar7[iVar5] = (byte)((int)(param_2 + *pbVar7) >> 1);
      *param_5 = (byte)((int)(param_1 + bVar1) >> 1);
      pbVar7 = pbVar7 + 3;
      pbVar4[iVar6 + -3] = (byte)((int)(bVar2 + local_14) >> 1);
      param_5 = param_5 + 3;
      do {
        pbVar3 = pbVar3 + 3;
        local_c = local_c - param_4;
      } while (-1 < local_c);
      local_c = local_c + param_6;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}


