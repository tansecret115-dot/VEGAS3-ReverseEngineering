/* Module: sfcdi.dll
   Function: FUN_5bf512a0
   Address: 5bf512a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5bf512a0(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  piVar6 = *(int **)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  if (piVar6 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar6;
  }
  if ((iVar4 < 0) || (iVar5 + -1 < iVar4)) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(piVar6[1] * iVar4 + piVar6[2]);
  }
  uVar3 = param_3 / 0x91c;
  uVar2 = piVar6[1] - *(int *)(param_1 + 0x40);
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar3;
  for (uVar2 = uVar3; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar7 = param_2;
    for (iVar4 = 0x247; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    memmove(param_2,piVar6 + 3,8);
    param_2 = param_2 + 0x247;
  }
  if ((*piVar6 == 0xe) && (*(int *)(param_1 + 0x40) == piVar6[1])) {
    *(undefined1 *)((int)param_2 + -0x916) = 0xe1;
    *(undefined1 *)((int)param_2 + -0x91a) = 0xe1;
  }
  uVar2 = *(uint *)(param_1 + 0x40);
  uVar1 = piVar6[1];
  *param_4 = uVar3 * 0x91c;
  return uVar2 < uVar1;
}


