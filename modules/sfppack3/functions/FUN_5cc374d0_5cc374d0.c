/* Module: sfppack3.dll
   Function: FUN_5cc374d0
   Address: 5cc374d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc374d0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 9)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0xb8) + 0x10))
                      ((void *)(param_1 + -0xb8),&DAT_5cc9374c + param_2 * 0x14);
    if (iVar1 == 0) {
      FUN_5cc37240((void *)(param_1 + -0xb8),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


