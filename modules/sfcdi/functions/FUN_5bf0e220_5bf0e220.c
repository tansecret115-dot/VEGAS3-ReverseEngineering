/* Module: sfcdi.dll
   Function: FUN_5bf0e220
   Address: 5bf0e220
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0e220(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *local_c;
  uint local_8;
  int local_4;
  
  local_c = (byte *)(param_1 + 0xc);
  local_4 = 0x2b;
  pbVar5 = param_2;
  do {
    param_1 = 0;
    param_2 = (byte *)0x0;
    bVar4 = 0;
    local_8 = 0;
    iVar7 = 0x18;
    pbVar6 = local_c;
    do {
      bVar2 = (&DAT_5bf63b18)[(uint)param_2 ^ (uint)*pbVar6] ^ (byte)param_1;
      bVar1 = (&DAT_5bf63a18)[(uint)param_2 ^ (uint)*pbVar6];
      param_1 = (int)bVar1;
      param_2 = (byte *)(uint)bVar2;
      bVar3 = (&DAT_5bf63b18)[local_8 ^ pbVar6[1]] ^ bVar4;
      bVar4 = (&DAT_5bf63a18)[local_8 ^ pbVar6[1]];
      iVar7 = iVar7 + -1;
      local_8 = (uint)bVar3;
      pbVar6 = pbVar6 + 0x56;
    } while (iVar7 != 0);
    *pbVar5 = bVar2;
    pbVar5[0x56] = bVar1;
    pbVar5[1] = bVar3;
    pbVar5[0x57] = bVar4;
    pbVar5 = pbVar5 + 2;
    local_c = local_c + 2;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}


