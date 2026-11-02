/* Module: rmme3260.dll
   Function: FUN_662338c0
   Address: 662338c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662338c0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x11);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  return;
}


