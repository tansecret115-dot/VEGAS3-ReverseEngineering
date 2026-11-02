/* Module: erv33260.dll
   Function: FUN_6708b360
   Address: 6708b360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708b360(byte *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int local_c;
  undefined1 *local_8;
  
  iVar1 = param_3;
  if (0 < param_4) {
    local_c = param_4;
    local_8 = param_2;
    do {
      param_3 = param_4;
      do {
        pbVar2 = param_1 + iVar1;
        pbVar3 = pbVar2 + iVar1;
        *local_8 = (&DAT_67091508)
                   [(int)(((uint)pbVar2[2] + (uint)*pbVar2 * 6 + (uint)pbVar2[1] * 9) * 9 +
                          ((uint)param_1[2] + (uint)*param_1 * 6 + (uint)param_1[1] * 9) * 6 +
                          (uint)pbVar3[1] * 9 + (uint)pbVar3[2] + (uint)*pbVar3 * 6 + 0x80) >> 8];
        param_1 = pbVar3 + iVar1 * -2 + 1;
        local_8 = local_8 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      param_1 = param_1 + (iVar1 - param_4);
      local_8 = local_8 + (0x10 - param_4);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


