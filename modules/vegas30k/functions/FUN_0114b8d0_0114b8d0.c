/* Module: vegas30k.dll
   Function: FUN_0114b8d0
   Address: 0114b8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0114b8d0(int param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = piVar1[1] * iVar3 + piVar1[2];
  }
  uVar5 = *(int *)(iVar3 + 4) * 0x800;
  uVar4 = uVar5 - *(int *)(param_1 + 0x30);
  if (uVar4 < param_3) {
    param_3 = uVar4;
  }
  for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_2 = 0;
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
  *param_4 = param_3;
  if (*(uint *)(param_1 + 0x30) < uVar5) {
    return 1;
  }
  return 0;
}


