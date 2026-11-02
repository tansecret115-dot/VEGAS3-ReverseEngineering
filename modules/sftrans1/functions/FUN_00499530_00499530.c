/* Module: sftrans1.dll
   Function: FUN_00499530
   Address: 00499530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00499530(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1f8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  return 0;
}


