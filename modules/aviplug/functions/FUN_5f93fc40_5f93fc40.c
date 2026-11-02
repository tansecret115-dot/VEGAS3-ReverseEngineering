/* Module: aviplug.dll
   Function: FUN_5f93fc40
   Address: 5f93fc40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f93fc40(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = param_4;
  *param_3 = 0;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (*(int *)(param_1 + 0x94) == -1) {
    return 0x8000ffff;
  }
  uVar3 = *(uint *)(param_1 + 0x90);
  uVar5 = param_2 + 8;
  if (uVar3 != 0) {
    if (uVar3 < 3) {
      uVar4 = uVar5 + (uVar5 & 1);
      goto LAB_5f93fcd8;
    }
    if (uVar3 == 4) {
      uVar5 = (uVar5 & 1) + uVar5;
      uVar4 = uVar5 + 3 & 0xfffffffc;
      if ((uVar4 != uVar5) && (uVar4 - uVar5 < 8)) {
        uVar4 = uVar4 + 8;
      }
      goto LAB_5f93fcd8;
    }
  }
  uVar5 = (uVar5 & 1) + uVar5;
  uVar4 = uVar5 + (uVar3 - 1) & ~(uVar3 - 1);
  if ((uVar4 != uVar5) && (uVar4 - uVar5 < 8)) {
    uVar4 = uVar4 + uVar3;
  }
LAB_5f93fcd8:
  puVar2 = *(undefined4 **)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x4c) < (int)uVar4) {
    puVar2 = FUN_5f943000(puVar2,uVar4,0,0,(SIZE_T *)&param_4,(SIZE_T *)0x0);
    if (puVar2 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    *(undefined4 **)(param_1 + 0x48) = puVar2;
    *(int **)(param_1 + 0x4c) = param_4;
    *puVar2 = 0x6c636f6c;
    puVar2[1] = param_4 + -2;
  }
  *param_3 = *(int *)(param_1 + 0x48) + 8;
  if (piVar1 != (int *)0x0) {
    uVar3 = puVar2[1];
    if ((uint)puVar2[1] < uVar4) {
      uVar3 = uVar4;
    }
    *piVar1 = uVar3 - 8;
  }
  return 0;
}


