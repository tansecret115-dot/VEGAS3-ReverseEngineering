/* Module: erv23260.dll
   Function: FUN_637fde90
   Address: 637fde90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637fde90(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = param_4 + 7U & 0xfffffff8;
  iVar7 = param_2 - (int)param_1;
  uVar5 = uVar4;
  do {
    do {
      uVar1 = param_1[1];
      *(undefined4 *)(iVar7 + (int)param_1) = *param_1;
      *(undefined4 *)(iVar7 + 4 + (int)param_1) = uVar1;
      param_1 = param_1 + 2;
      uVar6 = uVar5 - 8;
      bVar2 = 7 < (int)uVar5;
      uVar5 = uVar6;
    } while (uVar6 != 0 && bVar2);
    param_1 = (undefined4 *)((int)param_1 + (param_5 - uVar4));
    iVar3 = param_3 + -1;
    bVar2 = 0 < param_3;
    param_3 = iVar3;
    uVar5 = uVar4;
  } while (iVar3 != 0 && bVar2);
  return;
}


