/* Module: rnco3260.dll
   Function: FUN_636f5090
   Address: 636f5090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_636f5090(byte *param_1,byte *param_2,undefined4 *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  
  if ((int)param_4 < 0x10) {
    return 1;
  }
  *param_3 = (&DAT_63788b3c)[(uint)*param_1 - (uint)*param_2];
  if (1 < (int)(param_4 - 9)) {
    pbVar3 = param_2 + 2;
    puVar5 = param_3 + 3;
    pbVar6 = param_1 + 4;
    do {
      bVar1 = pbVar3[(int)param_1 - (int)param_2];
      bVar2 = *pbVar3;
      pbVar4 = pbVar3 + 8;
      puVar5[-2] = (&DAT_63788b3c)[(uint)pbVar6[-3] - (uint)pbVar3[-1]];
      puVar5[-1] = (&DAT_63788b3c)[(uint)bVar1 - (uint)bVar2];
      bVar1 = *pbVar6;
      bVar2 = pbVar3[2];
      *puVar5 = (&DAT_63788b3c)[(uint)pbVar6[-1] - (uint)pbVar3[1]];
      puVar5[1] = (&DAT_63788b3c)[(uint)bVar1 - (uint)bVar2];
      bVar1 = pbVar6[2];
      bVar2 = pbVar3[4];
      puVar5[2] = (&DAT_63788b3c)[(uint)pbVar6[1] - (uint)pbVar3[3]];
      puVar5[3] = (&DAT_63788b3c)[(uint)bVar1 - (uint)bVar2];
      bVar1 = pbVar6[4];
      bVar2 = pbVar3[6];
      puVar5[4] = (&DAT_63788b3c)[(uint)pbVar6[3] - (uint)pbVar3[5]];
      puVar5[5] = (&DAT_63788b3c)[(uint)bVar1 - (uint)bVar2];
      pbVar3 = pbVar4;
      puVar5 = puVar5 + 8;
      pbVar6 = pbVar6 + 8;
    } while ((int)(pbVar4 + (-1 - (int)param_2)) < (int)(param_4 - 9));
  }
  switch(param_4 - (param_4 & 0xfffffff8)) {
  default:
    return 1;
  case 7:
    param_3[param_4 - 6] = (&DAT_63788b3c)[(uint)param_1[param_4 - 6] - (uint)param_2[param_4 - 6]];
  case 6:
    param_3[param_4 - 5] = (&DAT_63788b3c)[(uint)param_1[param_4 - 5] - (uint)param_2[param_4 - 5]];
  case 5:
    param_3[param_4 - 4] = (&DAT_63788b3c)[(uint)param_1[param_4 - 4] - (uint)param_2[param_4 - 4]];
  case 4:
    param_3[param_4 - 3] = (&DAT_63788b3c)[(uint)param_1[param_4 - 3] - (uint)param_2[param_4 - 3]];
  case 3:
    param_3[param_4 - 2] = (&DAT_63788b3c)[(uint)param_1[param_4 - 2] - (uint)param_2[param_4 - 2]];
  case 2:
    param_3[param_4 - 1] = (&DAT_63788b3c)[(uint)param_1[param_4 - 1] - (uint)param_2[param_4 - 1]];
    return 1;
  }
}


