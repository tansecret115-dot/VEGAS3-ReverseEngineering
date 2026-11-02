/* Module: erv33260.dll
   Function: FUN_6708d910
   Address: 6708d910
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_6708d910(byte *param_1,int param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint local_c;
  uint local_8;
  
  iVar1 = (int)param_3 * 4;
  uVar2 = (uint)param_3 >> 1;
  local_8 = 0;
  local_c = 0;
  param_3 = param_1;
  do {
    param_1 = (byte *)0xf;
    pbVar6 = param_3;
    do {
      uVar3 = (uint)*pbVar6;
      uVar4 = uVar3 - pbVar6[1];
      if ((int)uVar4 < 0) {
        uVar4 = pbVar6[1] - uVar3;
      }
      uVar5 = uVar3 - pbVar6[param_2];
      if ((int)uVar5 < 0) {
        uVar5 = pbVar6[param_2] - uVar3;
      }
      if ((uVar2 < uVar4) || (uVar2 < uVar5)) {
        local_8 = local_8 + 1;
      }
      pbVar6 = pbVar6 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (byte *)0x0);
    if (*(uint *)(&DAT_67092020 + iVar1) < local_8) break;
    local_c = local_c + 1;
    param_3 = param_3 + param_2;
  } while (local_c < 0xf);
  return *(uint *)(&DAT_67092020 + iVar1) < local_8;
}


