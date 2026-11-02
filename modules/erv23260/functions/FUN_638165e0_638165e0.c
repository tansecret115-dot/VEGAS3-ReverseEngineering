/* Module: erv23260.dll
   Function: FUN_638165e0
   Address: 638165e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_638165e0(byte *param_1,byte *param_2,byte *param_3,int param_4,int param_5,int param_6)

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
    uVar2 = (uint)*param_1 - ((int)((uint)*param_2 + (uint)*param_3) >> 1);
    uVar6 = (int)uVar2 >> 0x1f;
    uVar3 = (uint)param_1[2] - ((int)((uint)param_2[2] + (uint)param_3[2]) >> 1);
    uVar7 = (int)uVar3 >> 0x1f;
    uVar4 = (uint)param_1[5] - ((int)((uint)param_3[5] + (uint)param_2[5]) >> 1);
    uVar8 = (int)uVar4 >> 0x1f;
    uVar5 = (uint)param_1[7] - ((int)((uint)param_3[7] + (uint)param_2[7]) >> 1);
    uVar9 = (int)uVar5 >> 0x1f;
    param_1 = param_1 + param_4;
    param_2 = param_2 + param_5;
    param_3 = param_3 + param_5;
    iVar1 = iVar1 + ((uVar6 ^ uVar2) - uVar6) + ((uVar7 ^ uVar3) - uVar7) +
            ((uVar8 ^ uVar4) - uVar8) + ((uVar9 ^ uVar5) - uVar9);
    if (param_6 < iVar1) {
      return 0x7fffffff;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  return iVar1;
}


