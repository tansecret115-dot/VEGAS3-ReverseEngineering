/* Module: sftrkfx1.dll
   Function: FUN_5cbf0030
   Address: 5cbf0030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbf0030(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_5cbf40fd();
  return;
}


