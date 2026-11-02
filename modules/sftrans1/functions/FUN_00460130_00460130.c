/* Module: sftrans1.dll
   Function: FUN_00460130
   Address: 00460130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00460130(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x270);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  return 0;
}


