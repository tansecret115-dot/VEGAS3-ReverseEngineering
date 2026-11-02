/* Module: sfppack1.dll
   Function: FUN_5cdce9f0
   Address: 5cdce9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdce9f0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0xd)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x4b8) + 0x10))
                      ((void *)(param_1 + -0x4b8),&DAT_5ce2109c + param_2 * 0x30);
    if (iVar1 == 0) {
      FUN_5cdce7b0((void *)(param_1 + -0x4b8),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


