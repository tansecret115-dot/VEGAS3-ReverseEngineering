/* Module: rmme3260.dll
   Function: FUN_66264630
   Address: 66264630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66264630(int param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*(int *)(param_1 + 0x18) == 0)) {
    *(int **)(param_1 + 0x18) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    return 0;
  }
  return 0x80004005;
}


