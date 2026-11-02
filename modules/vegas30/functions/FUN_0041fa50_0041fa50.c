/* Module: vegas30.exe
   Function: FUN_0041fa50
   Address: 0041fa50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041fa50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x1c4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x1c0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x8c);
  if (iVar2 == 3) {
    piVar1 = *(int **)(param_1 + 0x90);
joined_r0x0041fabb:
    if (piVar1 == (int *)0x0) goto LAB_0041fac9;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  else {
    if (iVar2 != 4) {
      if (iVar2 != 5) goto LAB_0041fac9;
      piVar1 = *(int **)(param_1 + 0x90);
      goto joined_r0x0041fabb;
    }
    piVar1 = *(int **)(param_1 + 0x90);
    if (piVar1 == (int *)0x0) goto LAB_0041fac9;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
LAB_0041fac9:
  if (*(void **)(param_1 + 0x220) != (void *)0x0) {
    free(*(void **)(param_1 + 0x220));
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  return 0;
}


