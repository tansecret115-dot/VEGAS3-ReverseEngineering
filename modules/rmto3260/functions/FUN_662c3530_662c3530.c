/* Module: rmto3260.dll
   Function: FUN_662c3530
   Address: 662c3530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c3530(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  *(int *)(param_1 + 0x3c) = param_2;
  if (*(int *)(param_2 + 0x12) == 0) {
    iVar1 = -0x7ffbfffc;
  }
  if (-1 < iVar1) {
    (**(code **)(*(int *)(param_1 + -0x10) + 0x8c))
              ((int *)(param_1 + -0x10),*(undefined4 *)(param_2 + 8),param_3,param_4,&param_2);
  }
  return;
}


