/* Module: erv13260.dll
   Function: FUN_635fcf50
   Address: 635fcf50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fcf50(byte *param_1,int param_2,int param_3,byte *param_4)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = param_1 + param_2;
  pbVar3 = param_4 + param_2 * 2;
  while (param_3 = param_3 + -1, iVar1 = param_2, param_3 != 0) {
    while (iVar1 + -1 != 0) {
      *param_4 = *param_1;
      *pbVar3 = (byte)((int)(*param_1 + 1 + (uint)*pbVar4) >> 1);
      param_4[1] = (byte)((int)(*param_1 + 1 + (uint)param_1[1]) >> 1);
      pbVar3[1] = (byte)((int)((uint)*param_1 + (uint)*pbVar4 + (uint)pbVar4[1] + 2 +
                              (uint)param_1[1]) >> 2);
      param_1 = param_1 + 1;
      pbVar4 = pbVar4 + 1;
      param_4 = param_4 + 2;
      pbVar3 = pbVar3 + 2;
      iVar1 = iVar1 + -1;
    }
    bVar2 = *param_1;
    param_4[1] = bVar2;
    *param_4 = bVar2;
    bVar2 = (byte)((int)(*param_1 + 1 + (uint)*pbVar4) >> 1);
    pbVar3[1] = bVar2;
    *pbVar3 = bVar2;
    iVar1 = param_2 * 2 + 2;
    param_1 = param_1 + 1;
    param_4 = param_4 + iVar1;
    pbVar3 = pbVar3 + iVar1;
    pbVar4 = pbVar4 + 1;
  }
  while (param_2 = param_2 + -1, param_2 != 0) {
    bVar2 = *param_1;
    *pbVar3 = bVar2;
    *param_4 = bVar2;
    bVar2 = (byte)((int)(*param_1 + 1 + (uint)param_1[1]) >> 1);
    pbVar3[1] = bVar2;
    param_4[1] = bVar2;
    param_1 = param_1 + 1;
    param_4 = param_4 + 2;
    pbVar3 = pbVar3 + 2;
  }
  bVar2 = *param_1;
  pbVar3[1] = bVar2;
  *pbVar3 = bVar2;
  param_4[1] = bVar2;
  *param_4 = bVar2;
  return;
}


