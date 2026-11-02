/* Module: vegas30k.dll
   Function: FUN_011c1e10
   Address: 011c1e10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c1e10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 1;
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0xc)) {
    while (piVar1 = *(int **)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 4),
          iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_3,param_4), iVar2 = 0,
          iVar3 != 0) {
      if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x10)) {
        return iVar3;
      }
      uVar4 = *(uint *)(param_1 + 0x10) + 1;
      *(uint *)(param_1 + 0x10) = uVar4;
      if (*(uint *)(param_1 + 0xc) <= uVar4) {
        return iVar3;
      }
    }
  }
  return iVar2;
}


