/* Module: sfppack3.dll
   Function: FUN_5cc32a70
   Address: 5cc32a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc32a70(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0x10)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x420) + 0x10))
                      ((void *)(param_1 + -0x420),&DAT_5cc93454 + param_2 * 0x20);
    if (iVar1 == 0) {
      FUN_5cc32830((void *)(param_1 + -0x420),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


