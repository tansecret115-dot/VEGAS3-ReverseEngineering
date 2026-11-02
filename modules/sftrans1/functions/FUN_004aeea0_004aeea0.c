/* Module: sftrans1.dll
   Function: FUN_004aeea0
   Address: 004aeea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004aeea0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1d0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  return 0;
}


