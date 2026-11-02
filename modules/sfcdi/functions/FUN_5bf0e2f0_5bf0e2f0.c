/* Module: sfcdi.dll
   Function: FUN_5bf0e2f0
   Address: 5bf0e2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0e2f0(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  byte *local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  local_10 = (byte *)(param_1 + 0xc);
  pbVar1 = (byte *)(param_1 + 0x8c8);
  local_4 = 0x1a;
  pbVar8 = param_2;
  do {
    param_1 = 0;
    param_2 = (byte *)0x0;
    bVar7 = 0;
    local_c = 0;
    local_8 = 0x2b;
    pbVar3 = local_10;
    do {
      pbVar4 = pbVar3 + 0x58;
      bVar5 = (&DAT_5bf63b18)[(uint)*pbVar3 ^ (uint)param_2] ^ (byte)param_1;
      bVar2 = (&DAT_5bf63a18)[(uint)*pbVar3 ^ (uint)param_2];
      param_1 = (int)bVar2;
      param_2 = (byte *)(uint)bVar5;
      bVar6 = (&DAT_5bf63b18)[pbVar3[1] ^ local_c] ^ bVar7;
      bVar7 = (&DAT_5bf63a18)[pbVar3[1] ^ local_c];
      local_c = (uint)bVar6;
      if (pbVar1 <= pbVar4) {
        pbVar4 = pbVar3 + -0x864;
      }
      local_8 = local_8 + -1;
      pbVar3 = pbVar4;
    } while (local_8 != 0);
    *pbVar8 = bVar5;
    pbVar8[0x34] = bVar2;
    pbVar8[1] = bVar6;
    pbVar8[0x35] = bVar7;
    pbVar8 = pbVar8 + 2;
    local_10 = local_10 + 0x56;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}


