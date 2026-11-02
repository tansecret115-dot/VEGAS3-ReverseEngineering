/* Module: sfxpfx2.dll
   Function: FUN_5c89c1b0
   Address: 5c89c1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c89c1b0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 8)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x310) + 0x10))
                      ((void *)(param_1 + -0x310),&DAT_5c8e7b7c + param_2 * 0x10);
    if (iVar1 == 0) {
      FUN_5c89bf70((void *)(param_1 + -0x310),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


