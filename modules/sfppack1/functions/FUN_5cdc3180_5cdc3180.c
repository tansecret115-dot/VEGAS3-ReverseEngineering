/* Module: sfppack1.dll
   Function: FUN_5cdc3180
   Address: 5cdc3180
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdc3180(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 7)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0xc0) + 0x10))
                      ((void *)(param_1 + -0xc0),&DAT_5ce1febc + param_2 * 0x18);
    if (iVar1 == 0) {
      FUN_5cdc2f40((void *)(param_1 + -0xc0),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


