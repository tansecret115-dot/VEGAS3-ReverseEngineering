/* Module: sfppack2.dll
   Function: FUN_5cd3d3f7
   Address: 5cd3d3f7
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cd3d3f7(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  FUN_5cd3c9e6(param_1);
  return;
}


