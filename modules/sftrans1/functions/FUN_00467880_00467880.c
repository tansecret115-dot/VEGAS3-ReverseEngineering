/* Module: sftrans1.dll
   Function: FUN_00467880
   Address: 00467880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00467880(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1c8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return 0;
}


