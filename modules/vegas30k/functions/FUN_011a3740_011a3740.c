/* Module: vegas30k.dll
   Function: FUN_011a3740
   Address: 011a3740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a3740(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    while (piVar1 = *(int **)(*(int *)(param_1 + 0x10) + uVar3 * 4),
          iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,param_2,param_3), -1 < iVar2) {
      uVar3 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x14) <= uVar3) {
        return iVar2;
      }
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + uVar3 * 4);
    (**(code **)(*piVar1 + 0x34))(piVar1);
  }
  return iVar2;
}


