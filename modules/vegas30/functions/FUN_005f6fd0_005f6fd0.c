/* Module: vegas30.exe
   Function: FUN_005f6fd0
   Address: 005f6fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005f6fd0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) == 2) {
    if (*(int *)(param_1 + 0x28) == 0) goto LAB_005f700a;
    FUN_0058eed0(param_1);
    (**(code **)(**(int **)(param_1 + 0x28) + 8))(*(int **)(param_1 + 0x28));
  }
  else {
    if ((*(int *)(param_1 + 4) != 3) || (piVar1 = *(int **)(param_1 + 0x28), piVar1 == (int *)0x0))
    goto LAB_005f700a;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
LAB_005f700a:
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


