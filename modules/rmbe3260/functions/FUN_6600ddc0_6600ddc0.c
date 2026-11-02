/* Module: rmbe3260.dll
   Function: FUN_6600ddc0
   Address: 6600ddc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600ddc0(int param_1,int *param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 2) {
    return 0x80040007;
  }
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int **)(param_1 + 0x17);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  *(int **)(param_1 + 0x17) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return 0;
}


