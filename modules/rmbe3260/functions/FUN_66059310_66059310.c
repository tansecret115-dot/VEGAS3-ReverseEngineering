/* Module: rmbe3260.dll
   Function: FUN_66059310
   Address: 66059310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66059310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x10))
                    (*(int **)(param_1 + 0x40),param_2,param_3,param_4,0);
  if (-1 < iVar1) {
    (**(code **)(*(int *)(param_1 + -0x10) + 0x2c))(param_1 + -0x10);
  }
  return;
}


