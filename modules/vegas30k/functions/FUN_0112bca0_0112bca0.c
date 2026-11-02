/* Module: vegas30k.dll
   Function: FUN_0112bca0
   Address: 0112bca0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0112bca0(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar6 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
    iVar6 = 0;
  }
  else {
    iVar6 = piVar1[1] * iVar6 + piVar1[2];
  }
  uVar3 = *(int *)(iVar6 + 4) - *(int *)(param_1 + 0x40);
  uVar5 = param_3 / 0x91c;
  if (uVar3 < (uint)(param_3 / 0x91c)) {
    uVar5 = uVar3;
  }
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar5;
  if (uVar5 != 0) {
    for (uVar3 = uVar5 * 0x247 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)param_2 = 0;
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar2 = *(uint *)(iVar6 + 4);
  *param_4 = uVar5 * 0x91c;
  return uVar3 < uVar2;
}


