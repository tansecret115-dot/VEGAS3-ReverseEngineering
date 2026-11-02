/* Module: erv23260.dll
   Function: FUN_63815720
   Address: 63815720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63815720(byte *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int local_8;
  
  if (param_3 != 0) {
    local_8 = 8;
    pbVar5 = param_1;
    do {
      iVar4 = 0;
      iVar6 = 8;
      pbVar3 = pbVar5;
      do {
        bVar2 = *pbVar3;
        pbVar1 = pbVar3 + param_2;
        pbVar3 = pbVar3 + 2;
        iVar6 = iVar6 + -1;
        iVar4 = (uint)bVar2 + iVar4 + (uint)*pbVar1;
      } while (iVar6 != 0);
      *param_4 = iVar4;
      param_4 = param_4 + 1;
      pbVar5 = pbVar5 + param_2 * 2;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    param_4 = (int *)0x8;
    pbVar5 = param_1 + 1;
    do {
      iVar4 = 0;
      iVar6 = 0x10;
      pbVar3 = pbVar5;
      do {
        bVar2 = *pbVar3;
        pbVar3 = pbVar3 + param_2;
        iVar4 = iVar4 + (uint)bVar2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pbVar5 = pbVar5 + 2;
      *param_5 = iVar4;
      param_5 = param_5 + 1;
      param_4 = (int *)((int)param_4 + -1);
    } while (param_4 != (int *)0x0);
  }
  return;
}


