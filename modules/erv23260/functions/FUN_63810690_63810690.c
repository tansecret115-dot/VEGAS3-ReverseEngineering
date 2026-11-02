/* Module: erv23260.dll
   Function: FUN_63810690
   Address: 63810690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63810690(int *param_1,byte *param_2,byte *param_3,int param_4,uint param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = param_5 & 0xff;
  param_5 = 8;
  pbVar4 = param_3;
  do {
    pbVar4 = pbVar4 + param_4;
    *param_1 = (uint)*param_2 -
               ((int)((((uint)*param_3 + (uint)*pbVar4 + (uint)param_3[1] + (uint)pbVar4[1]) - uVar5
                      ) + 2) >> 2);
    param_1[1] = (uint)param_2[1] -
                 ((int)((((uint)pbVar4[2] + (uint)param_3[1] + (uint)pbVar4[1] + (uint)param_3[2]) -
                        uVar5) + 2) >> 2);
    param_1[2] = (uint)param_2[2] -
                 ((int)((((uint)pbVar4[2] + (uint)param_3[3] + (uint)pbVar4[3] + (uint)param_3[2]) -
                        uVar5) + 2) >> 2);
    param_1[3] = (uint)param_2[3] -
                 ((int)((((uint)param_3[4] + (uint)pbVar4[4] + (uint)param_3[3] + (uint)pbVar4[3]) -
                        uVar5) + 2) >> 2);
    param_1[4] = (uint)param_2[4] -
                 ((int)((((uint)param_3[5] + (uint)param_3[4] + (uint)pbVar4[4] + (uint)pbVar4[5]) -
                        uVar5) + 2) >> 2);
    param_1[5] = (uint)param_2[5] -
                 ((int)((((uint)param_3[5] + (uint)pbVar4[6] + (uint)param_3[6] + (uint)pbVar4[5]) -
                        uVar5) + 2) >> 2);
    param_1[6] = (uint)param_2[6] -
                 ((int)((((uint)param_3[7] + (uint)pbVar4[7] + (uint)pbVar4[6] + (uint)param_3[6]) -
                        uVar5) + 2) >> 2);
    pbVar1 = param_3 + 8;
    pbVar2 = param_3 + 7;
    pbVar3 = param_2 + 7;
    param_2 = param_2 + param_4;
    param_3 = param_3 + param_4;
    param_1[7] = (uint)*pbVar3 -
                 ((int)((((uint)*pbVar1 + (uint)pbVar4[8] + (uint)*pbVar2 + (uint)pbVar4[7]) - uVar5
                        ) + 2) >> 2);
    param_5 = param_5 - 1;
    param_1 = param_1 + 8;
  } while (param_5 != 0);
  return;
}


