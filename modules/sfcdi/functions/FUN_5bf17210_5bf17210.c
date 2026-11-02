/* Module: sfcdi.dll
   Function: FUN_5bf17210
   Address: 5bf17210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf17210(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x20))();
  iVar4 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x24))(uVar3);
      uVar2 = FUN_5bf171b0(param_1);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x96 + uVar2;
    } while (uVar3 < uVar1);
  }
  return iVar4;
}


