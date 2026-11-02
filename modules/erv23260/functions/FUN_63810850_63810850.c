/* Module: erv23260.dll
   Function: FUN_63810850
   Address: 63810850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63810850(undefined1 *param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar1 = param_2;
  uVar2 = param_4 & 0xff;
  param_2 = (byte *)0x8;
  pbVar3 = pbVar1;
  do {
    pbVar3 = pbVar3 + param_3;
    *param_1 = (char)((int)((((uint)*pbVar1 + (uint)*pbVar3 + (uint)pbVar1[1] + (uint)pbVar3[1]) -
                            uVar2) + 2) >> 2);
    param_1[1] = (char)((int)((((uint)pbVar1[1] + (uint)pbVar3[1] + (uint)pbVar1[2] +
                               (uint)pbVar3[2]) - uVar2) + 2) >> 2);
    param_1[2] = (char)((int)((((uint)pbVar1[3] + (uint)pbVar3[3] + (uint)pbVar1[2] +
                               (uint)pbVar3[2]) - uVar2) + 2) >> 2);
    param_1[3] = (char)((int)((((uint)pbVar1[3] + (uint)pbVar3[3] + (uint)pbVar1[4] +
                               (uint)pbVar3[4]) - uVar2) + 2) >> 2);
    param_1[4] = (char)((int)((((uint)pbVar1[5] + (uint)pbVar3[5] + (uint)pbVar1[4] +
                               (uint)pbVar3[4]) - uVar2) + 2) >> 2);
    param_1[5] = (char)((int)((((uint)pbVar1[5] + (uint)pbVar3[5] + (uint)pbVar1[6] +
                               (uint)pbVar3[6]) - uVar2) + 2) >> 2);
    param_1[6] = (char)((int)((((uint)pbVar1[7] + (uint)pbVar3[7] + (uint)pbVar1[6] +
                               (uint)pbVar3[6]) - uVar2) + 2) >> 2);
    param_1[7] = (char)((int)((((uint)pbVar1[8] + (uint)pbVar3[8] + (uint)pbVar1[7] +
                               (uint)pbVar3[7]) - uVar2) + 2) >> 2);
    pbVar1 = pbVar1 + param_3;
    param_2 = param_2 + -1;
    param_1 = param_1 + 8;
  } while (param_2 != (byte *)0x0);
  return;
}


