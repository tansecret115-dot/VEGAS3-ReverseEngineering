/* Module: vidpcore.dll
   Function: FUN_5de881b0
   Address: 5de881b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de881b0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x250);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x250) = 0;
  }
  return 0;
}


