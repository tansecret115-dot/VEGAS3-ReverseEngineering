/* Module: vegas30k.dll
   Function: FUN_01041710
   Address: 01041710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01041710(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0x8000ffff;
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x5c))(piVar1,param_2);
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  return 0;
}


