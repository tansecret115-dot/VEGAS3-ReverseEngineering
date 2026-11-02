/* Module: rmbe3260.dll
   Function: FUN_6602a770
   Address: 6602a770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6602a770(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_6602a870((void *)(param_1 + -0x10),param_2,param_3);
  if ((uVar1 & 0x80000000) == 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(int **)(param_1 + 0xc) = param_3;
  }
  return;
}


