/* Module: sfppack1.dll
   Function: FUN_5cdc6bb0
   Address: 5cdc6bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdc6bb0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0x1a)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x2b0) + 0x10))
                      ((void *)(param_1 + -0x2b0),&DAT_5ce2005c + param_2 * 0x90);
    if (iVar1 == 0) {
      FUN_5cdc6950((void *)(param_1 + -0x2b0),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


