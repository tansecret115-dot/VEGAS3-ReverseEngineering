/* Module: sfxpfx1.dll
   Function: FUN_5c950120
   Address: 5c950120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c950120(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 6)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0xd0) + 0x10))
                      ((void *)(param_1 + -0xd0),&DAT_5c997194 + param_2 * 0x14);
    if (iVar1 == 0) {
      FUN_5c94fed0((void *)(param_1 + -0xd0),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


