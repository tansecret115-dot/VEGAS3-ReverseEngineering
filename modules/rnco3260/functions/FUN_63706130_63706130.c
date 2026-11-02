/* Module: rnco3260.dll
   Function: FUN_63706130
   Address: 63706130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63706130(byte *param_1,uint param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int local_14;
  int local_10;
  undefined1 *local_8;
  
  local_14 = param_4;
  local_10 = param_6 >> 1;
  if (param_4 != 0) {
    local_8 = (undefined1 *)(param_2 + 1);
    iVar6 = param_2 - param_3;
    pbVar3 = (byte *)(param_3 + 2);
    iVar8 = (int)param_1 - param_3;
    iVar5 = param_2 - (int)param_1;
    pbVar7 = param_1;
    do {
      uVar2 = *param_5;
      bVar4 = (byte)(uVar2 >> 8);
      param_2 = (uint)bVar4;
      pbVar3[-1] = bVar4;
      pbVar3[-2] = (byte)uVar2;
      bVar4 = (byte)(uVar2 >> 0x10);
      *pbVar3 = bVar4;
      param_1 = (byte *)(uint)bVar4;
      bVar4 = pbVar7[1];
      bVar1 = pbVar3[iVar8];
      pbVar3 = pbVar3 + 3;
      pbVar7[iVar5] = (byte)((int)((uVar2 & 0xff) + (uint)*pbVar7) >> 1);
      *local_8 = (char)((int)(bVar4 + param_2) >> 1);
      pbVar3[iVar6 + -3] = (byte)((int)(param_1 + bVar1) >> 1);
      pbVar7 = pbVar7 + 3;
      local_8 = local_8 + 3;
      do {
        param_5 = param_5 + 1;
        local_10 = local_10 - param_4;
      } while (-1 < local_10);
      local_10 = local_10 + param_6;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}


