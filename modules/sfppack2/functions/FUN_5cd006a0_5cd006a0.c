/* Module: sfppack2.dll
   Function: FUN_5cd006a0
   Address: 5cd006a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd006a0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 7)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x168) + 0x10))
                      ((void *)(param_1 + -0x168),&DAT_5cd627c4 + param_2 * 0x10);
    if (iVar1 == 0) {
      FUN_5cd00440((void *)(param_1 + -0x168),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


