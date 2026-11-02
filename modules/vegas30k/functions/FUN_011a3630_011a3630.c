/* Module: vegas30k.dll
   Function: FUN_011a3630
   Address: 011a3630
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a3630(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 1;
  if (*(int *)(param_1 + 0x14) != 0) {
    while( true ) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x10) + uVar3 * 4);
      iVar2 = (**(code **)(*piVar1 + 0x40))(piVar1);
      if (iVar2 < 0) break;
      uVar3 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x14) <= uVar3) {
        return iVar2;
      }
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + uVar3 * 4);
    (**(code **)(*piVar1 + 0x44))(piVar1);
  }
  return iVar2;
}


