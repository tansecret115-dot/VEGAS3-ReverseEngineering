/* Module: sfcdi.dll
   Function: FUN_5bf513a0
   Address: 5bf513a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5bf513a0(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar6 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  if ((iVar6 < 0) || (iVar5 + -1 < iVar6)) {
    iVar6 = 0;
  }
  else {
    iVar6 = piVar1[1] * iVar6 + piVar1[2];
  }
  uVar4 = param_3 / 0x91c;
  uVar3 = *(int *)(iVar6 + 4) - *(int *)(param_1 + 0x40);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar4;
  for (uVar3 = uVar4; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar7 = param_2;
    for (iVar5 = 0x247; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    memmove(param_2,(void *)(iVar6 + 0xc),8);
    param_2 = param_2 + 0x247;
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar2 = *(uint *)(iVar6 + 4);
  *param_4 = uVar4 * 0x91c;
  return uVar3 < uVar2;
}


