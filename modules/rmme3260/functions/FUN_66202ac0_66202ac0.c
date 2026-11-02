/* Module: rmme3260.dll
   Function: FUN_66202ac0
   Address: 66202ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202ac0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x84))();
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0xd8) + 0x24))(iVar1 + 0xd8);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  piVar2 = FUN_66209270();
  *(int **)(param_1 + 0x14) = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(piVar2[0x36] + 0x20))(piVar2 + 0x36);
    return 0;
  }
  return 0x8007000e;
}


