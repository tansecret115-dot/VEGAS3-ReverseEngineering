/* Module: erv23260.dll
   Function: FUN_63815ea0
   Address: 63815ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_63815ea0(byte *param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_8;
  
  iVar1 = 0;
  local_8 = 0;
  do {
    uVar2 = (int)((uint)*param_1 - (uint)*param_2) >> 0x1f;
    uVar3 = (int)((uint)param_1[2] - (uint)param_2[4]) >> 0x1f;
    uVar8 = (int)((uint)param_1[4] - (uint)param_2[8]) >> 0x1f;
    uVar9 = (int)((uint)param_1[6] - (uint)param_2[0xc]) >> 0x1f;
    uVar4 = (int)((uint)param_1[9] - (uint)param_2[0x12]) >> 0x1f;
    uVar5 = (int)((uint)param_1[0xb] - (uint)param_2[0x16]) >> 0x1f;
    uVar6 = (int)((uint)param_1[0xd] - (uint)param_2[0x1a]) >> 0x1f;
    uVar7 = (int)((uint)param_1[0xf] - (uint)param_2[0x1e]) >> 0x1f;
    iVar1 = iVar1 + ((uVar2 ^ (uint)*param_1 - (uint)*param_2) - uVar2) +
            ((uVar3 ^ (uint)param_1[2] - (uint)param_2[4]) - uVar3) +
            ((uVar8 ^ (uint)param_1[4] - (uint)param_2[8]) - uVar8) +
            ((uVar9 ^ (uint)param_1[6] - (uint)param_2[0xc]) - uVar9) +
            ((uVar4 ^ (uint)param_1[9] - (uint)param_2[0x12]) - uVar4) +
            ((uVar5 ^ (uint)param_1[0xb] - (uint)param_2[0x16]) - uVar5) +
            ((uVar6 ^ (uint)param_1[0xd] - (uint)param_2[0x1a]) - uVar6) +
            ((uVar7 ^ (uint)param_1[0xf] - (uint)param_2[0x1e]) - uVar7);
    param_1 = param_1 + param_3;
    param_2 = param_2 + param_4 * 2;
    if (param_5 < iVar1) {
      return 0x7fffffff;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x10);
  return iVar1;
}


