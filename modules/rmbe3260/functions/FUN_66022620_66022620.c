/* Module: rmbe3260.dll
   Function: FUN_66022620
   Address: 66022620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66022620(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(int **)(param_1 + 0x24) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return 0;
}


