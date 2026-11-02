/* Module: auth3260.dll
   Function: FUN_627a2720
   Address: 627a2720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a2720(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 == (int *)0x0) goto LAB_627a2765;
  if (-1 < param_2) {
    iVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 0x48));
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))(*(int **)(param_1 + 0x4c),param_3);
      goto LAB_627a2765;
    }
    if (-1 < param_2) goto LAB_627a2765;
  }
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x10))
            (*(int **)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x48));
LAB_627a2765:
  piVar2 = (int *)FUN_627a6140((undefined4 *)(param_1 + 0x20));
  (**(code **)(*piVar2 + 0xc))(piVar2,param_2,param_3);
  return 0;
}


