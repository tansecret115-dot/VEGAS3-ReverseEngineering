/* Module: erv33260.dll
   Function: FUN_6708b1d0
   Address: 6708b1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708b1d0(byte *param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int local_8;
  
  iVar4 = param_3;
  if (0 < param_4) {
    local_8 = param_4;
    do {
      param_3 = param_4;
      do {
        pbVar1 = param_1 + iVar4;
        bVar3 = *param_1;
        pbVar2 = param_1 + iVar4 * 2;
        pbVar6 = param_1 + -iVar4;
        puVar5 = param_2 + 1;
        param_1 = param_1 + 1;
        *param_2 = (&DAT_67091508)
                   [(int)(((((uint)bVar3 + (uint)*pbVar1 * 2) * 6 - (uint)*pbVar2) - (uint)*pbVar6)
                         + 8) >> 4];
        param_3 = param_3 + -1;
        param_2 = puVar5;
      } while (param_3 != 0);
      param_2 = puVar5 + (0x10 - param_4);
      param_1 = param_1 + (iVar4 - param_4);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


