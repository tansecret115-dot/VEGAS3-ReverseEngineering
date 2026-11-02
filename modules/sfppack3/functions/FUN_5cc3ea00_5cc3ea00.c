/* Module: sfppack3.dll
   Function: FUN_5cc3ea00
   Address: 5cc3ea00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc3ea00(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 3)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0xa8) + 0x10))
                      ((void *)(param_1 + -0xa8),&DAT_5cc9438c + param_2 * 8);
    if (iVar1 == 0) {
      FUN_5cc3e7c0((void *)(param_1 + -0xa8),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


