/* Module: erv33260.dll
   Function: FUN_6708afb0
   Address: 6708afb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708afb0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int local_8;
  
  iVar1 = param_3;
  pbVar2 = (byte *)(param_1 + (-1 - param_3));
  if (0 < param_4) {
    local_8 = param_4;
    do {
      param_3 = param_4;
      do {
        pbVar3 = pbVar2 + iVar1;
        pbVar4 = pbVar3 + iVar1;
        pbVar5 = pbVar4 + iVar1;
        *param_2 = (&DAT_67091508)
                   [(int)((uint)*pbVar5 +
                          (uint)pbVar2[3] + ((uint)pbVar2[2] + (uint)pbVar2[1] * 2) * -6 +
                          (uint)*pbVar2 +
                          ((((uint)pbVar3[2] + (uint)pbVar3[1] * 2) * 6 - (uint)pbVar3[3]) -
                          (uint)*pbVar3) * 0xc +
                          ((((uint)pbVar4[2] + (uint)pbVar4[1] * 2) * 6 - (uint)pbVar4[3]) -
                          (uint)*pbVar4) * 6 +
                          (uint)pbVar5[3] + ((uint)pbVar5[2] + (uint)pbVar5[1] * 2) * -6 + 0x80) >>
                    8];
        pbVar2 = pbVar5 + iVar1 * -3 + 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      pbVar2 = pbVar2 + (iVar1 - param_4);
      param_2 = param_2 + (0x10 - param_4);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


