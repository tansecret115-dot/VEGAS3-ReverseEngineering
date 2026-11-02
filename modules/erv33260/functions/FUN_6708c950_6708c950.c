/* Module: erv33260.dll
   Function: FUN_6708c950
   Address: 6708c950
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6708c950(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0x10;
  do {
    iVar2 = 0x10;
    do {
      pbVar1 = param_1;
      uVar3 = (int)((uint)*pbVar1 - (uint)*param_2) >> 0x1f;
      local_8 = local_8 + ((uVar3 ^ (uint)*pbVar1 - (uint)*param_2) - uVar3);
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
      param_1 = pbVar1 + 1;
    } while (iVar2 != 0);
    param_1 = pbVar1 + param_3 + -0xf;
    local_c = local_c + -1;
  } while (local_c != 0);
  return local_8;
}


