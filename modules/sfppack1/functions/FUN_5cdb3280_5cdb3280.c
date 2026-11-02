/* Module: sfppack1.dll
   Function: FUN_5cdb3280
   Address: 5cdb3280
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdb3280(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 4)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x138) + 0x10))
                      ((void *)(param_1 + -0x138),&DAT_5ce1f7a0 + param_2 * 0x28);
    if (iVar1 == 0) {
      FUN_5cdb2ff0((void *)(param_1 + -0x138),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


