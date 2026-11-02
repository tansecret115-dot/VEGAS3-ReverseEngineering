/* Module: sfxpfx2.dll
   Function: FUN_5c893410
   Address: 5c893410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c893410(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 5)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x2218) + 0x10))
                      ((void *)(param_1 + -0x2218),&DAT_5c8e72ec + param_2 * 300);
    if (iVar1 == 0) {
      FUN_5c8931b0((void *)(param_1 + -0x2218),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


