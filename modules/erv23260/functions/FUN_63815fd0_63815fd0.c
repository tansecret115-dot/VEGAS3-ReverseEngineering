/* Module: erv23260.dll
   Function: FUN_63815fd0
   Address: 63815fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_63815fd0(byte *param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_8;
  
  iVar1 = 0;
  local_8 = 0;
  do {
    uVar2 = (int)((uint)*param_1 - (uint)*param_2) >> 0x1f;
    uVar3 = (int)((uint)param_1[2] - (uint)param_2[4]) >> 0x1f;
    uVar4 = (int)((uint)param_1[5] - (uint)param_2[10]) >> 0x1f;
    uVar5 = (int)((uint)param_1[7] - (uint)param_2[0xe]) >> 0x1f;
    iVar1 = iVar1 + ((uVar2 ^ (uint)*param_1 - (uint)*param_2) - uVar2) +
            ((uVar3 ^ (uint)param_1[2] - (uint)param_2[4]) - uVar3) +
            ((uVar4 ^ (uint)param_1[5] - (uint)param_2[10]) - uVar4) +
            ((uVar5 ^ (uint)param_1[7] - (uint)param_2[0xe]) - uVar5);
    param_1 = param_1 + param_3;
    param_2 = param_2 + param_4 * 2;
    if (param_5 < iVar1) {
      return 0x7fffffff;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  return iVar1;
}


