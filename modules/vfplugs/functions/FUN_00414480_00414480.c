/* Module: vfplugs.dll
   Function: FUN_00414480
   Address: 00414480
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00414480(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


