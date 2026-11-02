/* Module: vegas30k.dll
   Function: FUN_0113d2a0
   Address: 0113d2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0113d2a0(uint param_1,int *param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 300) == 0) && (*(int *)(param_1 + 8) == 0)) {
    *(int **)(param_1 + 300) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    iVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x10))
                      (*(int **)(param_1 + 300),-(uint)(param_1 != 4) & param_1,param_2);
    if (iVar1 < 0) {
      (**(code **)(**(int **)(param_1 + 300) + 8))(*(int **)(param_1 + 300));
      *(undefined4 *)(param_1 + 300) = 0;
      return iVar1;
    }
    return 0;
  }
  return -0x7ffbfdfc;
}


