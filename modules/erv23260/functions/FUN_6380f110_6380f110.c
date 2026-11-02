/* Module: erv23260.dll
   Function: FUN_6380f110
   Address: 6380f110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6380f110(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = param_1[1] * iVar1 + *(int *)(param_2 + 4) + *param_1;
  iVar6 = 0;
  iVar5 = 0x10;
  iVar3 = iVar2;
  do {
    iVar4 = 0;
    do {
      iVar6 = iVar6 + (uint)*(byte *)(iVar4 + iVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x10);
    iVar3 = iVar3 + iVar1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_2 = 0x10;
  iVar3 = 0;
  do {
    iVar5 = 0;
    do {
      iVar4 = (uint)*(byte *)(iVar5 + iVar2) - (iVar6 >> 8);
      if (iVar4 < 0) {
        iVar4 = (iVar6 >> 8) - (uint)*(byte *)(iVar5 + iVar2);
      }
      iVar3 = iVar3 + iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x10);
    iVar2 = iVar2 + iVar1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return iVar3;
}


