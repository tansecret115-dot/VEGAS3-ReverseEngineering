/* Module: vidcap30.exe
   Function: thunk_FUN_00473e20
   Address: 004739d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_00473e20(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) == 1) {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 == (int *)0x0) goto LAB_00473e51;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  else {
    if ((*(int *)(param_1 + 4) != 2) || (piVar1 = *(int **)(param_1 + 0x28), piVar1 == (int *)0x0))
    goto LAB_00473e51;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
LAB_00473e51:
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffffffb;
  return;
}


