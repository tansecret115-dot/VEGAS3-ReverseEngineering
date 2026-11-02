/* Module: sftrans1.dll
   Function: FUN_004a8530
   Address: 004a8530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004a8530(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1038);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1038) = 0;
  }
  return 0;
}


