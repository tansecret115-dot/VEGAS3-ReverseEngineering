/* Module: erv33260.dll
   Function: FUN_6708c7d0
   Address: 6708c7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6708c7d0(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 4;
  do {
    iVar3 = 4;
    do {
      pbVar2 = param_2;
      pbVar1 = param_1;
      uVar4 = (int)((uint)*pbVar1 - (uint)*pbVar2) >> 0x1f;
      local_8 = local_8 + ((uVar4 ^ (uint)*pbVar1 - (uint)*pbVar2) - uVar4);
      iVar3 = iVar3 + -1;
      param_1 = pbVar1 + 1;
      param_2 = pbVar2 + 1;
    } while (iVar3 != 0);
    param_2 = pbVar2 + 0xd;
    param_1 = pbVar1 + param_3 + -3;
    local_c = local_c + -1;
  } while (local_c != 0);
  return local_8;
}


