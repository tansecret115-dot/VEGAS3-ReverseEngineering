/* Module: sfppack3.dll
   Function: FUN_5cc73f07
   Address: 5cc73f07
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc73f07(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  FUN_5cc734f6(param_1);
  return;
}


