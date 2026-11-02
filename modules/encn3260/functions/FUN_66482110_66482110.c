/* Module: encn3260.dll
   Function: FUN_66482110
   Address: 66482110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66482110(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    FUN_66483190((void *)(param_1 + -0x14),param_2,s_Initialization_error_664e20fc);
    return 0;
  }
  if (*(int *)(param_1 + 0x52) != 0) {
    *(undefined4 *)(param_1 + 0x52) = 0;
    (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(*(int **)(param_1 + 0x18),0);
    return 0;
  }
  iVar1 = FUN_664831e0((int *)(param_1 + -0x14));
  return iVar1;
}


