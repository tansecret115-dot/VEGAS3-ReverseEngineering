/* Module: vegas30k.dll
   Function: FUN_011a2700
   Address: 011a2700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011a2700(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x224);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x224) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


