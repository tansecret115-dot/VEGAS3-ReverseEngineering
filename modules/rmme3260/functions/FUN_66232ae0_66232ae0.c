/* Module: rmme3260.dll
   Function: FUN_66232ae0
   Address: 66232ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66232ae0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


