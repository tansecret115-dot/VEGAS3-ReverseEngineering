/* Module: erv23260.dll
   Function: FUN_63817690
   Address: 63817690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63817690(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = param_1[param_2 * 6] + param_1[param_2];
  iVar1 = param_1[param_2 * 5] + param_1[param_2 * 2];
  iVar3 = param_1[param_2 * 7] + *param_1;
  iVar6 = param_1[param_2 * 3] + param_1[param_2 * 4];
  iVar7 = iVar6 + iVar3;
  iVar3 = iVar3 - iVar6;
  iVar2 = iVar1 + iVar5;
  iVar5 = iVar5 - iVar1;
  iVar6 = param_1[param_2] - param_1[param_2 * 6];
  iVar1 = *param_1 - param_1[param_2 * 7];
  iVar4 = param_1[param_2 * 2] - param_1[param_2 * 5];
  iVar8 = param_1[param_2 * 3] - param_1[param_2 * 4];
  *param_1 = (iVar7 + iVar2) * 0x16a;
  param_1[param_2] = iVar4 * 0x11c + iVar8 * 100 + iVar1 * 0x1f6 + iVar6 * 0x1aa;
  param_1[param_2 * 2] = iVar3 * 0x1d9 + iVar5 * 0xc4;
  param_1[param_2 * 3] = iVar8 * -0x11c + iVar6 * -100 + iVar4 * -0x1f6 + iVar1 * 0x1aa;
  param_1[param_2 * 4] = (iVar7 - iVar2) * 0x16a;
  param_1[param_2 * 5] = iVar1 * 0x11c + iVar4 * 100 + iVar6 * -0x1f6 + iVar8 * 0x1aa;
  param_1[param_2 * 6] = iVar3 * 0xc4 + iVar5 * -0x1d9;
  param_1[param_2 * 7] = iVar1 * 100 + iVar6 * -0x11c + iVar8 * -0x1f6 + iVar4 * 0x1aa;
  return;
}


