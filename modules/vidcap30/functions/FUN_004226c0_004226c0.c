/* Module: vidcap30.exe
   Function: FUN_004226c0
   Address: 004226c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004226c0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x820)) {
    piVar4 = (int *)(param_1 + 0x814);
    do {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                        (*(int **)(param_1 + 0x350),piVar4[-3],*piVar4);
      piVar1 = (int *)piVar4[-3];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar4[-3] = 0;
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *piVar4 = 0;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x820));
    *(undefined4 *)(param_1 + 0x820) = 0;
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0x820) = 0;
  return 0;
}


