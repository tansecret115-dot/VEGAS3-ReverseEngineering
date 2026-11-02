/* Module: rmbe3260.dll
   Function: FUN_660122e0
   Address: 660122e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660122e0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if ((short)*(uint *)(param_1 + 0x94) != 0) {
    iVar3 = 0;
    uVar2 = *(uint *)(param_1 + 0x94) & 0xffff;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x90) + iVar3);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_6605cdc0((void *)(param_1 + 0x90),0,0xffffffff);
  return 0;
}


