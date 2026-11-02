/* Module: vegas30.exe
   Function: FUN_004a58b0
   Address: 004a58b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a58b0(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = **(int **)(param_1 + 0xcd0);
  if (iVar3 < 1) {
    return 0;
  }
  uVar4 = 0;
  uVar5 = 0xffffffff;
  if (0 < iVar3) {
    piVar2 = (int *)(*(int **)(param_1 + 0xcd0))[2];
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      uVar4 = uVar4 | *(uint *)(iVar1 + 0x10);
      uVar5 = uVar5 & *(uint *)(iVar1 + 0x10);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar4;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar5;
  }
  return 1;
}


