/* Module: vegas30k.dll
   Function: FUN_011d0a50
   Address: 011d0a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011d0a50(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2b8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  if (param_2 != (int *)0x0) {
    *(int **)(param_1 + 0x2b8) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


