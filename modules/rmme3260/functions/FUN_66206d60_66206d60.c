/* Module: rmme3260.dll
   Function: FUN_66206d60
   Address: 66206d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66206d60(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(int **)(param_1 + 0x1c) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return 0;
}


