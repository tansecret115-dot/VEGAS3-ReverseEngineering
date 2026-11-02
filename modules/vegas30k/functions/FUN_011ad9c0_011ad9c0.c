/* Module: vegas30k.dll
   Function: FUN_011ad9c0
   Address: 011ad9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011ad9c0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  piVar1 = *(int **)(param_1 + 0x668);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x54))(piVar1,param_2);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x66c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x60))(piVar1,param_2);
    return 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return 0;
}


