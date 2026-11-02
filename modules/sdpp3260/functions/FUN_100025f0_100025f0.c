/* Module: sdpp3260.dll
   Function: FUN_100025f0
   Address: 100025f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_100025f0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return *(undefined4 *)(param_1 + 0x10);
}


