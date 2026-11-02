/* Module: rmbe3260.dll
   Function: FUN_6601bba0
   Address: 6601bba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601bba0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int **)(param_1 + 0x68);
  *param_2 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


