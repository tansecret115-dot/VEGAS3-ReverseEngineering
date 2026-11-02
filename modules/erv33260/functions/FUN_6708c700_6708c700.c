/* Module: erv33260.dll
   Function: FUN_6708c700
   Address: 6708c700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6708c700(byte *param_1,int param_2,byte *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 4;
  do {
    iVar2 = 4;
    do {
      pbVar4 = param_3;
      pbVar3 = param_1;
      uVar1 = (int)((uint)*pbVar3 - (uint)*pbVar4) >> 0x1f;
      local_8 = local_8 + ((uVar1 ^ (uint)*pbVar3 - (uint)*pbVar4) - uVar1);
      iVar2 = iVar2 + -1;
      param_1 = pbVar3 + 1;
      param_3 = pbVar4 + 1;
    } while (iVar2 != 0);
    local_c = local_c + -1;
    param_1 = pbVar3 + param_2 + -3;
    param_3 = pbVar4 + param_4 + -3;
  } while (local_c != 0);
  return local_8;
}


